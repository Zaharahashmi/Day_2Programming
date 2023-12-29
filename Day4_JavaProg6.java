class Vehicle {
    protected double speed;
    public Vehicle(double speed) {
        this.speed = speed;
    }
    public double calculateSpeed() {
        return speed;
    }
}
class Car extends Vehicle {
    private int passengers;
    public Car(double speed, int passengers) {
        super(speed);
        this.passengers = passengers;
    }
    @Override
    public double calculateSpeed() {
        return super.calculateSpeed() * passengers;
    }
}
class Motorcycle extends Vehicle {
    private int wheels;
    public Motorcycle(double speed, int wheels) {
        super(speed);
        this.wheels = wheels;
    }
    @Override
    public double calculateSpeed() {
        return super.calculateSpeed() * wheels;
    }
}
public class Main {
    public static void main(String[] args) {
        Car car = new Car(60, 4);
        Motorcycle motorcycle = new Motorcycle(80, 2);
        System.out.println("Car Details:");
        System.out.println("Speed: " + car.calculateSpeed());
        System.out.println();

        System.out.println("Motorcycle Details:");
        System.out.println("Speed: " + motorcycle.calculateSpeed());
        System.out.println(); 
        
        if (car.calculateSpeed() > motorcycle.calculateSpeed()) {
            System.out.println("Car has the highest effective speed.");
        } else if (car.calculateSpeed() < motorcycle.calculateSpeed()) {
            System.out.println("Motorcycle has the highest effective speed.");
        } else {
            System.out.println("Both vehicles have the same effective speed.");
        }
    }
}