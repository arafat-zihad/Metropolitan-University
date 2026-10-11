public class Employee {
    private static int counter = 1;

    private int employeeId;
    private String name;
    private int dailyAccessHours = 8;

    public Employee(String name) {
        this.employeeId = counter++;

        if (name == null) {
            System.out.println("Error: Employee name cannot be blank.");
            this.name = "Unknown Employee";
        } else {
            this.name = name;
        }
    }

    public int getEmployeeId() {
        return employeeId;
    }

    public String getName() {
        return name;
    }

    public int getDailyAccessHours() {
        return dailyAccessHours;
    }

    public void describe() {
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Name: " + name);
        System.out.println("Daily Access Hours: " + getDailyAccessHours());
    }
}