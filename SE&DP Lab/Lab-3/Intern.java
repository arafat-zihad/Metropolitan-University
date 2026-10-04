public class Intern extends Employee {
    private int month;

    public Intern(String name, int month) {
        super(name);
        this.month = month;
    }

    public int getMonth() {
        return month;
    }

    @Override
    public int getDailyAccessHours() {
        if (month >= 1 && month <= 3) {
            return 4;
        } else if (month >= 4 && month <= 6) {
            return 6;
        }

        return 0;
    }


    

    @Override
    public void describe() {
        System.out.println("Employee ID: " + getEmployeeId());
        System.out.println("Name: " + getName());
        System.out.println("Month: " + month);
        System.out.println("Daily Access Hours: " + getDailyAccessHours());
    }
}