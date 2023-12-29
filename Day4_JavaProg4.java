public class Calculator {
    public int multiply(int a, int b) {
        return a * b;
    }
    public double multiply(double x, double y, double z) {
        return x * y * z;
    }
    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        int result1 = calculator.multiply(5, 3);
        System.out.println("Multiplication result (integers): " + result1);
        double result2 = calculator.multiply(2.5, 3.0, 1.5);
        System.out.println("Multiplication result (doubles): " + result2);
    }
}