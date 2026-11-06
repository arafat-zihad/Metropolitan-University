class Student{
    int id;
    String name;

    //Parametarised Constructor
    public Student(int id, String name) {
        this.id = id;
        this.name = name;
        System.out.println("Student Id: " + id + ", Name: " + name);
    }

    // Default Constructor
    public Student(){
        System.out.println("Default constructor.");
    }
}

public class Constructor{
    public static void main(String[] args) {
        Student obj = new Student(052, "Kattush");
    }
}