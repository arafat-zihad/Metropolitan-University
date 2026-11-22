public class TicketBooking {
    private PricingStrategy strategy;

    public TicketBooking(PricingStrategy strategy) {
        this.strategy = strategy;
    }

    public void setStrategy(PricingStrategy strategy) {
        this.strategy = strategy;
    }

    public double getFinalPrice(double basePrice) {
        return strategy.calculatePrice(basePrice);
    }
}
