public abstract class Vehicle {
    protected String vehicleId;

    public Vehicle(String vehicleId) {
        this.vehicleId = vehicleId;
    }

    public abstract double calculateRentalCost(int days);

    public void printRentalDetails(int days, double cost) {
        System.out.println("Vehicle ID: " + vehicleId);
        System.out.println("Rental Duration: " + days + " days");
        System.out.println("Total Rental Cost: " + cost);
        System.out.println("\n");
    }
}