# Extended static analysis of `newnl.dll`

This document supplements [`HANDOFF.md`](HANDOFF.md). It describes this exact sample, identified by SHA-256 `03c8ab74b4318cf17c87be8b39f4d868dba4ee1aa45d60fe38ab781a54b3eb57`. Findings are from PE parsing and Ghidra 12.2 pseudocode, **not live execution**. Ghidra's code boundaries, types, calling conventions and control flow can be wrong. Where the pseudocode contains an explicit log or label, that label describes the sample's apparent intent; it does not prove successful execution.

## Inventory

The native x86-64 PE has 10 sections, 254 imported entries across 10 modules, and 177 named, non-forwarded exports. Every exported name contains `printf` or `scanf`; see the table rather than assuming these exports are a public cheat API. The PE security directory has offset and size zero; this only says that no embedded Authenticode certificate table is present in the file, not that every possible trust mechanism has been checked. The header timestamp is `2026-10-25T05:35:06Z`; it is untrusted metadata.

The section table declares `.text` as executable/readable, `.pview` as executable/readable, and `.model` as executable/readable/writable. These are PE header characteristics, not measurements of live page permissions. Section names and permissions alone do not establish intent.

The PE CLR runtime-header directory has RVA and size zero. The main image is native, so ILSpy's managed-IL decompiler is not expected to recover its main code. A separate [embedded native PE](#embedded-steam-profile-helper) is present; this does not establish the absence of other embedded files. The saved outer Ghidra project reports 10,338 non-external functions and 10,591 total functions including external entries, including entries attributed to the embedded file's raw bytes.

| Machine-readable artifact | Contents and limitations |
| --- | --- |
| [`pe_metadata.json`](newnl_research/pe_metadata.json) | Hash and selected PE header fields; timestamp is not a verified build time. |
| [`pe_imports.tsv`](newnl_research/pe_imports.tsv) | Imported module, name/ordinal, and import-address-table preferred VA and RVA. Runtime resolution can also use `GetProcAddress`; imports are not a complete API-use list. |
| [`pe_exports.tsv`](newnl_research/pe_exports.tsv) | Export ordinal, name, RVA, preferred VA and forwarder when present. |
| [`pe_sections.tsv`](newnl_research/pe_sections.tsv) | PE section RVA, sizes, raw file offset and characteristics. |
| [`raw_strings.tsv`](newnl_research/raw_strings.tsv) | 33,911 heuristic printable ASCII and ASCII-subset UTF-16LE runs of at least six characters, with file offsets and candidate section/RVA/VA. Not all runs are real strings; non-ASCII UTF-16 and short strings are omitted. References, reachability, termination, and actual use are not established by this table. Raw section padding may not represent mapped memory. |
| [`observed_hook_registrations.tsv`](newnl_research/observed_hook_registrations.tsv) | 62 labelled direct calls to `FUN_1801d0610` in `FUN_1801cf6d0`, with machine-code call address, target expression, replacement reference and original pseudocode line. One uses a dynamically allocated stub rather than a direct function pointer. Other hook mechanisms are excluded; reachability and success are not established. |
| [`failed_1803cb350_string_refs.tsv`](newnl_research/failed_1803cb350_string_refs.tsv) | 2,384 Ghidra string references attributed to the timed-out function, ordered by source address and joined to 498 distinct defined strings. Attribution and function boundaries are Ghidra's; adjacent rows are not necessarily one logical record. |
| [`failed_1803cb350_pattern_literals.tsv`](newnl_research/failed_1803cb350_pattern_literals.tsv) | 238 distinct pattern-like defined strings referenced from the timed-out function; text matching alone does not establish meaning, target, validity, or execution. |
| [`startup_resolver_candidates.tsv`](newnl_research/startup_resolver_candidates.tsv) | 120 call sites with three straight-line string arguments independently checked against original machine code. The table does not include extra helper arguments or resolved addresses. |
| [`verify_startup_first_resolver_emulation.py`](newnl_research/verify_startup_first_resolver_emulation.py) | Executes the first lookup's address-derivation and global-store branches using synthetic match addresses; resolver, record and logging helpers are stubbed. |
| [`verify_startup_resolver_wrappers_emulation.py`](newnl_research/verify_startup_resolver_wrappers_emulation.py) | Exercises the relative-call and displacement wrappers with synthetic scanner results, including numeric boundaries and unreadable operands. |
| [`verify_pattern_scanner_emulation.py`](newnl_research/verify_pattern_scanner_emulation.py) | Executes the original signature parser and matching loop over synthetic buffers; vector allocation helpers are stubbed. |
| [`verify_page_cache_emulation.py`](newnl_research/verify_page_cache_emulation.py) | Executes the cached page-range checker with synthetic `VirtualQuery` results, including changing protections and cache collisions. |
| [`ReportPageCacheRefs.java`](newnl_research/ReportPageCacheRefs.java) | Reports Ghidra-discovered references into the page-cache range without modifying the project; computed and overlapping bulk writes can be missed. |
| [`verify_kit_map_selection_emulation.py`](newnl_research/verify_kit_map_selection_emulation.py) | Exercises paint-kit map offset selection using synthetic validation results; the validator and logger are stubbed. |
| [`verify_kit_map_validator_emulation.py`](newnl_research/verify_kit_map_validator_emulation.py) | Exercises record validation, marker checks and bounded diagnostic output; page, string-allocation and comparison helpers are stubbed. |
| [`verify_kit_name_emulation.py`](newnl_research/verify_kit_name_emulation.py) | Exercises the native bounded name-copy routine and checks its PE exception-scope metadata; Windows exception dispatch is not simulated. |
| [`verify_kit_localization_emulation.py`](newnl_research/verify_kit_localization_emulation.py) | Exercises localization-versus-fallback selection with synthetic keys and stubbed interface/string helpers. |
| [`verify_composite_callback_emulation.py`](newnl_research/verify_composite_callback_emulation.py) | Exercises composite-request forwarding and early helper gates with synthetic state; original callback and lock helpers are stubbed. |
| [`verify_composite_tint_emulation.py`](newnl_research/verify_composite_tint_emulation.py) | Exercises native tint-entry matching, partial write failures and fallback dispatch; selected writer returns and external helpers are stubbed. |
| [`verify_composite_creation_emulation.py`](newnl_research/verify_composite_creation_emulation.py) | Exercises native fallback construction of eight entries with synthetic callbacks; formatting and engine operations are stubbed. |
| [`verify_composite_selection_emulation.py`](newnl_research/verify_composite_selection_emulation.py) | Exercises native tint packing, marker writing, handle resolution, callback selection and an in-place tint write on synthetic state; engine callbacks are stubbed. |
| [`verify_tint_packing_emulation.py`](newnl_research/verify_tint_packing_emulation.py) | Exercises eight-slot float-to-DWORD conversion, clamping and rounding with synthetic inputs and no stubbed helpers. |
| [`verify_tint_lifecycle_emulation.py`](newnl_research/verify_tint_lifecycle_emulation.py) | Exercises tint-window arming, intercepted entries, partial consumption, expiry and reset on synthetic state; clock, comparison, logging and locks are stubbed. |
| [`verify_composite_wrappers_emulation.py`](newnl_research/verify_composite_wrappers_emulation.py) | Exercises native append/add wrappers and a complete fallback-construction sequence on synthetic objects; engine operations remain stubbed. |
| [`verify_tint_accounting_emulation.py`](newnl_research/verify_tint_accounting_emulation.py) | Compares direct in-place and append-window tint accounting on a shared synthetic item; engine callbacks and clock are stubbed. |
| [`verify_tint_write_failures_emulation.py`](newnl_research/verify_tint_write_failures_emulation.py) | Exercises synthetic window-interceptor write failures and a subsequent successful attempt; selected writer returns are stubbed. |
| [`hook_target_provenance.tsv`](newnl_research/hook_target_provenance.tsv) | The 62 labelled helper calls correlated with RIP-relative global reads and writes, and with exact matching resolver labels where available. Evidence classes are explained below; most rows do not establish a complete value flow. |
| [`inline_hook_resolution.tsv`](newnl_research/inline_hook_resolution.tsv) | 26 conditional scanner-success paths associated with hook target globals, including module, scanner label, pattern literal, and instruction addresses for the lookup and store. See the ABI and reachability caveats below. |
| [`script_api_inventory.tsv`](newnl_research/script_api_inventory.tsv) | Selected script API bindings, native registration-load addresses, handlers and observed permission/ownership checks. It is not a complete API list or evidence that a script ran. |
| [`event_listener_registrations.tsv`](newnl_research/event_listener_registrations.tsv) | All 34 Ghidra-discovered direct calls to the identified listener-registration helper: 33 have PE-verified literal event names and callback addresses; one uses runtime-indexed tables. It excludes unresolved/indirect calls and does not prove registration succeeded. |
| [`verify_raw_input_emulation.py`](newnl_research/verify_raw_input_emulation.py) | Hash-checked, isolated Unicorn exercise of the two raw-input callback bodies with synthetic records and stubbed original calls. It does not run the DLL in Windows. |
| [`verify_wndproc_emulation.py`](newnl_research/verify_wndproc_emulation.py) | Hash-checked, isolated Unicorn exercise of window-message routing with synthetic messages and stubbed helper/API calls. It imports shared constants from the raw-input emulator. |
| [`verify_http_read_emulation.py`](newnl_research/verify_http_read_emulation.py) | Hash-checked emulation of the HTTP response-read block with synthetic WinHTTP returns and modeled C++ string helpers. It does not make network requests. |
| [`verify_hook_engine_emulation.py`](newnl_research/verify_hook_engine_emulation.py) | Hash-checked Unicorn exercise of the sample's trampoline builder, instruction decoder, and patch writer against synthetic target bytes. Windows APIs are stubbed; it does not modify a process. |
| [`verify_event_dispatch_emulation.py`](newnl_research/verify_event_dispatch_emulation.py) | Hash-checked emulation of listener registration and dispatch with synthetic state and stubbed manager/callbacks. It does not register real listeners or execute event handlers. |
| [`verify_sound_marker_emulation.py`](newnl_research/verify_sound_marker_emulation.py) | Hash-checked emulation of the sound-marker producer and expiry loop with synthetic entities and records. Clocks, locks and buffer movement are stubbed; it does not run the game or render markers. |
| [`verify_grenade_effect_emulation.py`](newnl_research/verify_grenade_effect_emulation.py) | Hash-checked emulation of five grenade-event thunks and their particle-setup path, using synthetic state and stubbed game/particle helpers. |
| [`verify_grenade_result_emulation.py`](newnl_research/verify_grenade_result_emulation.py) | Hash-checked emulation of three separate grenade-result thunks and their state transitions. Event access is stubbed and diagnostic output is bypassed. |
| [`verify_event_logging_emulation.py`](newnl_research/verify_event_logging_emulation.py) | Hash-checked emulation of vote-start state, vote-choice formatting, purchase gates and the purchase timeout. Event, name, string and cookie helpers are stubbed; no game or output destination is exercised. |
| [`verify_chat_emulation.py`](newnl_research/verify_chat_emulation.py) | Hash-checked emulation of the player-chat callback's gates using synthetic events, players and rules. It stops before text formatting or delivery. |
| [`verify_chat_storage_emulation.py`](newnl_research/verify_chat_storage_emulation.py) | Hash-checked emulation of the SayText2 field-storage helper and bridge, including a synthetic integrated call. Allocators and game methods are stubbed; no message is delivered. |
| [`verify_console_filter_emulation.py`](newnl_research/verify_console_filter_emulation.py) | Hash-checked emulation of console-channel filtering, restoration and the `log_flags` wrapper with synthetic channels and stubbed logging APIs. It does not run the game or validate actual console output. |
| [`verify_ack_emulation.py`](newnl_research/verify_ack_emulation.py) | Hash-checked Unicorn exercise of the ACK callback with synthetic buffers and a stubbed serializer, clock and locks. It does not send packets or run the game. |
| [`verify_ack_quality_emulation.py`](newnl_research/verify_ack_quality_emulation.py) | Hash-checked Unicorn exercise of the timing-state producer and one integrated ACK-consumer path. Callbacks, clock and locks are stubbed; it imports the ACK emulator. |
| [`verify_ack_state_emulation.py`](newnl_research/verify_ack_state_emulation.py) | Hash-checked emulation of fake-ping state transitions and one subsequent ACK-consumer call. Activity, string, cookie and lock helpers are stubbed. |
| [`verify_move_jitter_emulation.py`](newnl_research/verify_move_jitter_emulation.py) | Hash-checked exercise of the move callback's synthetic jitter state in Unicorn. The saved callback and clock are stubbed; no game or packets are involved. |
| [`verify_model_fill_emulation.py`](newnl_research/verify_model_fill_emulation.py) | Investigates a fill-like helper in raw outer-section bytes and in a section-RVA mapping of the embedded PE. It does not reproduce Windows loader behavior. |
| [`inspect_embedded_profile.py`](newnl_research/inspect_embedded_profile.py) | Verifies and reports the embedded PE; optional extraction writes its exact bytes to a new file without overwriting an existing path. |
| [`steam_profile_helper_decompiled.c`](newnl_research/steam_profile_helper_decompiled.c) | Ghidra 12.2 pseudocode from the separately imported embedded PE, with one marked decompilation failure. Not original or buildable source. |
| [`ExportEmbedded.java`](newnl_research/ExportEmbedded.java) | Ghidra script used to generate that export; verifies embedded MD5 and refuses to overwrite its output file. |
| [`verify_embedded_profile_emulation.py`](newnl_research/verify_embedded_profile_emulation.py) | Runs the embedded export against synthetic Steam results; Windows and Steam APIs are stubbed, and the generated synthetic PNG is decoded and checked. |
| [`verify_profile_consumers_emulation.py`](newnl_research/verify_profile_consumers_emulation.py) | Exercises outer profile-name and avatar selection with synthetic Steam data and stubbed loader/sinks; also checks the embedded fallback PNG. |
| [`verify_embedded_loader_emulation.py`](newnl_research/verify_embedded_loader_emulation.py) | Exercises helper-loader success, retry and cleanup branches with stubbed file and Windows APIs; no file is created or DLL loaded. |
| [`verify_embedded_cookie_emulation.py`](newnl_research/verify_embedded_cookie_emulation.py) | Exercises selected branches of the embedded PE's remaining failed unwind routine with synthetic frames; the real cookie comparison runs and the failure target is stubbed. |
| [`http_entrypoints.asm`](newnl_research/http_entrypoints.asm) | Original instructions for the script HTTP thunks and network worker call setup. |
| [`overlay_stub_setup.asm`](newnl_research/overlay_stub_setup.asm) | Original instructions for the conditional `overlay_box` stub allocation and registration. |
| [`ghidra_strings.tsv`](newnl_research/ghidra_strings.tsv) | 13,330 Ghidra-defined strings with addresses and escaped values. This is a different, incomplete set from the raw-string scan. |
| [`ghidra_string_xrefs.tsv`](newnl_research/ghidra_string_xrefs.tsv) | 35,651 Ghidra references to the **start** of those strings, including references from data as well as code. Blank `from_function` means Ghidra did not associate the source with a function. |
| [`ghidra_direct_calls.tsv`](newnl_research/ghidra_direct_calls.tsv) | 110,866 call-type references discovered by Ghidra, including computed external calls and some tail `JMP` instructions classified as calls despite the filename. `EXTERNAL:...` is a Ghidra external-space address, not a process VA. Indirect/unresolved calls and function boundaries may be missing or wrong. |
| [`ExportNewnlEvidence.java`](newnl_research/ExportNewnlEvidence.java) | Ghidra script used to export the three Ghidra TSVs. It overwrites those output filenames when run; use a new output directory to preserve this evidence. |
| [`AnnotateNewnlProject.java`](newnl_research/AnnotateNewnlProject.java) | Script used to add listing comments at resolver calls, inline scanner calls, hook calls, callback entries, script API binding loads, event listener calls, grenade thunks, and sixteen other manually traced call sites. It checks the sample identity and expected references and preserves existing end-of-line comments. |
| [`newnl_analysis.gpr`](newnl_research/newnl_analysis.gpr) and [`newnl_analysis.rep/`](newnl_research/newnl_analysis.rep/) | Saved Ghidra 12.2 project with 353 evidence-backed listing comments; keep the `.gpr` and `.rep` together. The matching PDB and imported Windows libraries were not available. The pseudocode exports were not rewritten. |

The raw-string table can contain very long fields; Python's `csv` module may need an increased `csv.field_size_limit`. Its values are printable runs, not normalized indicators or a network traffic record. For the Ghidra function index and search examples, see [`HANDOFF.md`](HANDOFF.md#files-and-navigation).

Example cross-reference lookup:

```sh
grep -F '180767900' newnl_research/ghidra_strings.tsv
grep -F '180767900' newnl_research/ghidra_string_xrefs.tsv
```

The second command includes a reference from `FUN_180323780` to the tickets URL. Ghidra TSV values escape backslashes, tabs, carriage returns and newlines; do not treat escaped values as raw byte offsets. Ghidra 12.2 requires JDK 25. To reopen the saved analysis, open `newnl_research/newnl_analysis.gpr` in a compatible Ghidra installation. This does not execute the sample.

## Hook registration and callbacks

[`FUN_1801cf6d0`](newnl_decompiled.c#L301431) passes labels, target expressions, and replacement functions to [`FUN_1801d0610`](newnl_decompiled.c#L301800). The latter checks for null targets and duplicates, calls another function to create a hook, and logs success/failure-related information. A later path calls an enable helper and logs installed/skipped counts ([code](newnl_decompiled.c#L301762)). Actual target addresses and success require runtime validation; the label is not an independently verified interface name.

Representative relationships:

| Label in sample | Replacement | Observable static behavior |
| --- | --- | --- |
| `create_move` | [`FUN_1801c8650`](newnl_decompiled.c#L296490) | Calls a saved function pointer, then conditionally calls other routines. It also attempts to register `player_hurt`, `bullet_impact`, `player_death`, `round_start`, and `player_footstep` event handlers ([event registration](newnl_decompiled.c#L296573)). This alone does not establish what was observed in an actual match. |
| `get_raw_input_data` | [`FUN_1801cd6d0`](newnl_decompiled.c#L300232) | Calls the saved pointer and conditionally accumulates or clears raw mouse fields; see the [input trace](#raw-input-callback-trace). |
| `get_raw_input_buffer` | [`FUN_1801cd790`](newnl_decompiled.c#L300278) | Calls the saved pointer and processes variable-size records; see the [input trace](#raw-input-callback-trace). |
| `send_move_packet` | [`FUN_1801ca4b0`](newnl_decompiled.c#L297782) | Can skip calls to the saved callback according to a jitter counter; see the [move-jitter trace](#move-callback-jitter). Live packet effects are not established. |
| `net_serialize_acks` | [`FUN_1801c9a20`](newnl_decompiled.c#L297294) | Forwards four register arguments to a helper that can defer or alter serialized bytes; see the [ACK trace](#ack-serialization-and-fake-ping). Hook installation and actual traffic remain unverified. |
| `frame_stage_notify` | [`FUN_1801ca640`](newnl_decompiled.c#L297892) | Listed as a replacement for a hook with that label; investigate caller and original target before assigning semantics. |

The same setup copies a prediction-system vtable, substitutes `FUN_1801cb820` in the copy, and passes it to another helper ([copy and substitution](newnl_decompiled.c#L301742)). Separately, world-effects code attempts to hook render pipelines and a `CParticleObjectDesc` `OnPreRender` slot, with explicit success and failure logs ([code](newnl_decompiled.c#L628335)). These paths are distinct from the 62-row helper-call inventory.

### Move callback jitter

The hook setup associates the label `send_move_packet` with [`FUN_1801ca4b0`](newnl_decompiled.c#L297782) and a saved callback pointer ([registration](newnl_decompiled.c#L301597)). Configuration keys `misc.jitter` and `misc.jitter_hold` map respectively to `DAT_180920f3c` and `DAT_180920f40` ([registration](newnl_decompiled.c#L197282)). These names and labels are leads, not proof of the runtime target or packet behavior.

If the option or state byte `DAT_180cc3e78` is zero, this callback resets the selected threshold to `-1`, clears an override byte and the skip counter, then calls the saved callback with the incoming first argument. Otherwise, for ordinary non-overflowing signed values it computes a bound as the minimum of `clamp(jitter_hold, 1, 6)` and `max(DAT_1809ebfbc - 1, 1)`. [`FUN_1801c82c0`](newnl_decompiled.c#L296295) looks up `cl_usercmd_max_per_movemsg`, reads a value and stores a positive result to that last global, or 4 if the read is nonpositive; actual runtime values are unknown.

The effective threshold is the bound if the saved threshold is negative or greater than the bound; otherwise it is the saved threshold. With the override byte clear, the callback atomically increments the skip counter and compares its **previous** value against that threshold. If the previous value is lower, it returns without calling the saved callback. Otherwise it chooses a new threshold and calls the saved callback after resetting the counter. With an override byte set, it skips that counter comparison and calls the saved callback immediately. Original instructions at `0x1801ca53f` atomically exchange that byte with zero; [`FUN_1801c8650`](newnl_decompiled.c#L296490) can set it under separate conditional paths ([examples](newnl_decompiled.c#L296829)), whose game-state meanings are not established.

On a forwarding decision in the enabled path, the callback adds the low 32 bits of `GetTickCount64` to a 32-bit stored seed, applies XOR shifts by 13 left, 17 right and 5 left, stores the result, and selects `result % (bound + 1)` as the next threshold. Thus the next selected threshold can be zero. The original instructions load the seed on this path, not at function entry as the pseudocode suggests. The callback makes no saved-callback call on a skipped invocation, but this alone does not establish a network send, packet contents, actual latency, or successful hook installation.

[`verify_move_jitter_emulation.py`](newnl_research/verify_move_jitter_emulation.py) runs the original callback instructions through ten synthetic scenarios: disabled gates, threshold transitions, lower and upper bounds, forced forwarding and a deterministic seed/clock. The saved callback and clock are stubbed; it does not execute the game or model concurrent access. After installing the [Python dependencies](#raw-input-callback-trace):

```sh
.venv/bin/python newnl_research/verify_move_jitter_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x1801ca4b0 --stop-address=0x1801ca5d0 newnl.dll
```

### ACK serialization and fake ping

The hook setup labels [`FUN_1801c9a20`](newnl_decompiled.c#L297294) `net_serialize_acks` ([registration](newnl_decompiled.c#L301557)). The wrapper increments an in-flight counter, calls [`FUN_180232a20`](newnl_decompiled.c#L374299), decrements the counter and returns its result. Its pseudocode loses the four arguments and return value; original instructions at `0x1801c9a20` forward `RCX`, `RDX`, `R8` and `R9` unchanged into the helper and leave its return in `RAX`. The hook label is not an independently verified protocol specification.

The configuration names `misc.fake_ping` and `misc.fake_ping_value` map to `DAT_180920f34` and `DAT_180920f38` ([configuration](newnl_decompiled.c#L197276)); the UI labels the value in milliseconds ([UI](newnl_decompiled.c#L530247)). [`FUN_180232810`](newnl_decompiled.c#L374169) clamps the configured value to 0–1000 and updates state gates. A separate callback, [`FUN_1801c9950`](newnl_decompiled.c#L297243), conditionally records a value no greater than 2000, a context pointer, generation and `GetTickCount64` timestamp. These values' external meanings and the callbacks' live invocation are not established.

The `net_populate_quality` registration identifies [`FUN_1801c9950`](newnl_decompiled.c#L297243) as the producer ([registration](newnl_decompiled.c#L301555)). It calls its saved callback first, then requires both state bytes, bit `0x2` in its second argument, and nonzero first and third arguments. It reads a pointer at third-argument offset `0x18`; the pointed-to object must have all bits of `0x1f` set in its 32-bit field at `+0x10`. It then reads a 32-bit value at `+0x28` and accepts it only when its **unsigned** value is at most 2000, inclusive. Extra flag bits are allowed. The helper calls perform address-range checks, not a general guarantee that an address is mapped or readable.

On an accepted path, the native instructions publish the 32-bit value, clock timestamp, `first_argument - 0x188`, and the current generation, in that order, with separate `xchg` instructions at `0x1801c99e2`–`0x1801c9a09`. The pseudocode rearranges the timestamp relative to the other stores; use the instructions when reasoning about ordering. Individual exchanges do not establish an atomic four-field snapshot or prove behavior under concurrency. The ACK helper compares its first argument with the stored adjusted pointer and checks the stored generation and timestamp before applying the byte-buffer logic below.

The [state-update routine](newnl_decompiled.c#L374169) increments the generation and clears the recorded generation, value, pointer and timestamp when its activity state changes, when a nonzero activity state's associated string changes, or on an enabled-to-disabled option transition. When the option is disabled it clears pending ACK-buffer state under the SRW lock. [Teardown](newnl_decompiled.c#L301916) clears the gates and corresponding timing and pending-buffer state too. The activity helper includes a cached scan for the literal `C_CSGameRulesProxy` ([code](newnl_decompiled.c#L643016)); neither that label nor the compared string establishes a verified session identity.

An activity or associated-string change while the option remains enabled invalidates the timing record but does **not** itself clear the pending ACK-buffer fields in this routine. In one synthetic activity-loss sequence, a subsequent ACK callback observes the inactive gate, passes through to the serializer and clears those fields. This is one ordering, not a guarantee about concurrent producer/consumer interleavings. If activity and the compared string remain unchanged, a stable disabled state clears pending fields without incrementing the generation again; enabling alone does not invalidate the existing timing record.

[`verify_ack_state_emulation.py`](newnl_research/verify_ack_state_emulation.py) exercises the native update routine in 15 synthetic cases, including option transitions, activity changes, short and long equal/different strings, value clamp boundaries and the activity-loss/ACK sequence. The activity lookup, C++ string operations, security-cookie check, lock APIs and original serializer are stubbed; it does not validate real string allocation, faults, concurrency or teardown.

[`verify_ack_quality_emulation.py`](newnl_research/verify_ack_quality_emulation.py) runs 13 synthetic producer scenarios against the original instructions and guarded-read helpers, including the inclusive 2000 boundary, flag masks, null/gate rejection and native write order. One scenario feeds the produced state into the original ACK consumer instructions. The saved callbacks, clock and lock APIs are stubbed; reset routines, fault handling and concurrent execution are not exercised.

When the helper's two byte gates, context and generation match, the recorded value is nonnegative, and its nonzero timestamp is at most 45,000 ms old, it calculates `d = clamp(configured - recorded - 5, -105, 1000)` using signed integer operations. Otherwise it clears pending state and calls the saved serializer. It also takes this pass-through path when the output pointer is null, the end pointer precedes it, or fewer than five bytes are available.

For a positive `d`, the first saved-serializer result is eligible for caching only if it advances exactly five bytes and the first byte is exactly `0x98`. The helper saves those five bytes and returns the original output pointer. Before `d` milliseconds elapse it returns that pointer again without calling the serializer. Once the interval has elapsed, it calls the serializer; on another eligible five-byte result it saves the new bytes, overwrites the output with the previous five, and returns the advanced pointer. An ineligible result at that point clears the pending state and is returned unchanged. These are buffer and return-pointer observations, not proof that a network packet was sent or delayed.

For `d <= 0`, the helper clears pending state and calls the serializer. If `d < 0`, the result advances at least five bytes, `(first_byte & 0xf8) == 0x98`, and the little-endian 16-bit value at offset 3 is not `0xffff`, it adds `floor((31 - 1000*d) / 32)`, capped at `0xfffe`. The constant `1/32` is present in the PE; do not infer a protocol-field name from the byte pattern alone. Both paths operate under an exclusive SRW lock.

[`verify_ack_emulation.py`](newnl_research/verify_ack_emulation.py) exercises original wrapper and helper instructions in 15 synthetic scenarios, including the 45-second boundary, positive delay and replacement, negative adjustment, sentinel, saturation, clamp limits, short results and mismatched state. The clock, locks and original serializer are stubbed; no real concurrency, game, network or protocol interpretation is verified. After installing the [Python dependencies](#raw-input-callback-trace):

```sh
.venv/bin/python newnl_research/verify_ack_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_ack_quality_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_ack_state_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x180232810 --stop-address=0x180232a20 newnl.dll
objdump -d -Mintel --start-address=0x1801c9950 --stop-address=0x1801c9a20 newnl.dll
objdump -d -Mintel --start-address=0x1801c9a20 --stop-address=0x1801c9a40 newnl.dll
objdump -d -Mintel --start-address=0x180232a20 --stop-address=0x180232d40 newnl.dll
```

### Console-channel filter and log_flags wrapper

The configuration key `features.filter_console_output` maps to `DAT_180920e19` ([registration](newnl_decompiled.c#L196955)). Its UI description says it shows only `neverlose` console output and restores channel settings when disabled ([UI](newnl_decompiled.c#L531512)); this is stated intent, not proof of actual output. The analysis below describes changes to flag bit `0x2` without assuming an external name or meaning for that bit.

- **Resolution:** [`FUN_18026f480`](newnl_decompiled.c#L419498) marks its initialization attempt before looking up the already-loaded `tier0.dll` with `GetModuleHandleA`. It resolves `LoggingSystem_GetChannelCount`, `LoggingSystem_GetChannelFlags`, `LoggingSystem_SetChannelFlags`, and optionally `LoggingSystem_FindChannel`. The first three are required; this routine does not retry a missing module or required export after its first attempt. If the optional lookup is absent or returns `-1`, none of the nonnegative enumerated channel indices is exempted as `neverlose`.
- **Update:** [`FUN_18026f610`](newnl_decompiled.c#L419564) takes a snapshot of each newly enumerated channel's index and original bit `0x2`, including the exempt channel and channels where the bit is already set. For every non-exempt channel where that bit is clear, it calls the setter with `flags | 0x2`. Its cursor only advances: repeated updates do not continuously reapply the bit to previously processed indices, and a drop in channel count does not rewind the cursor. If indices below it are later reused, this routine alone does not rescan them.
- **Restore:** [`FUN_18026f570`](newnl_decompiled.c#L419529) reads each tracked channel's current flags and, if needed, writes `(current & ~0x2) | (saved_bit << 1)`. Thus other current flag bits are retained; it then clears the tracked range, cursor, and active marker. The disabled-option path calls this helper only after successful API resolution; [teardown](newnl_decompiled.c#L302043) likewise checks resolution first. If the required APIs are unavailable at that check, restoration is skipped on that call. The pseudocode omits the setter's second argument at [the restore call](newnl_decompiled.c#L419547); original instructions at `0x18026f5ab–0x18026f5bd` put the computed flags in `EDX` before the indirect call.
- **Command callback:** [`FUN_18026f8a0`](newnl_decompiled.c#L419685) makes a separate one-time attempt to obtain `VEngineCvar007` from `tier0.dll`, locate `log_flags`, and replace an eligible interface callback while retaining its previous pointer. The original PE's object at `0x1809f3608` points to a vtable at `0x1806480e8`, whose first entry points to [`FUN_18026f710`](newnl_decompiled.c#L419611). This wrapper first updates the filter; when active, it temporarily restores tracked bits, invokes the saved callback if present, rereads those bits as the new baseline, and reapplies `0x2` to non-exempt channels. Teardown attempts to restore the prior callback only if the slot still points to this DLL's object. Setup and callback execution are conditional and have not been observed live.

[`verify_console_filter_emulation.py`](newnl_research/verify_console_filter_emulation.py) runs original instruction ranges in Unicorn against ten synthetic scenarios, covering initial filtering and restoration, cursor growth and shrinkage, missing or unsuccessful channel lookup, external flag changes, command callback re-baselining, and unavailable required APIs. It preallocates the snapshot vector and stubs Windows and logging APIs and the saved callback. It does not establish actual API semantics, allocation behavior, concurrency, installation, or console output. First install the [Python dependencies](#raw-input-callback-trace), then run:

```sh
.venv/bin/python newnl_research/verify_console_filter_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x18026f480 --stop-address=0x18026f710 newnl.dll
objdump -d -Mintel --start-address=0x18026f710 --stop-address=0x18026f860 newnl.dll
```

### Game-event listener registration and dispatch

[`event_listener_registrations.tsv`](newnl_research/event_listener_registrations.tsv) inventories the 34 direct call references Ghidra identified to [`FUN_180273b60`](newnl_decompiled.c#L422949). Original PE instructions independently confirm the literal name and callback loads at 33 call sites, covering 16 distinct names. For example, `player_hurt` appears at nine sites, `bullet_impact` at three, and `player_death` at three. These counts are **static call sites**, not event counts, active listeners, or proof that the containing paths ran. Indirect calls and registrations through other helpers are outside this inventory.

The helper requires non-null arguments, available manager state, and a record counter below 96. It prepares a `0x38`-byte record, stores the callback at offset `0x28`, and calls a manager vtable method; its counter advances only when that call reports success. [`FUN_180273ac0`](newnl_decompiled.c#L422905) scans the recorded entries for an exact match to the listener-object pointer; if the callback is non-null it calls it with the event pointer and returns zero. The pointer passed to the dispatcher is the record's start, not the callback address.

The remaining call at `0x180071efc` selects a runtime event name and callback by index. The [`events.on` binding](newnl_decompiled.c#L71636) can copy eligible script-supplied names into a 48-entry name array ([handler](newnl_decompiled.c#L56177)); the [registration loop](newnl_decompiled.c#L82260) uses a parallel table at `0x18059e420`. Original PE bytes confirm all 48 table entries point to indexed thunks at `0x180073af0 + 0x10 * index`; each forwards the event and index to [`FUN_18006f1a0`](newnl_decompiled.c#L80043). The names and scripts present at runtime are unknown. In this loop the per-slot attempted byte becomes nonzero even when the helper returns failure, so this loop alone does not retry that slot unless another path resets the byte.

Selected handler paths:

- **Impact sparks:** [`FUN_180206590`](newnl_decompiled.c#L341314) requires a non-null stored object, a valid context and handle, and the `userid` accessor to resolve to that object. Under a lock it deduplicates a pair of 32-bit keys and appends a 20-byte record containing those keys and the event's `x`, `y`, and `z`. The pseudocode incorrectly presents the coordinates as integers: original instructions at `0x18020669e`–`0x180206707` read the accessor's `XMM0` return and store three 32-bit floating-point values. The later [`FUN_180206bb0`](newnl_decompiled.c#L341560) swaps out the queued records; when the `impact sparks` option and further context/resource checks pass, it passes matching coordinates to a particle helper using `particles/neverlose/impact_sparks.vpcf`. Disabled or failed paths do not establish that particles appeared.
- **Hit and kill effects:** [`FUN_180264500`](newnl_decompiled.c#L411673) checks the `hit_effect.enabled` byte, compares `attacker` and `userid` against the stored object, and records `GetTickCount64` on the matching path. [`FUN_180207bf0`](newnl_decompiled.c#L342334) checks `kill_effect.enabled`, `health <= 0`, attacker/victim relationships and further prerequisites before particle-related calls. These are configuration gates and static code paths, not observed hits or kills.
- **Footsteps:** The listener routes eligible player-pawn events into the [sound marker path](#sound-markers-and-footstep-fallback).

[`verify_event_dispatch_emulation.py`](newnl_research/verify_event_dispatch_emulation.py) exercised nine synthetic registration cases and nine dispatcher cases against original instructions. The registration cases include null arguments, unavailable manager, acceptance/rejection, and the 96-slot boundary; the dispatcher cases include empty and mismatched records, a null callback, and the 96th slot. Stubbed callbacks verified the forwarded event pointer and that the dispatcher ignores the callback's return. This does **not** execute the game, register a real listener, or run the actual event handlers. With the dependencies below installed, reproduce with:

```sh
.venv/bin/python newnl_research/verify_event_dispatch_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x18020669e --stop-address=0x18020670f newnl.dll
```

### Player-chat event and display bridge

The frame-stage path conditionally attempts to register [`FUN_180270290`](newnl_decompiled.c#L420173) for `player_chat` ([registration](newnl_decompiled.c#L298147)). Its configuration byte is associated with `features.reveal_enemy_chat`; the UI describes the feature as showing enemy team-only chat and says it only works on community servers ([configuration](newnl_decompiled.c#L196952), [UI](newnl_decompiled.c#L531510)). That is a statement of intended behavior, not evidence that the server sent hidden chat to this client.

The callback requires the option, a cached local object and an initial non-null game-rules lookup. A second game-rules lookup supplies a byte at the runtime-resolved `C_CSGameRules::m_bIsValveDS` offset; if the second lookup and offset are both available and that byte is nonzero, the callback stops ([schema](newnl_decompiled.c#L412507), [gate](newnl_decompiled.c#L420245)). **This check is skipped** if the second lookup returns null or the offset is zero; the first lookup still must have succeeded. The synthetic gate exercise reproduced these branches, but does not establish that either missing-data condition occurs in a real session.

The handler reads `teamonly` both as a string and as a float. A nonzero float or NaN passes this gate; when the float is zero, only the exact case-sensitive strings `1` and `true` pass. It then rejects a missing sender or the local object itself. Different `m_iTeamNum` bytes proceed; equal bytes proceed only if the `mp_teammates_are_enemies` cvar lookup succeeds and its value is finite and nonzero. Missing team-offset data makes both compared bytes zero. These are local filters on an event the callback receives, not proof of server-side disclosure.

On the output path, the callback reads the event's `text`, obtains a name through the `m_sSanitizedPlayerName` schema field when available, and chooses `#Cstrike_Chat_T_Loc` for sender-team value 2 or `#Cstrike_Chat_CT_Loc` otherwise. It attempts a `CUserMessageSayText2` path through [`FUN_1802701a0`](newnl_decompiled.c#L420128); the actual call at `0x180270693` passes the text pointer as a **fifth argument** on the stack, which the pseudocode call omits. The bridge checks the constructed message's vtable, fills the template, optional name and text fields, invokes a receiver vtable method if setup succeeds, and releases the message. Its success result means that local call was reached, not that text was displayed. On unavailable or normally failed bridge paths, a separate fallback uses localization, escapes `<`, `>` and `&` in name/text, substitutes template fields, and conditionally invokes HUD helpers ([fallback](newnl_decompiled.c#L420493)).

The bridge's [`FUN_180270080`](newnl_decompiled.c#L420065) string-field helper scans at most `0xffe` (4094) input bytes, uses inline storage through 15 bytes, and otherwise allocates a buffer. In the exercised synthetic replacement case, an existing heap buffer is freed **before** replacement allocation; if that allocation fails, the field becomes empty. This is a local helper behavior under the modeled allocator, not evidence of a game crash or actual allocation failure.

[`verify_chat_emulation.py`](newnl_research/verify_chat_emulation.py) passed 21 synthetic gate cases. [`verify_chat_storage_emulation.py`](newnl_research/verify_chat_storage_emulation.py) passed 13 storage and 10 bridge scenarios, including one that executes the original bridge and original field-storage helper together. Game lookups, event access, allocators, string scanning/copying and receiver methods are stubbed as applicable; the gate run stops before output, and no actual message is displayed or delivered.

```sh
.venv/bin/python newnl_research/verify_chat_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_chat_storage_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x180270290 --stop-address=0x1802704c6 newnl.dll
objdump -d -Mintel --start-address=0x180270080 --stop-address=0x180270290 newnl.dll
```

### Vote and purchase event logging

[`FUN_1800dc590`](newnl_decompiled.c#L165417) attempts to register `vote_cast` and `vote_started` when called with stage value `0xc`, either vote-related option is enabled, and an in-game check succeeds. These attempts are distinct from the four hook callbacks labelled `vote_start`, `vote_pass`, `vote_failed`, and `call_vote_failed`; each of those invokes its own handler and then its saved original function pointer ([callbacks](newnl_decompiled.c#L297170)). Neither registration nor hook execution is established.

The two event gates are the byte associated with `misc.vote_reveal` and the generic `log events` option labelled `votes` ([configuration](newnl_decompiled.c#L197170), [UI](newnl_decompiled.c#L531520)). [`FUN_1800d9e80`](newnl_decompiled.c#L163282) reads `initiator` and stores the resolved display name; a null initiator replaces the stored name with an empty string when either gate is enabled. With both gates disabled it leaves the previous name untouched. [`FUN_1800d97c0`](newnl_decompiled.c#L162871) reads `userid`, `vote_option`, and `team` for a cast event; an unknown or empty voter name is represented as `someone`.

[`FUN_1800d9350`](newnl_decompiled.c#L162505) formats ordinary integer choice indices according to `DAT_180962433`: when nonzero, indices 0 and 1 are `yes` and `no`; otherwise it uses `option ` followed by index plus one. When that byte is zero, indices 0 and 1 are `option 1` and `option 2`. The callback can queue or route a formatted message depending on its settings and state; an event field or setting does not establish that a vote was observed or that a message was displayed.

The separate [`item_purchase` callback](newnl_decompiled.c#L158544) runs its filtering path when either `misc.buy_log` or generic `log events` → `purchases` is enabled ([configuration](newnl_decompiled.c#L197176), [UI](newnl_decompiled.c#L531520)). It rejects a null buyer and a buyer equal to the non-null cached local object. It reads the event's `team` float, converts it to an integer, and compares it to the cached local object's `m_iTeamNum`; separate bytes in `misc.buy_log_who` gate equal and different team values. If the local object or team offset is unavailable, the comparison uses zero. **The same team-selector gates apply when only generic purchase logging is enabled.** Passing the filter leads to a `weapon` field read; an empty weapon is not aggregated.

The purchase callback groups accepted purchases by resolved buyer pointer and updates their `GetTickCount` timestamp. On later stage-`0xc` updates, [`FUN_1800d6460`](newnl_decompiled.c#L158970) processes a record when unsigned 32-bit tick subtraction reaches **800 ms**; otherwise it leaves the record pending. This comparison naturally handles a single tick-count wrap, not arbitrary elapsed periods. If both purchase-related options are disabled, that updater clears the pending records. The 800 ms threshold is a minimum since the last recorded purchase, not a guarantee of prompt output.

[`verify_event_logging_emulation.py`](newnl_research/verify_event_logging_emulation.py) passed 12 purchase-filter, six timer, five vote-start and eight vote-choice scenarios against selected original instructions. It checks equal/different and missing-team gates, the 800 ms and wrap boundaries, null initiators, and choice formatting. Event access, names, string operations and the security-cookie check are modeled; the purchase run stops before reading `weapon`, and neither real logging nor live event delivery is exercised.

```sh
.venv/bin/python newnl_research/verify_event_logging_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x1800d5d70 --stop-address=0x1800d5e67 newnl.dll
objdump -d -Mintel --start-address=0x1800d6570 --stop-address=0x1800d6586 newnl.dll
```

### Grenade events: effects and result matching

The same event can be registered by two distinct subsystems; do not conflate their callbacks. The [particle initializer](newnl_decompiled.c#L624847) registers five short native thunks. Original instructions pass the following indices to [`FUN_180386cc0`](newnl_decompiled.c#L624290); Ghidra labels the thunk entries as `LAB_...`, so their bodies do not appear as functions in the pseudocode export.

| Event | Particle thunk | Type index | Separate result-tracker item ID |
| --- | --- | ---: | --- |
| `hegrenade_detonate` | `0x180386f20` | 0 | 44 |
| `flashbang_detonate` | `0x180386f30` | 1 | 43 |
| `smokegrenade_detonate` | `0x180386f40` | 2 | Not registered by the three result thunks below |
| `inferno_startburn` | `0x180386f50` | 3 | 46 or 48 |
| `decoy_started` | `0x180386f60` | 4 | Not registered by the three result thunks below |

The particle handler requires the `effects` option, a resource-status byte, a per-type enable byte, valid context, an in-game check, and a particle-manager pointer. It reads event `x`, `y`, and `z` as floating-point values and attempts to create `particles/neverlose/grenade_effect.vpcf`. It sets position, calls a second setup helper, and sets color from either a shared color or a per-type color, with the three color components multiplied by `255.0`. If creation fails it stops; if a subsequent setup step reports failure it calls a cleanup helper. It does not read `userid` on this path. These are conditional static paths, not evidence that any particle was created.

Separately, [`FUN_180256180`](newnl_decompiled.c#L400324) handles result matching through the HE, flash, and fire thunks at `0x180256490`, `0x1802564b0`, and `0x1802564d0`. After the item-ID gates in the table, it requires a pending result, a non-null cached local object, and `userid` resolving to that object. It compares a float from context offset `0x30` with a saved release-time float. For ordinary finite values, a difference **greater than 12.0** clears the pending flag; equality and negative differences pass. If context is absent, the function substitutes zero, rather than rejecting the event. On a match it reads `x/y/z`, sets a result-seen byte, and, under an additional diagnostic-count gate, computes distance from a saved predicted position. The machine code confirms the context accessor returns its float in `XMM0`, despite the pseudocode's inferred integer return type. This is a local state transition, not proof of a real throw or recorded result.

[`verify_grenade_effect_emulation.py`](newnl_research/verify_grenade_effect_emulation.py) passed 20 synthetic scenarios covering all five type thunks, enable gates, color selection, creation failure and setup cleanup. [`verify_grenade_result_emulation.py`](newnl_research/verify_grenade_result_emulation.py) passed 16 scenarios covering item types, `userid`, duplicate events and the 12-second boundary. The first stubs game/particle helpers; the second stubs event access and bypasses diagnostics. Neither test runs a game, renders particles or establishes real event delivery.

```sh
.venv/bin/python newnl_research/verify_grenade_effect_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_grenade_result_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x180386f20 --stop-address=0x180386f70 newnl.dll
objdump -d -Mintel --start-address=0x180256490 --stop-address=0x1802564f0 newnl.dll
```

### Sound markers and footstep fallback

There are two statically identified callers of [`FUN_180233b60`](newnl_decompiled.c#L375134), the shared sound-marker producer. The `sound_start_message` hook callback [`FUN_1801ca2b0`](newnl_decompiled.c#L297709) resolves an entity from its message and checks the class name `C_CSPlayerPawn` before calling it with source label `sound`; it subsequently calls the saved original function pointer. The [`player_footstep` listener](newnl_decompiled.c#L375284) calls the same producer with label `player_footstep` only while `DAT_180ccf83d` is zero, after resolving the event's `userid` and checking the pawn class and health. Registration and callback execution remain unverified.

The initializer stores the return of the `sound_start_message` hook-creation attempt in that byte ([registration](newnl_decompiled.c#L301573)); the helper returns success when its hook-creation call succeeds ([helper](newnl_decompiled.c#L301800)). The separate all-hooks enable attempt happens later ([enable](newnl_decompiled.c#L301764)). Thus the fallback checks **creation status**, not independent proof that the hook is currently enabled or receives messages. Other initialization and teardown paths can affect the outcome.

The producer requires a parent configuration byte and the option labelled `sounds`, whose UI description is “Visual indicators for enemy sounds” ([UI](newnl_decompiled.c#L521710)). It rejects the cached local pawn itself, health outside 1–1000, and equal team bytes. The schema initialization associates the offsets with `C_BaseEntity::m_iHealth`, `m_iTeamNum`, and `m_pGameSceneNode`, plus `CGameSceneNode::m_vecAbsOrigin` ([entity fields](newnl_decompiled.c#L669931), [origin](newnl_decompiled.c#L670469)); resolved offsets are runtime-dependent.

For ordinary finite coordinates, the candidate origin must have at least one absolute component at or above approximately `0.01`, and its three-dimensional distance from the cached local origin must be **less than 1200.0** coordinate units. These constants are read from the original PE at `0x1808ac000` and `0x1808acc4c`. A missing local scene node or origin offset makes this function use zero coordinates for the local origin; the distance check therefore does not by itself prove a valid local position.

Accepted markers are appended under a lock to an array of at most 64 records, each `0x20` bytes: a performance-counter time as a double, three position floats, an additional four-byte slot of unestablished meaning, and the pawn pointer. At 64 records the producer moves the remaining 63 down and appends the new record. [`FUN_1802340f0`](newnl_decompiled.c#L375347) conditionally compacts this array, retaining records for which current time minus stored time is less than `1.0` second; it then copies eligible records and builds drawing geometry. Expiry occurs when that consumer runs, not on an independent timer. Neither this path nor the UI text proves a marker was rendered.

**Logging caution:** The producer passes `wl_sounds.log` to [`FUN_1802b2870`](newnl_decompiled.c#L468740), but this particular wrapper's original instructions at `0x1802b2870`–`0x1802b28fa` do not use the first argument. On the non-null-format path they format into a 4096-byte stack buffer and return without a direct file-write call. The string alone is therefore not evidence that this path creates that file; it does not rule out file output elsewhere.

[`verify_sound_marker_emulation.py`](newnl_research/verify_sound_marker_emulation.py) exercises 16 synthetic producer scenarios and seven expiry/compaction scenarios against original instructions, including health, team, distance and coordinate boundaries, the full-queue eviction, and the one-second expiry boundary. Entity state is synthetic; the clock, lock and buffer move are stubbed. It does not validate real hooks, game entities, concurrency or drawing. With the dependencies below installed:

```sh
.venv/bin/python newnl_research/verify_sound_marker_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x180233b60 --stop-address=0x180233f70 newnl.dll
objdump -d -Mintel --start-address=0x1802341b1 --stop-address=0x180234327 newnl.dll
```

### Hook-engine mechanics

The hook-registration helper calls [`FUN_180428df0`](newnl_decompiled.c#L732710), which checks both target and replacement with `VirtualQuery`, rejects duplicates, obtains a nearby slot, builds a trampoline, and saves original bytes and boundary metadata. The exported call to `FUN_180428530()` omits its argument: original instructions at `0x180428ef7`–`0x180428efa` pass the target address in `RCX`.

[`FUN_180428530`](newnl_decompiled.c#L732290) searches for or allocates a `0x1000`-byte executable/read/write region near the target, bounded approximately by target ± `0x40000000` and the system's application-address limits. It subdivides the region into `0x40`-byte slots. Allocation flags are a static behavior lead, not evidence that a region was actually allocated in a live process.

[`FUN_1804295f0`](newnl_decompiled.c#L733162) uses the sample's instruction decoder to relocate a target prologue. The tested cases include RIP-relative operands, relative calls, external jumps and conditional jumps. When necessary it emits an indirect absolute jump back to the unmodified part of the target; it also places an indirect absolute-jump relay to the replacement after the trampoline. It can reject unsupported control flow or insufficient padding; the synthetic external `LOOP` case was rejected. A short function may use the checked five-byte area immediately before the target as a hotpatch fallback.

When enabled, [`FUN_180428b70`](newnl_decompiled.c#L732581) changes protection for five bytes and writes `E9 <rel32>` to the relay. In the hotpatch form it changes seven bytes starting at target minus five, writes that same near jump there, and writes `EB F9` at the target to jump back to it. Disabling restores the saved five or seven bytes. The writer attempts to restore protection and flush the instruction cache; the observed function checks the **initial** `VirtualProtect` result but does not check the later protection-restore or cache-flush returns.

The enable/disable paths enumerate other threads in the current process, attempt to suspend them, and may map instruction pointers between target and trampoline boundaries using `GetThreadContext`/`SetThreadContext` ([enumeration](newnl_decompiled.c#L732493), [context mapping](newnl_decompiled.c#L732397)). Individual thread-open or suspension failures are skipped, so the code does not prove that every thread was stopped.

The error strings use `MH_...` names, and these structures and algorithms closely resemble the public [MinHook v1.3.4 hook manager](https://github.com/TsudaKageyu/minhook/blob/v1.3.4/src/hook.c), [trampoline builder](https://github.com/TsudaKageyu/minhook/blob/v1.3.4/src/trampoline.c), and [allocator](https://github.com/TsudaKageyu/minhook/blob/v1.3.4/src/buffer.c). This comparison does **not** establish the exact library version or provenance. The same techniques occur in legitimate software; do not use the byte patterns alone as a cheat verdict.

[`verify_hook_engine_emulation.py`](newnl_research/verify_hook_engine_emulation.py) runs eight synthetic trampoline and seven patch-writer scenarios against the original instructions, including the hotpatch form and failure returns. Windows APIs and the stack-cookie check are stubbed; the exercise does not install hooks, suspend real threads, or validate any game target. After installing the dependencies shown below, run `.venv/bin/python newnl_research/verify_hook_engine_emulation.py newnl.dll`.

### Raw-input callback trace

The hook initializer resolves `GetRawInputData` and `GetRawInputBuffer` from `user32.dll` and attempts to register the two callbacks ([setup](newnl_decompiled.c#L301482)). Original x64 instructions show each callback invoking its saved pointer before processing output and returning its result unchanged. The first forwards all five arguments, including the stack-passed fifth argument; the second forwards its three arguments. A shared counter is incremented before and decremented after each call. The exported pseudocode omits the original-call arguments.

For `GetRawInputData`, processing requires a return other than `UINT(-1)`, a non-null output pointer, and command `0x10000003` ([Microsoft: `RID_INPUT`](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getrawinputdata)). For `GetRawInputBuffer`, processing requires a non-null pointer and a result other than zero or `UINT(-1)`; the result supplies the record count ([Microsoft API contract](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getrawinputbuffer)). Each record is checked for type zero, which corresponds to `RIM_TYPEMOUSE` ([Microsoft header definition](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-rawinputheader)). The buffer loop advances by `(dwSize + 7) & ~7` and has no separate buffer-end validation in the observed loop.

The following table describes mouse records **when the two flags remain unchanged during the callback**. `M` is `DAT_18091a190`; `O` is `DAT_180ca1bdc`. In the standard x64 layout, the offsets correspond to the documented [`RAWINPUT`](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-rawinput) and [`RAWMOUSE`](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-rawmouse) fields. The `lLastX`/`lLastY` values can represent absolute or relative motion according to `usFlags`; the callback does not distinguish them here.

| Stable flags | Observed mouse-record effect |
| --- | --- |
| `M = 0`, `O = 0` | Adds `lLastX` at `+0x24` and `lLastY` at `+0x28` to `DAT_1809f3cb8` and `DAT_1809f3cbc`; also adds X to `DAT_180cfe888`. Leaves the record unchanged. |
| `M = 0`, `O != 0` | Atomically adds X and Y to `DAT_180ccfb44` and `DAT_180ccfbb0`, then clears both motion fields in the returned record. |
| `M != 0` | Clears the four bytes at `+0x1c` (button union), `+0x20` (`ulRawButtons`), `+0x24`, and `+0x28`; does not clear `usFlags` at `+0x18` on this path. |

Flag changes during processing matter. The single-record callback reads `M` a second time before its override path; if it changes from zero to nonzero at that point, the code takes the ordinary accumulation path instead. The buffered callback captures an override decision before the loop and reads `M` again for each record, so its outcome can likewise differ from the stable-flags table if the state changes. Do not treat either callback as taking an atomic snapshot of all state.

The `M` global is toggled on a path that logs `[menu] ... opened` or `closed` ([toggle](newnl_decompiled.c#L301121)); this associates the byte with menu state but does not establish it was set in a run. For `O`, `FUN_180084740` sets the byte based on two snapshot bytes ([gate](newnl_decompiled.c#L97031)); the snapshot routine copies configuration data associated with [`antiaim.enabled`](newnl_decompiled.c#L197307) and [`antiaim.mouse_override`](newnl_decompiled.c#L197391) before calling it ([snapshot](newnl_decompiled.c#L99165)). The UI's description calls this “mouse override” and describes choosing a yaw angle ([UI text](newnl_decompiled.c#L529338)); that is stated intent, not proof of an in-game angle change.

`objdump -d -Mintel --start-address=0x1801cd6d0 --stop-address=0x1801cd870 newnl.dll` prints the two callback bodies. The companion [`verify_raw_input_emulation.py`](newnl_research/verify_raw_input_emulation.py) exercises the original machine instructions in 17 synthetic scenarios with stubbed original calls, including mouse/non-mouse records, error and empty returns, aligned multi-record traversal, and flag changes. It verifies the sample SHA-256 and maps the relevant code page into the emulator; it does not use a DLL loader, invoke Windows APIs, test real devices or establish that a hook was installed.

Run from the handoff directory using Python 3.9 or newer and the `pefile` and `unicorn` packages. The verification here used Python 3.13.5, `pefile` 2024.8.26 and `unicorn` 2.1.4:

```sh
python3 -m venv .venv
.venv/bin/python -m pip install pefile==2024.8.26 unicorn==2.1.4
.venv/bin/python newnl_research/verify_raw_input_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_wndproc_emulation.py newnl.dll
```

### Window-procedure routing and teardown

When the saved window-procedure value is zero, the render/input path calls `SetWindowLongPtrA` with index `-4` and replacement [`FUN_1801cd870`](newnl_decompiled.c#L300341), saving the return in `DAT_180cd1e58` ([installation](newnl_decompiled.c#L301121)). Microsoft identifies index `-4` as [`GWLP_WNDPROC`](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowlongptrw). A zero return can mean failure or a previous zero value; this call site does not resolve that ambiguity.

For messages other than `0x8057`, if `DAT_180cc3e1a` is zero the callback forwards directly via `CallWindowProcA`. Otherwise it records a matching non-repeat `WM_KEYDOWN` or `WM_SYSKEYDOWN` hotkey before the shutdown check. With shutdown byte `DAT_180cc3e1e` clear, it calls an input-state helper and then [`FUN_1800725e0`](newnl_decompiled.c#L82600), which dispatches registered `input` script callbacks with the message and parameters. If that dispatcher reports a truthy result, the window procedure returns zero without forwarding; this can happen independently of menu state.

If the dispatcher does not consume the message, shutdown is clear, and menu byte `DAT_18091a190` is nonzero, the procedure first calls `FUN_1804279c0` when its context exists. A nonzero result makes the window procedure return one. Otherwise, it returns zero for `0x200`–`0x20c` and `0x20e` (mouse move, button and wheel messages). The fallback switch **does not include `0x20d`**, `WM_XBUTTONDBLCLK`, which is forwarded on that path; earlier script or UI handling can still consume it. Message constants are listed in the [mingw-w64 Windows header](https://github.com/mingw-w64/mingw-w64/blob/master/mingw-w64-headers/include/winuser.h).

On that same menu path, [`WM_INPUT`](https://learn.microsoft.com/en-us/windows/win32/inputdev/wm-input) causes a `GetRawInputData` call with `RID_HEADER` and a 24-byte header. If the call returns something other than `UINT(-1)` and the local type field is zero, the window procedure returns zero; otherwise it forwards the message. This is distinct from the `RID_INPUT` data-buffer callback described above.

The private message `0x8057` is `WM_APP + 0x57` ([message range](https://learn.microsoft.com/en-us/windows/win32/winmsg/wm-app)); it is consumed even when the shutdown byte is set. With shutdown clear it calls several helpers, and a conditional notification path supplies embedded Panorama JavaScript to an indirect function: one string registers a `PanoramaComponent_Lobby_ReadyUpForMatch` handler and creates a hidden `wlMatchFound` marker; another removes that marker ([code and strings](newnl_decompiled.c#L300365)). The subsequent notification helper can start a `Shell_NotifyIconW` worker or call `FlashWindowEx` when configured and the window is not foreground ([notification code](newnl_decompiled.c#L126023)). These are static paths, not proof that the script, marker, or notification occurred.

During teardown, code sets the shutdown byte and, if the saved pointer and window handle are nonzero, attempts to restore the saved procedure using `SetWindowLongPtrA`; it does not check the current procedure or the return at that call site. It then calls the hook-state helper and waits in a loop of up to 3,000 one-millisecond sleeps for the shared callback counter, logging if callbacks remain ([teardown](newnl_decompiled.c#L302190)). A later subclass installed by another component could make unconditional restoration unsafe; actual ordering and success are unverified.

[`verify_wndproc_emulation.py`](newnl_research/verify_wndproc_emulation.py) reproduced 35 synthetic routing scenarios, including the `0x20d` exception, script/UI precedence, raw-input type and error cases, hotkey repeats, and `0x8057`. Its helper functions and Windows APIs are stubs: the result verifies local routing instructions, not helper semantics, installation, teardown, or live Windows behavior.

### Dynamically generated `overlay_box` stub

On a conditional path, the initializer requests a `0x40`-byte allocation with `VirtualAlloc` flags `0x3000` and protection `0x40` ([pseudocode](newnl_decompiled.c#L301581), [original instructions](newnl_research/overlay_stub_setup.asm)). If allocation succeeds, it builds a small stub: the constructed instructions store `R14` into a slot in that allocation and perform an indirect jump through an embedded pointer set to [`FUN_1801ca420`](newnl_decompiled.c#L297765). The allocated stub address, not the static callback address, is passed as the replacement to the `overlay_box` hook-registration attempt at `0x1801cfd69`. The callback calls a saved function pointer.

The startup disassembly shows a separate inline path labelled `impact_box_site`: it supplies a `client.dll` pattern to `FUN_1801d1e00`, and on a nonzero result passes the match plus `0xe` to [`FUN_1801d20d0`](newnl_decompiled.c#L303009). That helper checks for opcode `E8` and computes a signed relative-call destination; the caller stores the result to `DAT_180961c88`, which the `overlay_box` registration later reads ([startup instructions](newnl_failed_functions.asm#L4544), [hook setup](newnl_research/overlay_stub_setup.asm)). These are conditional static paths; the two labels differ, and no actual game-build match or installed hook has been observed.

The first hook inventory missed this attempt because it required a literal `FUN_...` replacement argument; Ghidra's pseudocode omits the fourth argument at this call. The machine-code call and dynamic-stub relationship are now recorded separately. Static allocation flags and byte writes do not establish that the allocation, registration, or callback executed.

## Script capabilities and permission state

[`script_api_inventory.tsv`](newnl_research/script_api_inventory.tsv) records 25 selected bindings and the original instruction that loads each handler into the registration code. The relevant registration routine puts `memory`, `file`, `http`, `hooks`, and `wl.hook` bindings behind a nonzero byte at state offset `0x4b` ([registration](newnl_decompiled.c#L72405)). `wl.entity:get`, `wl.entity:set`, and the `utils` clipboard bindings are registered outside that particular conditional block; `entity:set` and both clipboard handlers separately check the byte when called. The inventory's `see_handler` value makes no claim that a separate call-time check exists or is absent.

The configuration key `lua.allow_insecure` is associated with `DAT_18092106c` ([configuration](newnl_decompiled.c#L197430)). On a script-state creation path, the current global byte is copied to offset `0x4b` ([copy](newnl_decompiled.c#L81670)). Several gated handlers say to enable “allow insecure” and reload the script when the byte is zero. This explains a permission-state path; it does not establish the current configuration or that the option was enabled during an observed run. The Lua initialization path also conditionally loads `ffi` and assigns `dofile` and `loadfile` to nil ([initialization](newnl_decompiled.c#L79979)); do not infer a complete sandbox from those assignments.

- **Memory and entity access:** `memory.read` and `memory.write` dispatch to typed access helpers; the read helper's error message lists `int`, `uint`, `short`, `byte`, `int64`, `float`, `double`, `bool`, `ptr`, `vector`, `handle`, and `string`, while the write helper supports a smaller set ([read](newnl_decompiled.c#L57163), [write](newnl_decompiled.c#L57341)). Other bindings resolve modules, exports, interfaces, and byte patterns ([handlers](newnl_decompiled.c#L66857)). The entity accessors add either a numeric offset or a schema-derived offset to an entity pointer ([offset helper](newnl_decompiled.c#L57136), [entity handlers](newnl_decompiled.c#L57480)). The primitive access helpers shown perform numeric address-range checks before direct loads or stores; those checks alone do not establish that a page is committed or has suitable protection ([32-bit write](newnl_decompiled.c#L11552), [pointer read](newnl_decompiled.c#L8119)).
- **Files:** `file.read`, `write`, `append`, `exists`, `remove`, and `list` share a path-building lead under `C:\neverlose\scripts\data`. The shared builder converts `/` to `\`, calls an error helper for an empty input, `..`, a colon, or a leading backslash, and constructs a path using that base ([builder](newnl_decompiled.c#L67009)). These lexical checks do not establish complete containment in the presence of filesystem links or other Windows path behavior; this analysis did not test those cases. The `write` and `append` entrypoints select different modes in a shared helper.
- **Script hooks:** `hooks.add` separately tests the state byte, resolves target and callback inputs, checks both with `VirtualQuery`, rejects a target already present in an active record, and has a 64-active-hook limit for the current owner before calling create and enable helpers ([handler](newnl_decompiled.c#L120763)). The object accessors and removal/list paths check the recorded owner against the current state; a Lua wrapper retains an FFI callback in a table and returns a cast original pointer on its string-signature path ([registration and wrapper](newnl_decompiled.c#L72467), [owner check](newnl_decompiled.c#L120649)). These script-created hooks are separate from the 62 game-hook registration attempts.
- **Clipboard and HTTP:** `utils.clipboard_get` reads Unicode clipboard text and converts it to UTF-8; `utils.clipboard_set` performs the reverse conversion and attempts to set Unicode clipboard data ([get](newnl_decompiled.c#L70149), [set](newnl_decompiled.c#L70248)). Script-supplied HTTP requests are traced separately below. The presence of both capabilities is not evidence that clipboard data was sent anywhere.

## Local filesystem leads

The sample contains hardcoded Windows paths. The cited paths are **static references**, not proof the files or directories existed or were accessed during any run.

| Path or prefix | Evidence |
| --- | --- |
| `C:\neverlose\scripts\data` | [`FUN_180062c10`](newnl_decompiled.c#L70526) constructs a `.json` path and checks an input name against letters, digits, `_`, and `-`. The complete API contract remains uncertain. |
| `C:\neverlose\scripts\lib` | [`FUN_18006e7b0`](newnl_decompiled.c#L79748) builds a path and opens it through an input-stream routine. |
| `C:\neverlose\lua_owners.txt` | Referenced in a read path and in a `MoveFileExA` destination ([read](newnl_decompiled.c#L115828), [move](newnl_decompiled.c#L116436)). |
| `C:\neverlose\configs` | Referenced in configuration-related filesystem code ([example](newnl_decompiled.c#L185230)). |
| `C:\neverlose\langs` | Used while constructing a `.json` path ([example](newnl_decompiled.c#L591449)). |
| `C:\neverlose\scripts\images\`, `fonts\`, `particles`, `ui` | Present in raw strings and referenced in the pseudocode; inspect the matching string and its callers for exact behavior. |
| `C:\neverlose\shaders\sky`, `C:\neverlose\shaders\cache` | Referenced by shader-related paths ([sky](newnl_decompiled.c#L610595), [cache](newnl_decompiled.c#L612417)). |
| `C:\neverlose\model-diagnostics.log` | [`FUN_1811bd0cb`](newnl_decompiled.c#L975155) opens this path and, on success, writes bytes and a newline. The `.pview` location and decompiled code should be checked in the original binary before drawing runtime conclusions. |

Paths are useful investigative leads but must not be used alone as definitive detections. They can be absent, changed or shared by unrelated files.

## URLs and networking

The following literal URLs are passed to `ShellExecuteA` on conditional UI paths, rather than being shown as endpoints of the WinHTTP request helper:

- `https://neverlose.one/tickets/`: the adjacent UI label is `Report an Issue` ([code](newnl_decompiled.c#L550156)).
- `https://neverlose.one/help/terms/`: adjacent label `Legal` ([code](newnl_decompiled.c#L550188)).
- `https://lua.neverlose.one`: adjacent developer API documentation UI ([code](newnl_decompiled.c#L557706)).

The file also contains SVG namespace links and font/third-party documentation URLs. A literal in the binary does not demonstrate a connection, and a UI link is not automatically a command-and-control endpoint. The generic WinHTTP routine documented in [`HANDOFF.md`](HANDOFF.md#selected-code-paths) parses a supplied URL; this static pass has not established its callers' destinations, request bodies, response contents, or live traffic. Do not access the above URLs as part of sample verification without an approved environment and purpose.

### Script-facing HTTP trace

- The script registration routine conditionally registers `get` and `post` in the `http` namespace when a state byte is nonzero ([registration](newnl_decompiled.c#L72405)). The namespace literal at `0x1806e0b00` is `http` in the original file.
- The [original thunk instructions](newnl_research/http_entrypoints.asm) show that `0x180063940` loads the `GET` literal, `0x180063950` loads `POST`, and both jump to [`FUN_1800632a0`](newnl_decompiled.c#L70871). That function checks the script state byte and reports that `allow insecure` must be enabled and the script reloaded when the check fails. The phrase describes the script permission gate; it is not evidence that TLS certificate validation is disabled.
- The shared handler reads a script-supplied URL, POST data, optional `headers` and `timeout`, and a callback, then calls [`FUN_1800966d0`](newnl_decompiled.c#L109460). That function checks a worker counter and starts [`FUN_180096360`](newnl_decompiled.c#L109253), which calls [`FUN_180095270`](newnl_decompiled.c#L108312) and places result data into a synchronized container ([worker](newnl_decompiled.c#L109308)). Concrete script-supplied destinations, contents, and live traffic remain unverified.
- **Decompiler error:** the exported worker shows `FUN_180095270(0, &local_a8)`. Original instructions at `0x1800963bf`–`0x1800963d0` preserve the worker argument in `RCX` and pass the local address in `RDX`; no instruction zeroes `RCX` before the call. Do not use the apparent null first argument as an implementation fact.

#### Request and completion contract

- The GET thunk leaves the body-argument index zero; the POST thunk selects argument 2 as a length-delimited body. Both take the URL as argument 1, optionally inspect a following options table, and require a callback after those arguments ([handler](newnl_decompiled.c#L70960), [callback reference](newnl_decompiled.c#L71046)). The optional `headers` table is copied into name/value pairs. No particular URL, body or header value is hardcoded by this interface.
- The request timeout starts at `10000` milliseconds. For ordinary finite numeric `timeout` values, the native code clamps the value to 1–30 and multiplies by 1,000; the resulting milliseconds are passed as all four timeout arguments to [`WinHttpSetTimeouts`](https://learn.microsoft.com/en-us/windows/win32/api/winhttp/nf-winhttp-winhttpsettimeouts) ([script handling](newnl_decompiled.c#L71025), [native setup](newnl_decompiled.c#L108499)). The exported pseudocode omits the stack-passed receive timeout.
- `WinHttpOpen` receives user agent `newerwin`, access type `4` (automatic proxy), and flags zero. `WinHttpOpenRequest` receives `0x00800000` for the HTTPS scheme and zero for HTTP, corresponding to `WINHTTP_FLAG_SECURE` ([native setup command](#reproducing-http-instruction-checks), [WinHTTP constants](https://github.com/mingw-w64/mingw-w64/blob/master/mingw-w64-headers/include/winhttp.h)). This is not evidence of an active connection, negotiated TLS version, or certificate-validation bypass.
- The worker records a numeric HTTP status, body and response headers. The completion dispatcher takes queued results, finds a matching script-state owner that is not marked closed, retrieves and releases its callback reference, and invokes it with a table containing `ok`, `status`, `body`, and `headers`; it adds `error` only when the error string is nonempty ([dispatcher](newnl_decompiled.c#L80669)). The literals `ok` and `body` were confirmed in the original PE bytes. If no matching eligible owner is found, that dispatcher does not invoke the callback for the result.
- Enqueue success returns a true value immediately. A rejected enqueue releases the callback reference and reports `too many requests running`, including when thread creation fails; the counter's check and increment are separate, so it is not a proven strict concurrency limit ([enqueue](newnl_decompiled.c#L71054), [worker creation](newnl_decompiled.c#L109460)).

#### Response-read caveat

The status-query result is stored separately from `ok`. In the native read loop at `0x180095faf`–`0x1800960de`, both a `WinHttpQueryDataAvailable` failure and a `WinHttpReadData` failure branch to code that sets `ok` according to whether the existing error-string length is zero; these branches do not themselves populate an error string. Consequently, a read/query failure can reach completion with `ok = true` and an empty error string. The body can already have been resized before a failed read. A response status such as 500 is also not checked by this particular finalization block. This is a property of the observed code path, not proof of an actual failed request ([read loop](newnl_decompiled.c#L109161), [Microsoft query return contract](https://learn.microsoft.com/en-us/windows/win32/api/winhttp/nf-winhttp-winhttpquerydataavailable), [read return contract](https://learn.microsoft.com/en-us/windows/win32/api/winhttp/nf-winhttp-winhttpreaddata)).

The loop rejects a proposed body length **greater than** `0x800000` bytes with `the answer is over 8 MB`; equality is accepted by that comparison. [`verify_http_read_emulation.py`](newnl_research/verify_http_read_emulation.py) reproduced eight synthetic read-block scenarios, including the two failure branches and this boundary. WinHTTP returns and C++ string helpers were stubbed, so this verifies the selected instructions under the modeled conditions—not an actual request or the entire HTTP worker.

##### Reproducing HTTP instruction checks

From the handoff directory, after installing the same Python dependencies described in the [raw-input trace](#raw-input-callback-trace):

```sh
objdump -d -Mintel --start-address=0x180095431 --stop-address=0x180095620 newnl.dll
.venv/bin/python newnl_research/verify_http_read_emulation.py newnl.dll
```

## Embedded Steam-profile helper

The outer `.model` section contains a complete AMD64 PE file at outer file offset `0xdd6d50` (preferred VA `0x181253f50`), exactly `0x19e00` bytes long. The embedded file's SHA-256 is `5166d43e2ec15d1dad82823bbffc4508064ed0dac8720498ae165d3d0314ce6a`; its export-directory name is `steam_profile_helper.dll`, it exports `get_steam_profile` at RVA `0x10c0`, and its import directory names `KERNEL32.dll` with 72 entries. Its CLR directory is zero. These are embedded-file metadata, not evidence that the helper was loaded or used.

The [outer loader](newnl_decompiled.c#L975574) obtains temporary-path APIs from `kernel32.dll`, uses the UTF-16 prefix `nls`, writes those `0x19e00` bytes to a temporary file, calls `LoadLibraryW`, attempts `DeleteFileW` if resolved, then looks up and caches `get_steam_profile`. Native instructions at `0x181253dd1` show the fourth `GetTempFileNameW` argument in `R9`, omitted by the pseudocode; `0x181253e3d`–`0x181253e75` show the payload address, length and written-length check. Failure, file deletion and actual loading remain unobserved. The outer [consumer](newnl_decompiled.c#L975535) checks the helper's return for 3 and two nonzero outputs before passing them to another function with a constructed `steam_avatar` label; this does not establish the contents or transmission of those outputs.

The native loader calls `GetTempFileNameW` with prefix `nls` and `uUnique = 0`, then opens the returned path with `GENERIC_WRITE`, sharing flags `0x5` (`FILE_SHARE_READ | FILE_SHARE_DELETE`), `CREATE_ALWAYS` and normal attributes ([flag definitions](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilew)). Microsoft documents that [`GetTempFileNameW`](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-gettempfilenamew) with a zero unique value creates and closes an empty file, and that such files are not automatically deleted. The actual path and any file creation are unobserved.

The code closes the write handle before testing both the `WriteFile` result and exact byte count. On successful write it calls `LoadLibraryW`, then attempts deletion if `DeleteFileW` was resolved, before looking up the helper export. On creation failure or failed/short write it also attempts deletion when available. `CloseHandle` and `DeleteFileW` return values are not checked; if `DeleteFileW` could not be resolved, the routine skips deletion. Windows documents that [mapped executable images can prevent deletion](https://learn.microsoft.com/en-us/windows-hardware/drivers/ifs/executable-images); the actual result for this sample is unknown. If the export lookup fails after a successful load, this routine returns zero without a `FreeLibrary` call; module lifetime elsewhere is not established.

Only a nonzero export pointer is cached. A subsequent call returns that pointer directly; failed attempts can run the temporary-file path again. The cache check is not guarded by a lock in this routine, and concurrent behavior has not been tested. [`verify_embedded_loader_emulation.py`](newnl_research/verify_embedded_loader_emulation.py) exercises 15 synthetic success/failure cases, including missing optional deletion, short writes, load/export failure, failed cleanup returns and cache reuse. All Windows and file APIs are stubbed; no file is created or removed and no module is loaded.

The embedded PE has `.text` RVA `0x1000` / raw offset `0x400` and `.rdata` RVA `0xf000` / raw offset `0xdc00`. The outer file stores the embedded PE as **file-layout bytes**, not an already section-mapped image. Consequently the outer Ghidra export's 323 discovered function entries within the embedded raw-byte range are not independent proof of 323 outer-module runtime functions; [`FUN_181261130`](newnl_decompiled.c#L987890) is inside the nested `.text` bytes. Analyze the extracted helper as a separate PE, using its own RVAs and loaded base.

Separately importing the extracted PE into Ghidra 12.2 produced [`steam_profile_helper_decompiled.c`](newnl_research/steam_profile_helper_decompiled.c): 380 discovered non-external functions, 379 decompiled and one marked failure at `FUN_18000d2c0`. The previously failed outer `FUN_181261130` corresponds to embedded [`FUN_18000dde0`](newnl_research/steam_profile_helper_decompiled.c#L14126), which does decompile in the correctly mapped import. `KERNEL32.DLL` and matching PDB information were unavailable to that analysis. Successful decompilation is not proof of correctness or buildable source.

The separately decompiled [`get_steam_profile`](newnl_research/steam_profile_helper_decompiled.c#L30) requires three output pointers and uses an SRW lock. Its [worker](newnl_research/steam_profile_helper_decompiled.c#L62) looks up `steam_api64.dll` and eight named Steam friends, user and utilities exports; all eight must resolve before it calls the interfaces. It copies a nonempty persona name with `lstrcpynA(..., 0x100)`, then requests the user's medium avatar and RGBA pixels. No real account data, API call, image or network traffic was observed.

| Status | Observed path |
| --- | --- |
| `0` | Null output pointer, unavailable module/export/interface, or missing/empty persona. Do not assume all output locations were initialized on every failure path. |
| `1` | A name is available, but the avatar handle, dimensions, size query or RGBA read is unusable. The worker sets image pointer and length to zero; this result is not cached as complete. |
| `3` | A name and generated PNG pointer/length are returned. The wrapper caches this result and returns it on subsequent calls without repeating the worker. The outer consumer checks for this status. |

The worker accepts nonzero image width and height no greater than 256 each and requests `width * height * 4` RGBA bytes. It prefixes each PNG scanline with filter byte zero and clears alpha outside an ellipse, then assembles `IHDR`, `IDAT` and `IEND` chunks using stored DEFLATE blocks, Adler-32 and CRC-32. These are properties of this helper's observed implementation, not evidence of a live avatar.

[`verify_embedded_profile_emulation.py`](newnl_research/verify_embedded_profile_emulation.py) checks 27 synthetic scenarios using section-mapped original instructions. Cases include each missing required export, all null output pointers, an empty and a 300-byte ASCII persona, name-only retry, image read failures, dimension boundaries and caching. Generated 1×1, 4×4, 256×64, 64×256 and 256×256 PNGs are independently decoded, checked for chunk CRCs and pixel/alpha content, and checked for stored-block boundaries. The 256×256 synthetic result was 262,488 bytes with five stored blocks. Windows and Steam APIs are stubbed; this does not execute Steam, validate concurrency, cover all possible images or prove real data was retrieved.

### Profile consumers and fallback assets

The outer [name consumer](newnl_decompiled.c#L975514) uses the helper's name when its return status is nonzero and the returned pointer is non-null and nonempty; otherwise it selects the literal `NettixDev` at `0x1811bc968`. It then passes that selection as the `%s` argument to the formatting path at `0x1801c8237`, targeting a 256-byte buffer. The exported pseudocode omits the fourth formatting argument; the native consumer puts the name pointer in `R9`. The fallback literal is not evidence of a real user's name or attribution.

The outer [avatar consumer](newnl_decompiled.c#L975535) substitutes the helper result only when status is exactly 3 and both returned image pointer and 32-bit length are nonzero. It changes the key to `steam_avatar` and forwards the selected buffer and length to [`FUN_18039ef70`](newnl_decompiled.c#L640971). Otherwise it forwards the original arguments. Both observed call sites pass key `avatar`, preferred VA `0x1806f8fa0`, length `0x475b`, and two additional integer arguments of 160 ([caller](newnl_decompiled.c#L531966); original instructions at `0x18030bc5d`–`0x18030bc84`). Those arguments alone do not prove successful decoding or rendering.

The avatar consumer is shown as `void` in the outer pseudocode, but the native epilogue leaves the image sink's `RAX` result intact; the call sites consume that result as a pointer. The emulator verifies this forwarding with a stubbed sink.

The embedded fallback bytes form a 96×96, 8-bit RGBA PNG of 18,267 bytes; their SHA-256 is `f0fde0983c0e64902ee604adfaf2a9a7290c835739b9ce3b28abf4c67c2ecabf`. The verifier checks chunk CRCs and decompresses its scanlines without executing it. A synthetic status-3 helper returning length `0xffffffff` shows that this outer wrapper itself forwards any nonzero 32-bit length without a cap; this is an artificial input, not an observed result from the embedded helper, whose image dimensions are bounded as described above.

[`verify_profile_consumers_emulation.py`](newnl_research/verify_profile_consumers_emulation.py) exercises 15 synthetic name/avatar selection cases using original outer instructions and, for normal cases, the separately mapped helper instructions. It stubs the temporary-file loader, Windows/Steam APIs and final formatter/image sink. It does not establish real helper installation, returned account data, downstream image decoding, rendering or concurrent behavior.

To inspect it without executing it, after installing the [Python dependencies](#raw-input-callback-trace):

```sh
.venv/bin/python newnl_research/inspect_embedded_profile.py newnl.dll
.venv/bin/python newnl_research/verify_embedded_profile_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_profile_consumers_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_embedded_loader_emulation.py newnl.dll
# Optional: writes exact embedded bytes only if the destination does not exist.
.venv/bin/python newnl_research/inspect_embedded_profile.py newnl.dll --extract steam_profile_helper.dll
```

The separate Ghidra project used for this export was temporary and is not included. To reproduce the export after extraction, use Ghidra 12.2 with JDK 25, an existing empty project directory, and a new output filename; the script checks the embedded file's MD5 and will not overwrite the output:

```sh
JAVA_HOME=/path/to/jdk25 /path/to/ghidra/support/analyzeHeadless /path/to/project-dir profile_analysis -import steam_profile_helper.dll -scriptPath newnl_research -postScript ExportEmbedded.java /path/to/new-profile-decompiled.c
```

### Embedded unwind-cookie routine

The separately mapped helper's remaining decompilation failure, [`FUN_18000d2c0`](newnl_research/steam_profile_helper_decompiled.c#L13195), is called by [`FUN_18000d2a0`](newnl_research/steam_profile_helper_decompiled.c#L13183) and [`FUN_18000d4e0`](newnl_research/steam_profile_helper_decompiled.c#L13238). The embedded PE's non-chained `.pdata`/unwind records directly name those two caller RVAs as handlers 15 and 1 times, respectively. This count excludes chained and indirect references; it does not establish that an exception occurred.

Original instructions for `FUN_18000d2c0` read a frame pointer and metadata, derive a frame-relative cookie address and XOR value, and tail-jump to the embedded [`__security_check_cookie`](newnl_research/steam_profile_helper_decompiled.c#L13199). For the version-1 unwind branch, a nonzero frame-register field contributes the high nibble of the fourth unwind byte as a 16-byte-scaled offset; see Microsoft's [x64 unwind layout](https://learn.microsoft.com/en-us/cpp/build/exception-handling-x64?view=msvc-170). An alignment flag in the separate handler metadata changes the base used for the cookie load.

[INFERENCE] This is consistent with CRT `/GS` exception-unwind cookie support, rather than a sample-specific feature: Microsoft's [`/GS` documentation](https://learn.microsoft.com/en-us/cpp/build/reference/gs-buffer-security-check?view=msvc-170) describes cookie checks during x64 unwinding, and a [published CRT source mirror](https://github.com/ojdkbuild/tools_toolchain_vs2017bt_1416/blob/master/VC/Tools/MSVC/14.16.27023/crt/src/x64/gshandlereh.cpp) shows a comparable handler calling `__GSHandlerCheckCommon`. The exact original symbol and toolchain are not recovered.

[`verify_embedded_cookie_emulation.py`](newnl_research/verify_embedded_cookie_emulation.py) executes nine synthetic frame/unwind cases, including aligned and negative offsets, two synthetic version-3 branches, and a mismatch. It runs the actual cookie comparison but stubs the failure target; it does not simulate OS exception dispatch, establish that the synthetic metadata is OS-valid, or recover the complete function. It also checks the direct non-chained handler counts above:

```sh
.venv/bin/python newnl_research/verify_embedded_cookie_emulation.py newnl.dll
```

## Failed `.model` helper and dispatch discrepancy

Ghidra could not decompile [`FUN_181261130`](newnl_decompiled.c#L987890). Its [original instructions](newnl_failed_functions.asm#L9044) take a destination in `RCX`, a byte value from `DL`, and a length in `R8`. They replicate the byte into integer and vector registers; the 16–32-byte path writes the repeated byte and returns the original destination. This supports a **fill-like** interpretation of that path, not a complete recovered function or source implementation.

For lengths 0–15, the instructions load a 32-bit relative entry from `0x181269e70 + 4*length`, add `0x181253350`, and jump. In this file's preferred-base raw section mapping, the first entry is `0x70016002`, giving target `0x1f1269352`, outside the PE image end `0x1812a0000`. No PE base-relocation entry overlaps the 64-byte referenced table. In an isolated Unicorn mapping of the original `.model` bytes, the zero-length case reaches that unmapped target; four tested lengths in the direct 16–32-byte path return and fill as expected. This does **not** establish what a Windows loader or prior runtime initialization would do.

At `0x181269670`, exactly `0x800` bytes before the referenced small-length table, the file contains 16 candidate relative entries: entry zero resolves to the return at `0x181261182`, and entry 15 resolves to the 15-byte store sequence at `0x181261171`. A similar candidate for the SSE remainder table is also `0x800` before its referenced address. In an **analytical experiment only**, [`verify_model_fill_emulation.py`](newnl_research/verify_model_fill_emulation.py) copies those two candidate tables to their referenced addresses in synthetic memory and supplies feature/threshold values selecting the SSE path. Under that modified mapping, 2,256 bounded cases across lengths 0–32 and selected sizes through 4096, 16 alignments and three fill values returned the input destination and changed only the requested bytes.

The embedded PE layout explains this specific displacement: its file header is at outer VA `0x181253f50`; `.text` begins at file offset `0x400` with RVA `0x1000`, while `.rdata` begins at file offset `0xdc00` with RVA `0xf000`. Treating that raw `.text` as already mapped places its apparent image base at `0x181253350`, but leaves the raw `.rdata` bytes `0x800` before their section-RVA addresses. The small table is the embedded PE's RVA `0x16b20`, and the apparent outer failed function corresponds to embedded RVA `0xdde0`.

The same verifier separately maps the embedded PE's headers and sections according to their own RVAs at a synthetic base, with its initial file data and no table copying. The same 2,256 bounded cases pass on its initial SSE-selection path. This supports the file-layout explanation and the fill-like interpretation for those cases; it is not a Windows load and does not apply imports, runtime initialization or other feature paths.

The original DLL and outer Ghidra pseudocode are not patched. Neither experiment proves all lengths, AVX or fast-string paths, or a faithful build. After installing the [Python dependencies](#raw-input-callback-trace), reproduce the experiments with:

```sh
.venv/bin/python newnl_research/verify_model_fill_emulation.py newnl.dll
objdump -d -Mintel --start-address=0x181261130 --stop-address=0x1812614b8 newnl.dll
```

## Cached page-range checks

[`FUN_1801d1c60`](newnl_decompiled.c#L302751) checks a supplied address range using hardcoded 4 KiB page indexing. Zero-length ranges return success without querying; nonzero ranges that overflow 64-bit address arithmetic return failure. For each uncached page it calls [`VirtualQuery`](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualquery) on the page-aligned address. The observed conditions require `State == 0x1000`, `(Protect & 0x101) == 0`, and `(Protect & 0xee) != 0`. Using Microsoft's [protection constants](https://learn.microsoft.com/en-us/windows/win32/memory/memory-protection-constants), this rejects `PAGE_NOACCESS`, `PAGE_GUARD`, and execute-only protection, while accepting the tested read-capable protections. These masks are the actual code checks, not a general Windows access guarantee.

Successful pages are stored in an 8,192-slot direct-mapped table at `DAT_180cd1e78`, indexed by `(address >> 12) & 0x1fff`, with the page number plus one as the entry. A hit skips `VirtualQuery` in this routine. Thus a previously cached result can remain accepted if the protection later changes, unless the entry is replaced or cleared elsewhere; this is not proof of a live stale cache or of the lifetime of all entries. Pages separated by 32 MiB collide. A multi-page request can cache earlier pages before a later page fails.

The 64 KiB cache occupies RVAs `0xcd1e78`–`0xce1e77`, entirely beyond `.data`'s file-backed bytes but within its virtual size; no base-relocation entry overlaps it. Per the [PE section-header specification](https://learn.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-image_section_header), that portion is zero-filled when an image is mapped, before subsequent code can modify it. Since entries contain a page number plus one, an initially zero slot is a miss. The emulation script checks the section bounds and relocations; it does not exercise the Windows loader.

The saved Ghidra project's reference database reports three references into this range, all to `0x180cd1e78` from `FUN_1801d1c60` at `0x1801d1c9c`, `0x1801d1cbc`, and `0x1801d1d3a`. This search found no other **Ghidra-discovered direct reference** into the range. It cannot exclude a computed alias, indirect access, a bulk operation starting outside the range, missing analysis, or runtime modification; it therefore does not prove that cache entries are never cleared. Reproduce the read-only project query with Ghidra 12.2 and JDK 25:

```sh
JAVA_HOME=/path/to/jdk25 /path/to/ghidra/support/analyzeHeadless newnl_research newnl_analysis -readOnly -process newnl.dll -noanalysis -scriptPath newnl_research -postScript ReportPageCacheRefs.java
```

The [Ghidra direct-call export](newnl_research/ghidra_direct_calls.tsv) records four calls to this helper: one in [`FUN_18020dd30`](newnl_decompiled.c#L346520), which checks a 12-byte range before a subsequent read, and three in [`FUN_180277b30`](newnl_decompiled.c#L426126), which checks ranges while processing pointer-based records. This count excludes unresolved and indirect calls. The observations do not prove the calls ran, identify every consumer, or establish that a range remains safe between checking and use.

[`verify_page_cache_emulation.py`](newnl_research/verify_page_cache_emulation.py) runs 17 synthetic scenarios through the original instructions with `VirtualQuery` stubbed: range overflow, zero length, protection masks, multi-page checks, partial caching, collision replacement, and a protection change after caching. It does not query actual page protections or model concurrent mutation or Windows scheduling.

```sh
.venv/bin/python newnl_research/verify_page_cache_emulation.py newnl.dll
```

## Paint-kit map discovery

The page-check consumer [`FUN_180277b30`](newnl_decompiled.c#L426126) is used by [`FUN_180277e90`](newnl_decompiled.c#L426313), whose log messages describe a `paint kit map`. Its native instructions scan 186 candidate offsets from `0x138` through `0x700` in steps of eight. For each offset the selector calls the validator. A candidate is eligible when the validator returns at least 300 valid records **and** sets the marker byte; the eligible candidate with the largest returned count wins, with the earlier offset retained on a tie. A nonzero selected offset is cached in `DAT_180cfc848`; a zero result is not cached and a later call scans again. A null input returns zero even if the cache is populated.

The validator reads an outer record count and array pointer from the candidate. It accepts outer counts from 300 through 30,000, checks the array range through `FUN_1801d1c60`, and iterates 0x20-byte records whose pointer field is at offset `0x18`. For each record it checks a 16-byte pointed-to structure, accepts an identifier from 1 through 100,000, checks the name pointer, and applies a 2–48-byte lowercase ASCII letter/digit/underscore name filter after string construction. A valid name equal to `so_olive` or `cu_medieval_dragon_awp` sets the optional marker byte.

The name reader [`FUN_1802776e0`](newnl_decompiled.c#L425916) checks the source pointer numerically, then calls [`FUN_180277690`](newnl_decompiled.c#L425900), which copies at most 255 bytes into a 256-byte buffer and appends a NUL. The validator's preceding page check covers only two source bytes, not the full possible copy; the numeric guard is not a readability guarantee.

The PE exception directory associates `FUN_180277690` with handler RVA `0x4eee20` and a single scope spanning RVAs `0x27769a`–`0x2776cb`, with filter value `1` and jump RVA `0x2776cc`. The jump target clears the return byte. This metadata and the handler's [`RtlUnwindEx` path](newnl_decompiled.c#L882790) are static evidence of an exception-handling path, not a demonstration of how a real Windows fault is dispatched. In Unicorn without Windows exception dispatch, an unreadable synthetic source raises an unmapped-read error.

When given a diagnostic-string output, the validator appends the first three **valid** records as decimal `id:name` pairs, separated by comma-space; it also separates them from existing output. It still checks later records for the final valid count and marker. The selector supplies this string to a `[skins] kit map candidate` log path for candidates with at least 300 valid records; the logger was stubbed, so no real log emission was observed.

[`verify_kit_map_selection_emulation.py`](newnl_research/verify_kit_map_selection_emulation.py) exercises seven synthetic selector scenarios with the validator and logger stubbed. [`verify_kit_map_validator_emulation.py`](newnl_research/verify_kit_map_validator_emulation.py) exercises 16 synthetic validator scenarios, including the native name-copy path, diagnostic truncation, prior output, multi-digit identifiers and a marker after the first three records. Page checks, string storage helpers, byte comparison, copy and free are stubbed. [`verify_kit_name_emulation.py`](newnl_research/verify_kit_name_emulation.py) separately checks 12 synthetic name-copy cases, numeric pointer boundaries and the exception-scope metadata, with `memset`, `strlen` and string construction stubbed. These checks do not establish real game structure layouts, Windows exception behavior, successful discovery, actual paint kits, or cosmetic changes.

```sh
.venv/bin/python newnl_research/verify_kit_map_selection_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_kit_map_validator_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_kit_name_emulation.py newnl.dll
```

### Schema localization and fallback

On a conditional schema-parsing path, [`FUN_18027f440`](newnl_decompiled.c#L432394) obtains `localize.dll`'s `CreateInterface`, requests `Localize_001`, and stores the result in `DAT_180cfc838`; the error path logs that internal names will be used. It calls item and paint-kit processing helpers, then constructs a path using `pak01_dir.vpk` and passes it to another helper; a failure path logs that the archive was not opened. These are static integration leads, not proof that the module, interface or archive was available or used. The names are common game components, not standalone cheat indicators.

[`FUN_1802785c0`](newnl_decompiled.c#L426641) passes a record-derived string and fallback string to [`FUN_1802777c0`](newnl_decompiled.c#L425953). If the interface is present and the key is nonempty, that helper calls the interface's vtable entry at byte offset `0x88` with the key. It returns a copy of the supplied fallback if the returned pointer is null, the returned string is empty, or its bytes equal the original key or the key with one leading `#` removed. Otherwise it copies the returned string. Comparisons are case-sensitive; the actual interface method name and ownership contract are not recovered.

[`verify_kit_localization_emulation.py`](newnl_research/verify_kit_localization_emulation.py) executes 12 synthetic cases, including absent interface, missing and unchanged results, the `#` fallback, and strings on both sides of the 15-byte inline-storage boundary. The interface callback, comparison and string-storage helpers are stubbed; no localization service, archive or game is opened.

```sh
.venv/bin/python newnl_research/verify_kit_localization_emulation.py newnl.dll
```


### Composite-material request callback

The hook initializer looks up `CCompositeMaterialManager` in the `client.dll` range, reads the first pointer from the discovered address, and attempts a `composite_request` registration only when the saved `composite_append` and `composite_add_container` pointers are both nonzero ([setup](newnl_decompiled.c#L301599)). The callback target is `FUN_1801ccbc0`; registration success and the actual runtime target have not been observed.

The [callback instructions](newnl_decompiled.c#L299670) increment `DAT_180cd1aa0`, call `FUN_1802988b0` with the second and third callback arguments, call the saved original at `DAT_180cd1a38` with the three original arguments, then decrement the counter. The helper uses nonzero `DAT_180961eec` preferentially, or `DAT_180cfe65c + 0x18` when the former is zero and the latter nonzero. It checks `DAT_180cd011c`, both supplied arguments and the derived offset before entering a lock-protected path.

[`verify_composite_callback_emulation.py`](newnl_research/verify_composite_callback_emulation.py) executes seven synthetic cases through the native callback and early helper gates. The saved original and lock/unlock functions are stubbed. The state-byte-on case uses a null synthetic cached player and returns before the mutation path. It verifies forwarding and balanced counter changes for these normal returns, not hook installation, exception paths, concurrent execution, real entity ownership or cosmetic changes.

```sh
.venv/bin/python newnl_research/verify_composite_callback_emulation.py newnl.dll
```

### Composite owner selection

On the enabled pending-state branch, [`FUN_1802988b0`](newnl_decompiled.c#L451648) copies 32 bytes from `DAT_180cfca20` under the lock, then consults a cached player-like pointer. Before resolving owner candidates, native instructions require a 16-bit value at an offset derived from `DAT_180cfe62c` and `DAT_180cfe5d4` to equal the low 16 bits of `DAT_180cfe4a0`. They also compare a second derived 64-bit value to `0xf000000000000010`; whether these conditions hold in a real session is unverified.

The helper subtracts the selected offset from its second argument. It uses fields at offsets `DAT_180cfe658` and `DAT_180cfe634` relative to the cached pointer to obtain two handles, passed through `FUN_1803a0940`. The first handle is not resolved when it is `-1`; zero offsets skip their respective lookup. A nonzero first resolved pointer matching the adjusted argument takes precedence and is labelled `world gloves`. Otherwise a matching nonzero second pointer is labelled `hud arms`. Only a match reaches `FUN_18028f3a0` with the request-like first argument and the copied 32 bytes; unmatched requests are left alone on this path. These labels come from the binary, not independently verified entity types.

Static schema lookups associate `DAT_180cfe62c` with `C_CSPlayerPawn::m_EconGloves`, `DAT_180cfe5d4` with `C_EconItemView::m_iItemDefinitionIndex`, and `DAT_180cfe5d8` with `C_EconItemView::m_iItemID` ([lookups](newnl_decompiled.c#L450285), [glove lookup](newnl_decompiled.c#L450527)). On one gated application path, [`FUN_180295ae0`](newnl_decompiled.c#L449729) calls a guarded 64-bit writer with the item-ID address and bytes at `DAT_180650290`; original PE bytes decode to `0xf000000000000010`. It writes the selected definition index separately. Later, under the `DAT_180ccfede` branch and the lock, it publishes the selected definition to `DAT_180cfe4a0`, sets `DAT_180ccfedf`, and copies eight DWORDs from `FUN_1802903e0` into `DAT_180cfca20` ([publication](newnl_decompiled.c#L449860)). This is a static connection between producer and consumer, not proof that either path executes in the game.

The owner handle offsets are derived differently: `DAT_180cfe634` comes from `C_CSPlayerPawn::m_hHudModelArms`, whereas `DAT_180cfe658` is calculated as the `m_flNextSprayDecalTime` lookup result plus eight, not directly looked up under a world-gloves field name ([lookup](newnl_decompiled.c#L450550)). [`FUN_1803a0940`](newnl_decompiled.c#L642636) rejects handles `0` and `0xffffffff`, then uses bits 9–14 to choose one of 64 chunks and bits 0–8 to choose one of 512 slots. Chunk and slot strides come from globals; this function does not compare the remaining handle bits against a serial number. Its guarded reads and pointer checks are not a substitute for validating actual entity layouts or lifetime.

[`verify_composite_selection_emulation.py`](newnl_research/verify_composite_selection_emulation.py) runs the native tint-packing helper and guarded marker writer on synthetic input, copies the resulting tint words into the synthetic global snapshot, then runs the original callback, guarded numeric readers, handle resolver, selection branches and in-place tint helper against 15 scenarios. It checks both labels, first-pointer precedence, primary/fallback offset choice, a second chunk, high-bit handle aliasing, missing chunks and slots, invalid handles, mismatched fields and disabled states. Matching scenarios write synthetic tint slot 3 before the saved original callback is invoked; rejection scenarios leave it unchanged. The full producer routine and its publication step are not executed; comparison, logging, locks and the original callback are stubbed. No live process, real handle lifetime, exception dispatch, hook installation or cosmetic change is verified.

```sh
.venv/bin/python newnl_research/verify_composite_selection_emulation.py newnl.dll
```

### Tint float packing

[`FUN_1802903e0`](newnl_decompiled.c#L445139) reads eight groups of four consecutive 32-bit floats starting at configuration offset `+0x60`, with a `0x10`-byte group stride, and returns eight packed DWORDs. For finite inputs each component is clamped to `[0, 1]`, multiplied by `255.0`, increased by `0.5` using single-precision operations, and converted by truncation. The first component occupies the least significant byte and the fourth the most significant byte; the engine's semantic channel names are not independently verified. For example, `(0.5, 0.25, 0.75, 0.5)` produces `0x80bf4080`. Behavior for NaN inputs is not characterized.

[`verify_tint_packing_emulation.py`](newnl_research/verify_tint_packing_emulation.py) executes the original helper without stubbed calls on two synthetic eight-slot configurations. It checks component order, rounding near zero, clamping including infinities, and unchanged input and output boundaries. The integrated selection scenario separately feeds native-packed values into the synthetic published snapshot; it does not run the full glove configuration or publication routine.

```sh
.venv/bin/python newnl_research/verify_tint_packing_emulation.py newnl.dll
```

### Tint container inspection and construction

The separately invoked [`FUN_18028f3a0`](newnl_decompiled.c#L444395) treats its first argument as a request-like object with an outer count at `+0x50` and array pointer at `+0x58`. It rejects a null object, a count above 64, or a nonzero count with a null array. For each `0x138`-byte outer entry, it considers only entries with DWORD `3` at `+0x04`, a child count of 1–256 at `+0xf8`, and a nonnull child-array pointer at `+0x100`. These offsets describe the inspected code and synthetic buffers, not a verified game structure.

Children have stride `0x288` and a key pointer at `+0x00`. The code copies a bounded key and matches case-sensitive `g_vColorTint1` through `g_vColorTint8`, with exactly one suffix digit and an immediate terminator. For each match, it attempts to write DWORD `9` at child `+0x40` and the corresponding one of eight input DWORDs at `+0x8c`. It counts an entry only when both writes report success. A positive count increments `DAT_180cfc9e8` once and is returned; repeated matching keys are each counted. These are raw values and offsets; their complete engine-level types are not established.

When no existing match is counted, fallback dispatch requires both supplied callback pointers and the four nonzero globals at `DAT_180961e30`, `DAT_180961e38`, `DAT_180961e40`, and `DAT_180961e50`. The dispatch temporarily sets `DAT_180cfc9e4` to the current thread ID and calls `FUN_18028e780`, then clears the marker. A successful helper result increments the same counter and returns `0`; failure or missing prerequisites returns `-1`. The fallback helper's instructions generate eight `g_vColorTint%d` names, set the same two fields, append each entry, build an `instance_params` container, pass it to the supplied insertion callback, and invoke two cleanup callbacks.

[`verify_composite_tint_emulation.py`](newnl_research/verify_composite_tint_emulation.py) exercises 17 synthetic scenarios, including exact names and invalid suffixes, duplicate entries, the 256-child boundary, rejection paths, injected writer failures and stubbed fallback success/failure. Its comparison and creation helpers are stubbed; failure scenarios also stub one writer return. [`verify_composite_creation_emulation.py`](newnl_research/verify_composite_creation_emulation.py) separately executes the fallback helper and captures eight ordered names, raw type values and input DWORDs; its formatter, memory-fill operation and engine-specific callbacks are stubbed. Neither run exercises the complete callback-to-mutation path, real engine containers, Windows exception dispatch, concurrent requests or a live cosmetic change.

```sh
.venv/bin/python newnl_research/verify_composite_tint_emulation.py newnl.dll
.venv/bin/python newnl_research/verify_composite_creation_emulation.py newnl.dll
```

### Partial tint writes

Both the direct in-place helper and the mode-2 item interceptor attempt the type DWORD write before the tint DWORD write. Their success accounting happens only after both return success; neither path rolls back the first write if the second returns failure. In synthetic failure injection, the item therefore retains type `9` and its previous tint while the failed entry is not counted or recorded as consumed.

The direct helper continues to later entries. If another entry succeeds, it returns that success count and increments the shared counter once; if none succeeds and the fallback prerequisites are present, it can attempt fallback creation despite the partial type write. The window interceptor likewise leaves the observation mask unchanged after the failed value write; a subsequent successful interception of the same synthetic item records the slot.

The failure scenarios in [`verify_composite_tint_emulation.py`](newnl_research/verify_composite_tint_emulation.py) and [`verify_tint_write_failures_emulation.py`](newnl_research/verify_tint_write_failures_emulation.py) force one native writer call to return failure without performing that call's write. They test the caller's response, **not** an actual invalid pointer, hardware fault or Windows exception dispatch. The optional fallback result and engine callbacks are also stubbed.

```sh
.venv/bin/python newnl_research/verify_tint_write_failures_emulation.py newnl.dll
```

### Tint window and consumption tracking

[`FUN_18028ebb0`](newnl_decompiled.c#L443989) arms a distinct mode-2 tint window: it copies eight requested DWORDs, sets a deadline of `GetTickCount64() + 10,000` milliseconds, clears prior observed values and mask, and sets an armed byte. The glove application routine calls it on one gated branch after packing colors ([caller](newnl_decompiled.c#L449887)). This window is separate from the `DAT_180ccfedf`-gated direct composite-request path described above.

[`FUN_18028e920`](newnl_decompiled.c#L443855), called by [`FUN_18028efa0`](newnl_decompiled.c#L444281), intercepts a synthetic-item-like input. While mode 2 is active, it accepts exact `g_vColorTint1`–`g_vColorTint8` names. A successful type/value write sets an applied byte, increments `DAT_180cfc9e8`, stores the corresponding requested DWORD in an observed array, sets its mask bit, and sets an observed byte. A separate container-creation path can record all eight bits at once ([path](newnl_decompiled.c#L444340)); its hook installation and live execution are unverified.

[`FUN_18028ee00`](newnl_decompiled.c#L444125) reports consumption only in mode 2, at or before the deadline, with the observed byte and a nonzero mask, when **every masked slot** equals the corresponding supplied DWORD. It does not require all eight slots to have been observed: one matching recorded slot suffices. An expired consumption check returns false without itself clearing the mode; a later call through the expiry gate `FUN_18028e6d0` clears the mode and armed byte. `FUN_18028ec90` clears window state, while `FUN_18028ef30` separately clears the observed array and mask.

The producer's [retry branch](newnl_decompiled.c#L449673) stops retrying when consumption is reported **or** the retry counter exceeds two, and otherwise uses a 500 ms cooldown before reapplication. This is static control-flow evidence; the full producer and real timing have not been executed. Mode 1 is distinct: `FUN_18028eb20` sets a 5,000 ms window, and the item interceptor accepts `g_vColor0`–`g_vColor3`; the mode-2 consumption checker does not report it consumed.

[`verify_tint_lifecycle_emulation.py`](newnl_research/verify_tint_lifecycle_emulation.py) runs the native arm, item interceptor, consumption check and reset helpers through 16 synthetic checks. It verifies partial-mask matching, ignored unobserved values, mismatch rejection, the inclusive deadline, expiry clearing and the mode-1 distinction. The clock, comparison, logger and locks are stubbed; the enclosing hook and full retry routine are not executed. No live timing, concurrent behavior, exception dispatch or actual cosmetic effect is established.

```sh
.venv/bin/python newnl_research/verify_tint_lifecycle_emulation.py newnl.dll
```

### Direct versus window tint accounting

The direct in-place success branch in [`FUN_18028f3a0`](newnl_decompiled.c#L444473) and the window item-interception branch in [`FUN_18028e920`](newnl_decompiled.c#L443926) can write the same raw type and tint fields and both increment `DAT_180cfc9e8`. They account for consumption differently: the direct in-place branch increments the counter once after one or more matches, but does not itself set the mode-2 observed byte or mask. The window interceptor sets those observation fields for each successful mode-2 entry. Therefore a counter increment alone is not evidence that `FUN_18028ee00` will report the window consumed.

[`verify_tint_accounting_emulation.py`](newnl_research/verify_tint_accounting_emulation.py) deliberately arms a synthetic mode-2 window, calls the direct helper on a matching item, and then forwards that same item through the native append wrapper. In both slot-1 and slot-8 cases, the direct write changes the item and increments the counter while the observation mask stays zero and the consumption check returns false. The append interceptor then records the slot, increments the counter again and makes the consumption check return true. This constructed sequence compares helper behavior; it does **not** establish that both branches run together in a real session. Engine callbacks, clock, comparison, logging and locks are stubbed, and the direct helper is invoked without its enclosing owner-selection callback.

```sh
.venv/bin/python newnl_research/verify_tint_accounting_emulation.py newnl.dll
```

### Composite append and container wrappers

The hook setup attempts registrations labelled `composite_append` and `composite_add_container` with callbacks [`FUN_1801ccb50`](newnl_decompiled.c#L299634) and [`FUN_1801ccb90`](newnl_decompiled.c#L299652), respectively ([registration](newnl_decompiled.c#L301599)). Both increment `DAT_180cd1aa0` on entry and decrement it on normal return. The append callback calls its inspection helper before forwarding the two original arguments to the saved original append pointer. The add-container callback calls its saved original first, then runs `FUN_18028f170` on the first argument. No registration success, real calling context or exceptional return has been observed.

In mode 1, when the first DWORD read from the append callback's first argument is zero and the initializer pointer is present, [`FUN_18028efa0`](newnl_decompiled.c#L444201) can construct `g_vColor0`–`g_vColor3` and call the saved original append for each before inspecting and forwarding the incoming item. Successful generation sets the applied flag and increments the tint counter once; the subsequent incoming item may separately be modified and counted. In mode 2, the incoming-item interception described above occurs before original forwarding.

After original add-container forwarding, [`FUN_18028f170`](newnl_decompiled.c#L444289) checks the thread marker, armed byte, mode, saved callbacks and four initializer/container dependencies. If the current thread matches the marker, it skips fallback creation. Otherwise, on the active mode-2 path it copies the desired words and clears the armed byte **before** calling `FUN_18028e780`, with the current thread ID temporarily stored in the marker. A successful return records all eight words, sets mask `0xff` and increments the tint counter. A failed creation leaves the armed byte clear on that path; both outcomes clear the thread marker on normal return.

[`verify_composite_wrappers_emulation.py`](newnl_research/verify_composite_wrappers_emulation.py) exercises nine synthetic scenarios: append mutation before forwarding, null and unmatched inputs, mode-1 four-entry generation, add-before-creation ordering, successful and failed fallback results, same-thread suppression and a missing dependency. One success scenario executes the native add-wrapper code, `FUN_18028f170`, `FUN_18028e780` and `FUN_18028ee00` together. It observes eight ordered `g_vColorTint1`–`g_vColorTint8` entries passed to the same synthetic list, a container-builder call labelled `instance_params`, a second call to the saved original add callback, both cleanup calls, mask `0xff`, and a successful consumption check. Original engine callbacks, initialization, container construction, formatting, memory fill, clock, comparison, logging and locks are stubbed. Fallback creation itself is stubbed in the separate failure scenario. The tests do not establish hook installation, real engine object layout, fault handling, concurrency or live cosmetics.

```sh
.venv/bin/python newnl_research/verify_composite_wrappers_emulation.py newnl.dll
```

## Timed-out startup routine

The startup worker calls `FUN_1803cb350` and then conditionally supplies the text `some signatures not found, see console` ([caller](newnl_decompiled.c#L672040)). Its body timed out in both decompilation attempts, so the caller does not reveal its full behavior.

Ghidra attributes 2,384 references to defined strings to this function. Separately, [`FUN_1803ca5d0`](newnl_decompiled.c#L672549) obtains a module handle and module information, passes a pattern string to a helper, and reports pattern-resolution failures. At `0x1803cb39c`, the original instructions load `client.dll`, `entity_list`, and a pattern literal into the first three Windows x64 argument registers before calling that helper; see the [linear disassembly](newnl_failed_functions.asm). This directly supports a signature-lookup role for that call, not a complete reconstruction of the function.

The [resolver call-site table](newnl_research/startup_resolver_candidates.tsv) records all 120 Ghidra-discovered calls attributed to this function targeting `FUN_1803ca5d0`, `FUN_1803ca6d0`, or `FUN_1803ca790`, for which the first three arguments came from identifiable string loads along a straight-line sequence. An independent Capstone pass checked the original PE bytes, instruction boundaries, register writes, referenced strings, and direct call targets. This does not establish additional arguments, control-flow reachability, resolved addresses, or the absence of other call targets.

The initial extractor missed the call at `0x1803cd073`: its label is the three-byte string `hud` at `0x1806e05fc`, which was not a Ghidra-defined string and was below the six-character raw-scan threshold. The original bytes and register loads were checked separately and the call was added to the table. Pattern strings are sample- and potentially game-build-specific leads, not tested detection signatures.

### Pattern parsing and scan loop

[`FUN_1803ca5d0`](newnl_decompiled.c#L672549) passes a module range and pattern string to [`FUN_1801d1e00`](newnl_decompiled.c#L302845). The scanner calls `FUN_1801d1b50` to parse an explicitly sized string into two-byte entries: a literal byte plus a wildcard flag. The parser consumes up to two consecutive hexadecimal digits per literal byte, accepting upper- and lowercase; a single digit yields its numeric value. It treats a consecutive run of `?` characters as **one** wildcard byte, so `??` is one wildcard and `? ?` is two. Other characters, including spaces and non-hex separators, are skipped. These are properties of this sample's parser, not a general pattern-language specification.

For a nonempty parsed pattern and nonzero range base and length, the native loop examines candidates from the beginning through the final position at which the pattern fits, returning the first match or zero. Literal entries compare a buffer byte; wildcard entries advance without reading that byte. The Ghidra pseudocode does not present the complete loop: execution jumps from `0x1801d1e5d` to an out-of-line fragment at `0x180524dec` and back to `0x1801d1e63`. Inspect original instructions rather than interpreting Ghidra's `FUN_180524dec()` as an ordinary complete call.

[`verify_pattern_scanner_emulation.py`](newnl_research/verify_pattern_scanner_emulation.py) executes the parser and scan instructions in 16 synthetic cases, stubbing vector append and free. The cases cover first and last-position matches, no match, short and empty inputs, wildcard runs, individual hex digits, explicit string length and synthetic unmapped memory. In Unicorn, a literal comparison against an unmapped byte faults; a wildcard-only pattern can return an unmapped synthetic address without reading it. This does not establish Windows exception behavior, actual module readability, or successful matching in a game.

```sh
.venv/bin/python newnl_research/verify_pattern_scanner_emulation.py newnl.dll
```

### First `entity_list` lookup

For the first lookup, the instructions after `FUN_1803ca5d0` returns compute `candidate = match + 7 + sign_extend_64(*(int32_t *)(match + 3))` with 64-bit wrapping when `match` is nonzero. They accept the candidate only when its unsigned 64-bit value is in the inclusive range `0x10000`–`0x7ffffffffffe`. On acceptance, the caller passes it to `FUN_1803ca370` and writes it to `DAT_1809619d0`; on rejection, it passes zero to that helper, increments `DAT_181111840`, calls the error logger and writes zero. The displacement read occurs **before** the numeric candidate check; the check does not establish that either address is readable or points to an entity list.

When the lookup returns zero, this caller writes zero without its own additional record, increment or log. The real [`FUN_1803ca5d0`](newnl_decompiled.c#L672549) can itself increment counters and log failure; the isolated test below stubs it and therefore does not verify those effects. The caller also resets `DAT_181111840` and `DAT_181111844` before the first lookup. These are observations for this lookup only, not a reconstruction of the whole timed-out function.

[`verify_startup_first_resolver_emulation.py`](newnl_research/verify_startup_first_resolver_emulation.py) executes the original instructions through the first global store in eight synthetic cases, covering positive and negative displacements, zero lookup, and both numeric range boundaries. The lookup, record and log helpers are stubbed; the test does not scan a module, validate game addresses or run the rest of startup.

```sh
.venv/bin/python newnl_research/verify_startup_first_resolver_emulation.py newnl.dll
```

### Resolver wrappers and address checks

The call-site table also includes calls to [`FUN_1803ca6d0`](newnl_decompiled.c#L672599) and [`FUN_1803ca790`](newnl_decompiled.c#L672631). Original instructions distinguish their address checks; arithmetic below wraps to 64 bits:

- `FUN_1803ca6d0` adds its fourth argument to a nonzero match to obtain a call-site address. It checks that address against `0x10000`–`0x7ffffffffffe`, reads its first byte through `FUN_180011220`, and requires opcode `0xe8`. It then uses `FUN_180011200` to read the signed 32-bit displacement at the next byte and computes `site + 5 + displacement`. **The resulting target is checked for zero, not for that numeric range or executable memory.** A zero result is recorded and then reported as an error.
- `FUN_1803ca790` adds its fourth argument to a nonzero match. If that base is nonzero, it directly reads a signed 32-bit displacement at `base + fifth_argument`, computes `base + displacement + sixth_argument`, and then applies the inclusive numeric range check to the result. The displacement is read before the result is checked.

Both wrappers pass their result to `FUN_1803ca370` on their tested success path. On tested failure paths they record zero, increment `DAT_181111840` and call a logger. If the underlying resolver returns zero, the wrappers return zero without those additional actions; the real resolver may already have updated state or logged.

[`verify_startup_resolver_wrappers_emulation.py`](newnl_research/verify_startup_resolver_wrappers_emulation.py) exercises 19 synthetic cases using the original wrapper and byte-reader instructions, with scanner, record and logger stubbed. These include signed displacements, boundary values, a call target of `1` accepted by the call wrapper, and two unmapped-read faults in Unicorn. Numeric range checks do not establish readability. The emulator does not reproduce Windows exception dispatch or establish the behavior of faults on Windows, and it does not test actual pattern matches or game addresses.

```sh
.venv/bin/python newnl_research/verify_startup_resolver_wrappers_emulation.py newnl.dll
```

### Hook-target correlation

[`hook_target_provenance.tsv`](newnl_research/hook_target_provenance.tsv) combines the 62 labelled hook-registration attempts with static reads in `FUN_1801cf6d0` and RIP-relative writes in the linear `0x1803cb350`–`0x1803d5e10` disassembly. Of these, 55 target expressions have a matching write in that range; 22 of those also have a resolver call with the same label. These are static associations, not observed successful hooks.

| Evidence class | Rows | Interpretation |
| --- | ---: | --- |
| `label_and_straight_line_return_store` | 12 | Same label; instructions store the resolver helper's returned `RAX` to the hook target global without an intervening branch, call, or `RAX` write. The helper may return zero and registration can still fail. |
| `label_and_global_store_untraced` | 10 | Same label and a write to the target global are present, but the table does not establish the value flow from that resolver call to the write. |
| `global_store_only` | 33 | A write to the hook target global is present in the inspected range; no matching resolver was established by the original direct-helper lookup. The separate inline analysis below traces conditional paths for 26 of these rows. |
| `no_startup_rip_store_found` | 7 | No matching RIP-relative write was found in the inspected range. Other initialization, indirect writes, or missed disassembly remain possible. |

For example, the `trace_bullet` resolver call at `0x1803d4466` returns immediately into a store to `DAT_180961f68` at `0x1803d4472`; the hook initializer later reads that global and passes it to the registration helper ([pseudocode](newnl_decompiled.c#L301562), [original instructions](newnl_failed_functions.asm#L7725)). This establishes a static connection, not a live target address or successful hook. The `hook_target_rip_read_vas` column lists reads anywhere in the hook initializer; it does not by itself prove that a particular read reaches a particular helper call.

### Inlined scanner-success paths

[`inline_hook_resolution.tsv`](newnl_research/inline_hook_resolution.tsv) records 26 of the 33 `global_store_only` targets for which the original instructions show a conditional path from a pattern scan to the hook target's global. The traced path loads a module and pattern, calls the scanner, branches on a nonzero result, records the result, and stores it in the target global. The byte-level checks cover argument setup, branch targets and the relevant register writes; following the value across intervening calls assumes the standard Windows x64 nonvolatile-register convention. The table does not prove that a module was loaded, a pattern matched, the branch ran, or a hook succeeded.

The table includes distinct scanner and hook labels: for example, scanner label `vote_start_handler` corresponds to hook label `vote_start` on the traced path. Two entries name `steamnetworkingsockets.dll`; this is a static module-lookup observation, not evidence of network traffic.

The `create_move` lookup also feeds the adjacent `input_view_sync` global on a separate conditional path. Given a nonzero lookup result `m`, the instructions load a signed 32-bit displacement `d` from `m + 7`, then pass `m + d + 0x33` and `m + d + 0x4b` to `FUN_18000f3a0`; the respective return values are stored in the `create_move` and `input_view_sync` target globals ([instructions](newnl_failed_functions.asm#L686), [pointer-reading helper](newnl_decompiled.c#L8119)). This is a static derivation, not a verified runtime address.

The `generate_primitives` lookup similarly feeds two globals on a conditional path: one through a pointer read using `DAT_18096190c`, and `draw_scene_object` through a pointer read at a second offset. A separate lookup for `CAnimatableSceneObjectDesc` feeds `generate_model_primitives`; the exact object layout and offset meanings remain unknown ([instructions](newnl_failed_functions.asm#L119)).

For `get_resource_view_a`, the result of the `get_resource_view` lookup is stored directly to the corresponding hook global. If that result is nonzero, the code constructs a further scan range beginning at the first result plus one and stores the next scanner result to the `get_resource_view_b` global ([instructions](newnl_failed_functions.asm#L7940)). This is an observed sequence, not proof that either lookup succeeds or that the two runtime targets are distinct.

## Priorities for the next reverse engineer

1. Open the exact DLL in Ghidra and use the function index, hook registration table and source-line links to select a path. Resolve data types and the real target for a hook before treating its label as factual behavior.
2. For the `create_move` and input replacements, confirm instructions, calling convention, gates, original-call ordering, and writes; trace related flags and event callbacks rather than assuming the logged label explains all behavior.
3. For network analysis, trace callers and data into the WinHTTP helper and separately inspect UI `ShellExecuteA` paths. Record string provenance and actual observations; do not promote static URLs to observed traffic.
4. For any detection hypothesis, validate behavior on the authorized sample/game version, compare benign implementations and account for ASLR and changing offsets. A static byte sequence, filename, API name, or page protection in isolation is not enough to establish malicious behavior.
5. Recover the two failed function bodies and verify indirect branches and references before claiming complete coverage. The export and Ghidra-discovered references omit paths that static analysis cannot resolve.
