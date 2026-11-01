import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ExportNewnlEvidence extends GhidraScript {
    private String cell(Object value) {
        return value == null ? "" : value.toString().replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n");
    }
    private String fn(Address address) {
        Function f = currentProgram.getFunctionManager().getFunctionContaining(address);
        return f == null ? "" : f.getEntryPoint().toString();
    }
    @Override
    public void run() throws Exception {
        Path dir = Path.of(getScriptArgs()[0]);
        int strings = 0, xrefs = 0, calls = 0;
        try (BufferedWriter sw = Files.newBufferedWriter(dir.resolve("ghidra_strings.tsv"), StandardCharsets.UTF_8);
             BufferedWriter xw = Files.newBufferedWriter(dir.resolve("ghidra_string_xrefs.tsv"), StandardCharsets.UTF_8);
             BufferedWriter cw = Files.newBufferedWriter(dir.resolve("ghidra_direct_calls.tsv"), StandardCharsets.UTF_8)) {
            sw.write("address\ttype\tlength_bytes\tvalue_escaped\n");
            xw.write("string_address\tfrom_address\tfrom_function\treference_type\n");
            cw.write("from_function\tcall_address\ttarget_address\ttarget_function\treference_type\n");
            DataIterator data = currentProgram.getListing().getDefinedData(true);
            while (data.hasNext()) {
                monitor.checkCancelled();
                Data d = data.next();
                if (!d.hasStringValue()) continue;
                Object value = d.getValue();
                if (!(value instanceof String)) continue;
                sw.write(d.getAddress() + "\t" + cell(d.getDataType().getName()) + "\t" + d.getLength() + "\t" + cell(value) + "\n");
                strings++;
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(d.getAddress());
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    xw.write(d.getAddress() + "\t" + ref.getFromAddress() + "\t" + fn(ref.getFromAddress()) + "\t" + cell(ref.getReferenceType()) + "\n");
                    xrefs++;
                }
            }
            InstructionIterator instructions = currentProgram.getListing().getInstructions(true);
            while (instructions.hasNext()) {
                monitor.checkCancelled();
                Instruction instruction = instructions.next();
                for (Reference ref : instruction.getReferencesFrom()) {
                    if (!ref.getReferenceType().isCall()) continue;
                    Address to = ref.getToAddress();
                    cw.write(fn(instruction.getAddress()) + "\t" + instruction.getAddress() + "\t" + to + "\t" + fn(to) + "\t" + cell(ref.getReferenceType()) + "\n");
                    calls++;
                }
            }
        }
        println("Evidence export: " + strings + " strings; " + xrefs + " string references; " + calls + " call references");
    }
}
