public class Student{
    String name;
    int roll;
    
    public void printData(){
        System.out.println(name);
        System.out.println(roll);
    }

    public static void main(String[] args) {
        Student std1 = new Student();
        std1.name = "Kattush";
        std1.roll = 39;
        std1.printData();

        System.out.println("\n");

        Student std2 = new Student();
        std2.name = "Mokhai";
        std2.roll = 22;
        std2.printData();
    }
}