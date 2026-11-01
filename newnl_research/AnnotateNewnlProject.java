// Adds evidence-backed listing comments to the matching sample's Ghidra project.
// Existing comments are preserved. Run against a copy if independent annotations are desired.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

public class AnnotateNewnlProject extends GhidraScript {
    private static final String EXPECTED_MD5 = "c8c8f09398634be039ee3011e08e5971";
    private static final String PREFIX = "RE-HANDOFF: ";
    private final List<Address> addresses = new ArrayList<>();
    private final List<String> comments = new ArrayList<>();

    private Address address(String text) {
        return toAddr(text.startsWith("0x") ? text.substring(2) : text);
    }
    private void addCall(String location, String target, String comment) {
        Address a = address(location);
        Address expected = address(target);
        Instruction ins = currentProgram.getListing().getInstructionAt(a);
        if (ins == null || !"CALL".equalsIgnoreCase(ins.getMnemonicString())) {
            throw new IllegalStateException("Expected CALL instruction at " + a);
        }
        boolean found = false;
        for (Reference ref : ins.getReferencesFrom()) {
            if (ref.getToAddress().equals(expected) && ref.getReferenceType().isCall()) found = true;
        }
        if (!found) throw new IllegalStateException("Unexpected call target at " + a + ": expected " + expected);
        addresses.add(a);
        comments.add(PREFIX + comment);
    }
    private void addJump(String location, String target, String comment) {
        Address a = address(location);
        Address expected = address(target);
        Instruction ins = currentProgram.getListing().getInstructionAt(a);
        if (ins == null || !"JMP".equalsIgnoreCase(ins.getMnemonicString())) {
            throw new IllegalStateException("Expected JMP instruction at " + a);
        }
        boolean found = false;
        for (Address flow : ins.getFlows()) {
            if (flow.equals(expected)) found = true;
        }
        if (!found) throw new IllegalStateException("Unexpected jump target at " + a + ": expected " + expected);
        addresses.add(a);
        comments.add(PREFIX + comment);
    }
    private void addBinding(String location, String handler, String api, String condition) {
        Address a = address(location);
        Address expected = address(handler);
        Instruction ins = currentProgram.getListing().getInstructionAt(a);
        if (ins == null || !"LEA".equalsIgnoreCase(ins.getMnemonicString())) {
            throw new IllegalStateException("Expected LEA instruction at " + a);
        }
        boolean found = false;
        for (Reference ref : ins.getReferencesFrom()) {
            if (ref.getToAddress().equals(expected)) found = true;
        }
        if (!found) throw new IllegalStateException("Unexpected binding target at " + a + ": expected " + expected);
        addresses.add(a);
        comments.add(PREFIX + "script API binding=" + api + "; registration condition=" + condition +
            ". Static binding only; script execution not established.");
    }
    private void addCallback(String function, String label, String kind) {
        int i = function.indexOf("FUN_");
        if (i < 0) throw new IllegalStateException("Missing callback address: " + function);
        Address a = address(function.substring(i + 4));
        if (getFunctionAt(a) == null || currentProgram.getListing().getInstructionAt(a) == null) {
            throw new IllegalStateException("Missing callback function at " + a);
        }
        addresses.add(a);
        comments.add(PREFIX + ("dynamic_stub".equals(kind)
            ? "Static callback address embedded in an allocated stub for hook label " + label
            : "Callback passed to hook registration for label " + label) + "; installation and execution not established.");
    }
    @Override
    public void run() throws Exception {
        if (!EXPECTED_MD5.equalsIgnoreCase(currentProgram.getExecutableMD5())) {
            throw new IllegalStateException("Program does not match the analyzed sample");
        }
        if (getScriptArgs().length != 1) throw new IllegalArgumentException("Expected directory containing evidence TSV files");
        Path dir = Path.of(getScriptArgs()[0]);
        List<String> resolver = Files.readAllLines(dir.resolve("startup_resolver_candidates.tsv"), StandardCharsets.UTF_8);
        List<String> hooks = Files.readAllLines(dir.resolve("observed_hook_registrations.tsv"), StandardCharsets.UTF_8);
        List<String> inline = Files.readAllLines(dir.resolve("inline_hook_resolution.tsv"), StandardCharsets.UTF_8);
        List<String> api = Files.readAllLines(dir.resolve("script_api_inventory.tsv"), StandardCharsets.UTF_8);
        List<String> events = Files.readAllLines(dir.resolve("event_listener_registrations.tsv"), StandardCharsets.UTF_8);
        if (resolver.size() != 121 || hooks.size() != 63 || inline.size() != 27 || api.size() != 26 || events.size() != 35 || !resolver.get(0).startsWith("call_va\t") || !hooks.get(0).startsWith("label\t") || !inline.get(0).startsWith("hook_label\t") || !api.get(0).startsWith("api\t") || !events.get(0).startsWith("call_va\t")) {
            throw new IllegalStateException("Unexpected evidence table structure or row count");
        }
        for (int i = 1; i < resolver.size(); i++) {
            String[] r = resolver.get(i).split("\t", -1);
            if (r.length != 8) throw new IllegalStateException("Invalid resolver row " + i);
            addCall(r[0], r[1], "resolver call; module=" + r[2] + "; label=" + r[3] + "; pattern=" + r[4] + ". Static arguments only; execution and result not established.");
        }
        for (int i = 1; i < hooks.size(); i++) {
            String[] h = hooks.get(i).split("\t", -1);
            if (h.length != 6) throw new IllegalStateException("Invalid hook row " + i);
            addCall(h[4], "1801d0610", "hook registration attempt; label=" + h[0] + "; target expression=" + h[1] + "; replacement=" + h[2] + ". Execution and success not established.");
            addCallback(h[2], h[0], h[5]);
        }
        for (int i = 1; i < inline.size(); i++) {
            String[] r = inline.get(i).split("\t", -1);
            if (r.length != 21) throw new IllegalStateException("Invalid inline row " + i);
            addCall(r[5], "1801d1e00", "conditional inline lookup for hook=" + r[0] + "; module=" + r[6] + "; scanner label=" + r[7] + "; pattern=" + r[8] + ". Nonzero result path stores to " + r[1] + "; execution and success not established.");
        }
        for (int i = 1; i < api.size(); i++) {
            String[] r = api.get(i).split("\t", -1);
            if (r.length != 6) throw new IllegalStateException("Invalid API row " + i);
            addBinding(r[2], r[1], r[0], r[3]);
        }
        for (int i = 1; i < events.size(); i++) {
            String[] r = events.get(i).split("\t", -1);
            if (r.length != 8) throw new IllegalStateException("Invalid event row " + i);
            String detail;
            if ("literal_direct".equals(r[7])) {
                detail = "event=" + r[1] + "; callback=" + r[2];
            } else if ("indexed_runtime_table".equals(r[7])) {
                detail = "name and callback selected from indexed runtime tables";
            } else {
                throw new IllegalStateException("Unknown event argument source at row " + i);
            }
            addCall(r[0], "180273b60", "event listener registration attempt; " + detail +
                ". Execution and success not established.");
        }
        addCall("1803d08ad", "1801d1e00", "inline pattern lookup associated with impact_box_site; success and runtime target not established.");
        addCall("1803d08e3", "1801d20d0", "conditional impact_box_site path: RCX is match + 0xe; helper checks an E8 relative call.");
        addCall("1800963d0", "180095270", "worker argument remains in RCX; RDX holds a local address. The exported pseudocode's null first argument is incorrect.");
        addCall("1801ca3eb", "180233b60", "sound_start_message path passes a resolved player pawn to the shared sound-marker producer. Hook installation and callback execution not established.");
        addCall("18023407c", "180233b60", "player_footstep fallback passes a resolved player pawn to the shared sound-marker producer when the sound-hook creation flag is clear. Execution not established.");
        addJump("180386f22", "180386cc0", "hegrenade_detonate particle thunk; EDX type index 0. Execution not established.");
        addJump("180386f35", "180386cc0", "flashbang_detonate particle thunk; EDX type index 1. Execution not established.");
        addJump("180386f45", "180386cc0", "smokegrenade_detonate particle thunk; EDX type index 2. Execution not established.");
        addJump("180386f55", "180386cc0", "inferno_startburn particle thunk; EDX type index 3. Execution not established.");
        addJump("180386f65", "180386cc0", "decoy_started particle thunk; EDX type index 4. Execution not established.");
        addJump("1802564a0", "180256180", "HE result thunk; forwards only when tracked item ID equals 44. Execution not established.");
        addJump("1802564c0", "180256180", "flash result thunk; forwards only when tracked item ID equals 43. Execution not established.");
        addJump("1802564ea", "180256180", "fire result thunk; forwards only when tracked item ID equals 46 or 48. Execution not established.");
        addCall("1800d5dbc", "180273f90", "item_purchase reads userid; null and cached-local buyers are rejected before the team filter. Execution not established.");
        addCall("1800d5e61", "180273d10", "item_purchase reads weapon after the output and selected team gates pass. Execution not established.");
        addCall("1800d9ec8", "180273f90", "vote_started reads initiator when vote reveal or generic vote logging is enabled. Execution not established.");
        addCall("180270347", "180273d10", "player_chat reads teamonly as a string; the adjacent call also reads it as a float. Execution not established.");
        addCall("180270357", "180273cc0", "player_chat reads teamonly as a float; zero falls back to exact string comparisons. Execution not established.");
        addCall("180270693", "1802701a0", "conditional SayText2 bridge call; fifth argument is the text pointer at [RSP+0x20], omitted at this pseudocode call site. Delivery not established.");
        addCall("180270249", "180270080", "SayText2 bridge stores its optional fifth argument in field +0x58; helper caps the scanned length at 0xffe bytes. Delivery not established.");
        addCall("1801cac54", "18026f610", "conditional console-channel filter update; API resolution and runtime execution are not established.");
        addCall("18026f6a9", "180271030", "append channel ID and original flag bit 0x2 before applying the console filter.");
        addCall("18026f726", "18026f610", "log_flags callback wrapper refreshes the console filter before temporarily restoring saved channel bits.");
        addCall("1801d0b46", "18026f570", "conditional console-channel restoration during teardown; API availability and execution are not established.");
        int added = 0, preserved = 0;
        for (int i = 0; i < addresses.size(); i++) {
            monitor.checkCancelled();
            Address a = addresses.get(i);
            String existing = getEOLComment(a);
            if (existing == null || existing.isEmpty()) {
                setEOLComment(a, comments.get(i));
                added++;
            } else {
                preserved++;
            }
        }
        println("ANNOTATION COMPLETE: added=" + added + " preserved_existing=" + preserved + " total=" + addresses.size());
    }
}
