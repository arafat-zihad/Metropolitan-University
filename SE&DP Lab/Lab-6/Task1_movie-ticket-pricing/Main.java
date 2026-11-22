public class Main {
    public static void main(String[] args) {
        double basePrice = 500.0;

        TicketBooking booking = new TicketBooking(new RegularPricing());
        System.out.println("Regular Price: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new StudentPricing());
        System.out.println("Student Price: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new SeniorPricing());
        System.out.println("Senior Price: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new GroupPricing(12));
        System.out.println("Group Price (12 people): " + booking.getFinalPrice(basePrice));
    }
}
