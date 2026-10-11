public class Main {
    public static void main(String[] args) {

        Vehicle[] vehicles = {
            new Car("Z01", 2000),
            new Bike("A01", 500),
            new LuxuryCar("T01", 5000, 1000)
        };

        int[] rentalDays = {4, 6, -5};

        for (int i = 0; i < vehicles.length; i++) {
            double cost = vehicles[i].calculateRentalCost(rentalDays[i]);

            vehicles[i].printRentalDetails(rentalDays[i], cost);
        }
    }
}

