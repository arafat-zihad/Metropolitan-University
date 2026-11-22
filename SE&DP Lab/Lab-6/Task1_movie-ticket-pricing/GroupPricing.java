public class GroupPricing implements PricingStrategy {
    private final int groupSize;

    public GroupPricing(int groupSize) {
        this.groupSize = groupSize;
    }

    @Override
    public double calculatePrice(double basePrice) {
        double discount = groupSize * 0.05;
        if (discount > 0.40) {
            discount = 0.40;
        }
        return basePrice * (1 - discount);
    }
}
