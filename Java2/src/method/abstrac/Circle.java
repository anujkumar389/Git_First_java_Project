package method.abstrac;

public abstract class Circle extends Shape{
    void area(){
        System.out.println("circle");
    }

    @Override
    void noOfSide() {
        System.out.println("it has no side !");
    }
}
