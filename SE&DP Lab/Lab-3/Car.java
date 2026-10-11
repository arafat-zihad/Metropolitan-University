public class Car extends Vehicle {
    protected double dailyRate;

    public Car(String vehicleId, double dailyRate) {
        super(vehicleId);
        this.dailyRate = dailyRate;
    }

    @Override
    public double calculateRentalCost(int days) {
        if (days <= 0) {
            return 0;
        }

        return dailyRate * days;
    }
}