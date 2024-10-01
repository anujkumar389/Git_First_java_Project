package oops;

public class Car extends Vehical{
    void drive(){
        System.out.println("Repairing a car ");
    }
    public static void main(String[] args) {
        Car obj =new Car();
        obj.drive();
    }
}
