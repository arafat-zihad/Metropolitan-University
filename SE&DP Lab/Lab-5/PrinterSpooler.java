
import java.util.ArrayList;
import java.util.List;

public class PrinterSpooler {

    private static volatile PrinterSpooler instance;

    private List<String> jobQueue;

    private PrinterSpooler() {
        jobQueue = new ArrayList<>();
        System.out.println("Print spooler initialized.");
    }

    public static PrinterSpooler getInstance() {

        if (instance == null) {
            synchronized (PrinterSpooler.class) {

                if (instance == null) {
                    instance = new PrinterSpooler();
                }
            }
        }

        return instance;
    }

    public synchronized void addJob(String documentName) {

        jobQueue.add(documentName);

        System.out.println(
            "Queued: " + documentName +
            " (queue size: " + jobQueue.size() + ")"
        );
    }

    public synchronized void printAll() {

        System.out.println("\nPrinting all documents:");

        for (String document : jobQueue) {
            System.out.println(document);
        }

        jobQueue.clear();
    }
}
