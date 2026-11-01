import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.io.BufferedWriter;

public class ExportEmbedded extends GhidraScript {
    public void run() throws Exception {
        if (!"0128839ebd223e4fda6b75e0ff28ce23".equalsIgnoreCase(currentProgram.getExecutableMD5()))
            throw new IllegalStateException("Unexpected embedded image MD5");
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Unable to open program");
        int total = 0, failed = 0;
        try (BufferedWriter out = Files.newBufferedWriter(Path.of(getScriptArgs()[0]), StandardCharsets.UTF_8, StandardOpenOption.CREATE_NEW)) {
            out.write("/* Ghidra pseudocode; not original or buildable source. Input SHA-256: 5166d43e2ec15d1dad82823bbffc4508064ed0dac8720498ae165d3d0314ce6a */\n");
            FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
            while (it.hasNext()) {
                monitor.checkCancelled();
                Function fn = it.next();
                if (fn.isExternal()) continue;
                total++;
                out.write("\n/* ===== " + fn.getEntryPoint() + " " + fn.getName() + " ===== */\n\n");
                DecompileResults result = decompiler.decompileFunction(fn, 15, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    out.write(result.getDecompiledFunction().getC());
                    out.write("\n");
                } else {
                    failed++;
                    String error = result.getErrorMessage();
                    out.write("/* DECOMPILATION FAILED: " + (error == null ? "unknown" : error.replace("*/", "* /")) + " */\n");
                }
            }
        } finally { decompiler.dispose(); }
        println("EMBEDDED EXPORT: total=" + total + " failed=" + failed);
    }
}
