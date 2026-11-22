public class Main {
    public static void main(String[] args) {
        Pizza pizza1 = new StuffedCrustDecorator(
                new MushroomTopping(
                        new CheeseTopping(new PlainPizza())));
        Pizza pizza2 = new MushroomTopping(
                new CheeseTopping(
                        new StuffedCrustDecorator(new PlainPizza())));

        System.out.println("Pizza 1: " + pizza1.getDescription());
        System.out.printf("Cost: %.2f%n", pizza1.getCost());
        System.out.println();
        System.out.println("Pizza 2: " + pizza2.getDescription());
        System.out.printf("Cost: %.2f%n", pizza2.getCost());
        System.out.println();

    }
}
