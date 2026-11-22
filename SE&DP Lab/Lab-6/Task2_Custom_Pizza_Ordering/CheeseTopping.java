public class CheeseTopping extends ToppingDecorator {
    public CheeseTopping(Pizza wrappedPizza) {
        super(wrappedPizza);
    }

    @Override
    public String getDescription() {
        return wrappedPizza.getDescription() + " + Extra Cheese";
    }

    @Override
    public double getCost() {
        return wrappedPizza.getCost() + 40.0;
    }
}
