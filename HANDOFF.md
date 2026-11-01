# `newnl.dll` reverse-engineering handoff

## Scope and status

This is a **static-analysis handoff**, not the original source and not a buildable project. The observations below come from Ghidra pseudocode and PE metadata; they have not been validated by running the DLL. Function names such as `FUN_1803ca1e0` are generated labels, not recovered developer names. The descriptions in this document are working interpretations, not authoritative names or a complete map of the DLL.

- Input: Windows x64 native PE DLL, SHA-256 `03c8ab74b4318cf17c87be8b39f4d868dba4ee1aa45d60fe38ab781a54b3eb57`.
- The outer Ghidra project reports 10,338 non-external functions, including 323 entries in the [embedded PE's raw bytes](STATIC_ANALYSIS.md#embedded-steam-profile-helper). The outer export has 10,336 successful decompilations and two failures. A separate, correctly section-mapped embedded-PE export has 379 successes and one failure. Success means Ghidra produced output, not that the result is correct or complete.
- The embedded PDB path is `E:\Projects\neverlose-v2\bin\x64\Release\neverlose.pdb`; that PDB was not available during analysis. This is an identification clue, not proof of provenance.
- The export is incomplete as source: unknown types and globals, guessed signatures, unresolved indirect control flow, and missing function bodies prevent a faithful build. Do not infer behavior by compiling patched-up pseudocode.

## Files and navigation

| Artifact | Purpose |
| --- | --- |
| [`newnl.dll`](newnl.dll) | Original input. Preserve it unchanged for verification. |
| [`newnl_decompiled.c`](newnl_decompiled.c) | Complete Ghidra pseudocode export, including failure markers. |
| [`newnl_readable/index.tsv`](newnl_readable/index.tsv) | Function address, generated name, split filename and line, original line, failure flag, and warning count. |
| [`newnl_readable/`](newnl_readable/) | Original export split into 104 address-ordered files. Concatenating them in filename order reproduces the original export. |
| [`newnl_failed_functions.asm`](newnl_failed_functions.asm) | Linear disassembly near the two failed functions; this is not a verified control-flow listing. |
| [`steam_profile_helper_decompiled.c`](newnl_research/steam_profile_helper_decompiled.c) | Separate Ghidra pseudocode export of the embedded PE; not buildable source. See the [helper analysis](STATIC_ANALYSIS.md#embedded-steam-profile-helper) for extraction and limits. |
| [`STATIC_ANALYSIS.md`](STATIC_ANALYSIS.md) | Extended PE inventory, hook-registration map, filesystem and URL leads, and further investigation guidance. |

From this directory, use the index to find a function, then open its listed file and line:

```sh
grep -F '1803ca1e0' newnl_readable/index.tsv
less +1266 newnl_readable/1803c8660-1803de1b0.c
```

Search the unsplit export for a literal API or configuration key:

```sh
grep -nF 'WinHttpSendRequest' newnl_decompiled.c
grep -nF 'ragebot.hitboxes' newnl_decompiled.c
```

The index's `original_line` is a line in `newnl_decompiled.c`; `file` and `line` point to the split copy. `warning_count` counts literal `WARNING:` markers within a function; zero does **not** establish correctness. To find a caller, search the exact generated name, then use the closest preceding `/* ===== ... ===== */` header or the index to identify its enclosing function. Indirect calls and cross-references through data are not necessarily found by text search.

## Addresses and interpretation

PE metadata gives a preferred image base of `0x180000000` and entry-point RVA `0x4ed880`. Function labels and addresses in the pseudocode are virtual addresses relative to that preferred base. For example, `0x1803ca1e0 - 0x180000000 = 0x3ca1e0` RVA. Under ASLR, a runtime address is the **actual loaded module base plus RVA**; do not use a preferred-base virtual address as a fixed runtime address. RVAs are not file offsets.

`DAT_...` denotes an address-labelled data location, not a verified variable name or type. `param_...`, `local_...`, `unaff_...`, `in_...`, and `extraout_...` are decompiler artifacts. `undefined1/4/8` denote unidentified values of 1, 4, or 8 bytes; they do not specify intended signedness or structure. Warnings about indirect jumps, overlapping globals, stack/register state, and inserted security-cookie handling are material to interpreting the output. Confirm important claims in disassembly or a Ghidra project before using them as detection evidence.

## Observed startup and integration

The following is a selected, evidence-backed path, not a complete call graph:

1. [PE entry `entry` at `0x1804ed880`](newnl_readable/1804ebe70-1804eeae0.c#L1774) invokes `FUN_1804ed740`; that function calls `FUN_1803ca1e0` ([call site](newnl_decompiled.c#L881365)). The decompiled signatures are inferred and are not guaranteed to match the Windows ABI.
2. [DLL callback `FUN_1803ca1e0`](newnl_readable/1803c8660-1803de1b0.c#L1266) handles reason `1`: it stores the module handle, disables thread notifications, creates `FUN_1803c93f0` as a worker thread, and returns failure if thread creation fails.
3. [Worker `FUN_1803c93f0`](newnl_readable/1803c8660-1803de1b0.c#L714) waits for `client.dll`, `engine2.dll`, and `schemasystem.dll`, sleeping 250 ms per iteration; its error path unloads after roughly 60 seconds ([wait loop](newnl_decompiled.c#L671837)). It logs additional module availability. It resolves `SchemaSystem_001` through `CreateInterface` and requests the `client.dll` type scope ([schema path](newnl_decompiled.c#L671949)).
4. The same worker reports present-hook initialization failures and later calls `FUN_1801cf6d0` for game-hook initialization; failure leads to an error/unload path ([hook initialization](newnl_decompiled.c#L672204)). Exact sequencing and all failure paths require verification because the worker has decompiler warnings.
5. [Engine lookup `FUN_1800d6d50`](newnl_readable/1800d3d50-1800e0fd0.c#L2648) obtains `Source2EngineToClient001` from `engine2.dll` via `CreateInterface`. [Steam lookup `FUN_1800dd490`](newnl_readable/1800d3d50-1800e0fd0.c#L9407) resolves Steam friends, utilities, and user interfaces and several avatar/Steam ID API pointers. These calls show integration points, not what data was actually collected or sent.

## Selected code paths

| Area | Starting point | What the pseudocode directly shows |
| --- | --- | --- |
| Pointer replacement | [`FUN_180020330`](newnl_readable/180016bc0-1800239d0.c#L6516) | Calls `VirtualProtect` for eight bytes, writes a replacement pointer, and attempts to restore protection. The restore result is not checked in this function. |
| Page-range checks | [`FUN_1801d1c60`](newnl_decompiled.c#L302751) | Checks uncached ranges with `VirtualQuery`; [synthetic tracing](STATIC_ANALYSIS.md#cached-page-range-checks) shows cached pages are not re-queried by this routine. Actual protections and execution remain unverified. |
| Inline hook engine | [`FUN_180428df0`](newnl_decompiled.c#L732710) | Validates targets and builds trampoline records; the [engine trace](STATIC_ANALYSIS.md#hook-engine-mechanics) documents patch bytes, relocation, thread handling, and verification limits. |
| Client-mode callback | [`FUN_180020c10`](newnl_readable/180016bc0-1800239d0.c#L6824) | Searches for `ClientModeCSNormal`; on a successful path, stores an original pointer and replaces a pointer with `FUN_1800202f0` under `VirtualProtect` ([write](newnl_decompiled.c#L22438)). The replacement calls the saved pointer and conditionally calls other functions ([callback](newnl_decompiled.c#L21904)). |
| Direct3D 11 setup | [`FUN_1801cf0b0`](newnl_readable/1801c4b90-1801d1e00.c#L8031) | Registers a `neverlose_dummy` window class, creates a window and calls `D3D11CreateDeviceAndSwapChain`; later attempts several operations labelled as wireframe hooks, including `draw_indexed` ([hook attempts](newnl_decompiled.c#L301304)). Argument recovery for the D3D call is incomplete. |
| Input hooks | [`FUN_1801cf6d0`](newnl_readable/1801c4b90-1801d1e00.c#L8243) | Resolves `GetRawInputData` and `GetRawInputBuffer` from `user32.dll` and attempts registration. The [callback trace](STATIC_ANALYSIS.md#raw-input-callback-trace) documents conditional mouse-field changes and state gates; actual hook installation remains unverified. |
| Window messages | [`FUN_1801cd870`](newnl_decompiled.c#L300341) | Conditional subclass routes input and a private message; see [routing and teardown](STATIC_ANALYSIS.md#window-procedure-routing-and-teardown) for forwarding conditions and the `0x20d` exception. |
| Console filtering | [`FUN_18026f610`](newnl_decompiled.c#L419564) | [Trace](STATIC_ANALYSIS.md#console-channel-filter-and-log_flags-wrapper) covers channel flag snapshots, restoration, `log_flags` callback handling and resolution limits. |
| Embedded helper loader | [`FUN_181253d40`](newnl_decompiled.c#L975574) | [Trace](STATIC_ANALYSIS.md#embedded-steam-profile-helper) covers temporary-file writes, optional deletion, export caching and failure paths; actual file or module activity is unverified. |
| Profile consumers | [`FUN_1812222e1`](newnl_decompiled.c#L975514) and [`FUN_18122232f`](newnl_decompiled.c#L975535) | [Trace](STATIC_ANALYSIS.md#profile-consumers-and-fallback-assets) covers persona/avatar fallback and the embedded image; real account access and rendering remain unverified. |
| Paint-kit map discovery | [`FUN_180277e90`](newnl_decompiled.c#L426313) | [Trace](STATIC_ANALYSIS.md#paint-kit-map-discovery) covers candidate selection, record filters and caching; [localization fallback](STATIC_ANALYSIS.md#schema-localization-and-fallback) is separately exercised. Actual game structures and cosmetic changes remain unverified. |
| Composite request | [`FUN_1801ccbc0`](newnl_decompiled.c#L299670) | [Owner selection](STATIC_ANALYSIS.md#composite-owner-selection), [tint packing](STATIC_ANALYSIS.md#tint-float-packing), [window tracking](STATIC_ANALYSIS.md#tint-window-and-consumption-tracking), [direct/window accounting](STATIC_ANALYSIS.md#direct-versus-window-tint-accounting) and [wrappers](STATIC_ANALYSIS.md#composite-append-and-container-wrappers) trace markers, writes and callback order. Synthetic emulation only; live behavior remains unverified. |
| ACK serialization | [`FUN_1801c9a20`](newnl_decompiled.c#L297294) | [Trace](STATIC_ANALYSIS.md#ack-serialization-and-fake-ping) covers fake-ping gates and resets, byte-buffer handling, timing and emulation limits; live traffic is unverified. |
| Move jitter | [`FUN_1801ca4b0`](newnl_decompiled.c#L297782) | [Trace](STATIC_ANALYSIS.md#move-callback-jitter) covers callback-skipping thresholds, override state and emulation limits; live packet effects are unverified. |
| Game events | [`event_listener_registrations.tsv`](newnl_research/event_listener_registrations.tsv) | 34 static calls to the identified listener helper, including 33 literal registrations and one runtime-indexed script path. See the [event trace](STATIC_ANALYSIS.md#game-event-listener-registration-and-dispatch) for dispatcher behavior, impact coordinates and particle-related paths. |
| Player chat | [`FUN_180270290`](newnl_decompiled.c#L420173) | [Trace](STATIC_ANALYSIS.md#player-chat-event-and-display-bridge) covers server/team gates, SayText2 construction, fallback handling and isolated verification. |
| Vote and purchase logging | [`FUN_1800d97c0`](newnl_decompiled.c#L162871) and [`FUN_1800d5d70`](newnl_decompiled.c#L158544) | [Trace](STATIC_ANALYSIS.md#vote-and-purchase-event-logging) covers event fields, team selectors, vote formatting, purchase batching and emulation limits. |
| Grenade events | [`FUN_180386cc0`](newnl_decompiled.c#L624290) and [`FUN_180256180`](newnl_decompiled.c#L400324) | Separate particle-effect and local result-tracking paths share event names. The [grenade trace](STATIC_ANALYSIS.md#grenade-events-effects-and-result-matching) maps native thunks, gates, state transitions and emulation limits. |
| Sound markers | [`FUN_180233b60`](newnl_decompiled.c#L375134) | The sound hook and footstep fallback feed a bounded marker queue; the [sound trace](STATIC_ANALYSIS.md#sound-markers-and-footstep-fallback) documents gates, expiry, emulation and the misleading log filename. |
| HTTP | [`FUN_180095270`](newnl_readable/180085b80-180096fe0.c#L10594) | Parses a supplied URL, uses WinHTTP, and reads a response with an 8 MiB limit. See the [request and completion trace](STATIC_ANALYSIS.md#request-and-completion-contract) and [read-failure caveat](STATIC_ANALYSIS.md#response-read-caveat); destinations and live traffic remain unverified. |
| HTTP worker creation | [`FUN_1800966d0`](newnl_readable/180085b80-180096fe0.c#L11742) | Checks a counter against 8, increments it, and starts `FUN_180096360` in a thread; decrements on thread creation failure. Do not assume the counter check is an atomic concurrency guarantee. |
| Script interfaces | [`script_api_inventory.tsv`](newnl_research/script_api_inventory.tsv) | Selected memory, file, HTTP, hook, entity and clipboard bindings with handler addresses and observed gates. See the [permission-state analysis](STATIC_ANALYSIS.md#script-capabilities-and-permission-state); these are capabilities, not observed script actions. |
| Configuration keys | [`FUN_1800ff4a0`](newnl_readable/1800fe830-180155e70.c#L604) | Associates strings including `ragebot.hitboxes`, `ragebot.automatic_fire`, and `ragebot.limiters.backtrack` with data and helper calls ([keys](newnl_decompiled.c#L198338)). These strings indicate configuration surfaces, not proof a feature was enabled. |
| ESP-related keys | [`FUN_18014a790`](newnl_readable/1800fe830-180155e70.c#L24443) | Constructs or processes keys such as `.esp.enabled`, `.esp.box`, `.esp.name`, and `.esp.distance` ([keys](newnl_decompiled.c#L220550)). |
| ESP argument checks | [`FUN_18007b5a0`](newnl_readable/18007ac30-180085b30.c#L484) and [`FUN_18007c390`](newnl_readable/18007ac30-180085b30.c#L1175) | Error strings describe a 1–40-character name, accepted sides, and target values `enemy`, `team`, or `local`. Exact API semantics and types remain to be reconstructed. |

## Detection-oriented cautions

- Module and interface strings, API imports, WinHTTP user-agent strings, and configuration keys are **leads**, not standalone proof of cheating. Many also occur in legitimate software. Prefer corroborated behavior and validate against the exact sample and game build.
- Pointer modification and Direct3D/input hook setup are concrete static leads; establish the actual target module, pointer ownership, execution path, and context before creating a detection rule.
- Three hardcoded UI URLs are passed to `ShellExecuteA`; see [`STATIC_ANALYSIS.md`](STATIC_ANALYSIS.md#urls-and-networking). No WinHTTP destination, network payload, data exfiltration, active feature state, or behavior in a live game has been established by this handoff.
- The PE timestamp and embedded path are sample metadata and can be changed; identify this exact input by its SHA-256 instead.

## Known gaps and next analysis

- `FUN_1803cb350` timed out after both 30-second and 300-second decompiler attempts. The outer export's `FUN_181261130` failure lies in raw embedded PE bytes; its corresponding [separately mapped function](newnl_research/steam_profile_helper_decompiled.c#L14126) decompiled, subject to the [mapping and verification limits](STATIC_ANALYSIS.md#failed-model-helper-and-dispatch-discrepancy). The separate embedded export has one different failure, `FUN_18000d2c0`; selected native branches are [consistent with unwind-cookie support](STATIC_ANALYSIS.md#embedded-unwind-cookie-routine), but the function is not fully recovered. The ranges in `newnl_failed_functions.asm` end at the next discovered function entry, **not** a validated function boundary; they may include data or miss noncontiguous blocks.
- The first lookup in the timed-out routine has a [bounded native-instruction trace](STATIC_ANALYSIS.md#first-entity_list-lookup), including its displacement calculation and numeric range check. It has only been exercised with synthetic matches and stubbed helpers.
- Two related [resolver wrappers](STATIC_ANALYSIS.md#resolver-wrappers-and-address-checks) have different address checks; synthetic emulation does not establish actual resolved targets or Windows fault behavior.
- The [pattern parser and scan loop](STATIC_ANALYSIS.md#pattern-parsing-and-scan-loop) were exercised on synthetic buffers. The Ghidra pseudocode omits an out-of-line loop fragment, and no live game module was scanned.
- Ghidra also emitted warnings about unreadable bytes and undecodable control flow in other functions. Decompiler output may contain false function boundaries and reconstructed calls, particularly around indirect branches.
- A matching PDB, if available, may improve symbol/type recovery; it will not by itself restore original source. For further work, import the DLL into Ghidra, resolve types and indirect calls, inspect callers and original instructions, and record each new claim with its address and evidence. Keep observations separate from hypotheses and validate behavior in an authorized, isolated environment before turning a lead into a rule.
