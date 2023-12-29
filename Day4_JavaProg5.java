class Employee {
    private String name;
    private int employeeID;
    private static final double BASIC_SALARY = 50000;
    public Employee(String name, int employeeID) {
        this.name = name;
        this.employeeID = employeeID;
    }
    public double calculateSalary() {
        return BASIC_SALARY;
    }
    public String toString() {
        return "Employee ID: " + employeeID + ", Name: " + name + ", Basic Salary: $" + BASIC_SALARY;
    }
}
class Manager extends Employee {
    private double bonusPercentage;
    public Manager(String name, int employeeID, double bonusPercentage) {
        super(name, employeeID);
        this.bonusPercentage = bonusPercentage;
    }

    @Override
    public double calculateSalary() {
        return super.calculateSalary() + (super.calculateSalary() * bonusPercentage / 100);
    }

    @Override
    public String toString() {
        return super.toString() + ", Bonus Percentage: " + bonusPercentage + "%";
    }
}

class Developer extends Employee {
    private String programmingLanguage;
    public Developer(String name, int employeeID, String programmingLanguage) {
        super(name, employeeID);
        this.programmingLanguage = programmingLanguage;
    }

    @Override
    public double calculateSalary() {
        return super.calculateSalary() + 10000; 
    }

    @Override
    public String toString() {
        return super.toString() + ", Programming Language: " + programmingLanguage;
    }
}

public class Main {
    public static void main(String[] args) {
        Manager manager = new Manager("John Doe", 101, 15);
        Developer developer = new Developer("David", 102, "Java");
        System.out.println("Manager Details:");
        System.out.println(manager);
        System.out.println("Calculated Salary: $" + manager.calculateSalary());
        System.out.println();

        System.out.println("Developer Details:");
        System.out.println(developer);
        System.out.println("Calculated Salary: $" + developer.calculateSalary());
    }
}
