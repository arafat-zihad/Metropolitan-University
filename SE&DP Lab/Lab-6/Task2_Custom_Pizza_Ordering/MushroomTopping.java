public class MushroomTopping extends ToppingDecorator {
    public MushroomTopping(Pizza wrappedPizza) {
        super(wrappedPizza);
    }

    @Override
    public String getDescription() {
        return wrappedPizza.getDescription() + " + Mushroom";
    }

    @Override
    public double getCost() {
        return wrappedPizza.getCost() + 30.0;
    }
}
