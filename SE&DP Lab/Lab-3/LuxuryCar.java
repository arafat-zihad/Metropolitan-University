public class LuxuryCar extends Car {
    private double insuranceFee;

    public LuxuryCar(String vehicleId, double dailyRate, double insuranceFee) {
        super(vehicleId, dailyRate);
        this.insuranceFee = insuranceFee;
    }

    @Override
    public double calculateRentalCost(int days) {
        if (days <= 0) {
            return 0;
        }

        return (dailyRate * days) + insuranceFee;
    }
}