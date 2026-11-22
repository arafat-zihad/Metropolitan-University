
public class Main {

    public static void main(String[] args) {

        Thread t1 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("zihad_document1.pdf");
        });

        Thread t2 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("zihad_document2.pdf");
        });

        Thread t3 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("zihad_document3.pdf");
        });

        t1.start();
        t2.start();
        t3.start();

        try {
            t1.join();
            t2.join();
            t3.join();

        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }

        PrinterSpooler spooler = PrinterSpooler.getInstance();

        spooler.printAll();
    }
}
