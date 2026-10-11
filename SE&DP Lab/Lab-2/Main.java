public class Main {
    public static void main(String[] args) {

        Employee employee = new Employee("Zihad");

        Manager manager = new Manager("Radhi", 10);

        Intern intern = new Intern("Araf", 4);

        System.out.println("Employee");
        employee.describe();

        System.out.println();

        System.out.println("Manager");
        manager.describe();

        System.out.println();

        System.out.println("Intern");
        intern.describe();

        System.out.println();

        System.out.println("Blank Name Test");
        Employee invalidEmployee = new Employee("   ");
        invalidEmployee.describe();
    }
}