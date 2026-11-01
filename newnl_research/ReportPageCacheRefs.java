// Report Ghidra references into the candidate cache range without modifying the project.
// Ghidra-discovered references can miss computed, indirect, or overlapping bulk writes.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class ReportPageCacheRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        if (!"c8c8f09398634be039ee3011e08e5971".equalsIgnoreCase(currentProgram.getExecutableMD5())) {
            throw new IllegalStateException("Unexpected input program MD5");
        }
        Address start = toAddr("180cd1e78");
        AddressIterator destinations = currentProgram.getReferenceManager()
            .getReferenceDestinationIterator(new AddressSet(start, start.add(0xffff)), true);
        int count = 0;
        while (destinations.hasNext()) {
            monitor.checkCancelled();
            Address to = destinations.next();
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(to);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function owner = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                println("PAGE_REF\t" + to + "\t" + ref.getFromAddress() + "\t"
                    + (owner == null ? "" : owner.getEntryPoint()) + "\t" + ref.getReferenceType());
                count++;
            }
        }
        println("PAGE_REF_COUNT\t" + count);
    }
}
