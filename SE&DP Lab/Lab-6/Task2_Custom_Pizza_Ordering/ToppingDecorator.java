public abstract class ToppingDecorator implements Pizza {
    protected Pizza wrappedPizza;

    public ToppingDecorator(Pizza wrappedPizza) {
        this.wrappedPizza = wrappedPizza;
    }
}
