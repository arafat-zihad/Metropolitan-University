public class StuffedCrustDecorator extends ToppingDecorator {
    public StuffedCrustDecorator(Pizza wrappedPizza) {
        super(wrappedPizza);
    }

    @Override
    public String getDescription() {
        return wrappedPizza.getDescription() + " + Stuffed Crust";
    }

    @Override
    public double getCost() {
        return wrappedPizza.getCost() * 1.15;
    }
}
