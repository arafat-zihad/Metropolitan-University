class Dog{
    String name;
    int license_it;

    public void eat(){
        System.out.println(name + " eats!");
    }
}

public class Main{
    public static void main(String[] args) {
        Dog dog1 = new Dog();

        dog1.eat();

    }
}