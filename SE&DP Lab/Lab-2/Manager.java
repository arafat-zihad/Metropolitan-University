public class Manager extends Employee {
    private int teamSize;

    public Manager(String name, int teamSize) {
        super(name);
        this.teamSize = teamSize;
    }

    public int getTeamSize() {
        return teamSize;
    }

    @Override
    public int getDailyAccessHours() {
        return 8 + (teamSize / 5);
    }

    @Override
    public void describe() {
        System.out.println("Employee ID: " + getEmployeeId());
        System.out.println("Name: " + getName());
        System.out.println("Team Size: " + teamSize);
        System.out.println("Daily Access Hours: " + getDailyAccessHours());
    }
}