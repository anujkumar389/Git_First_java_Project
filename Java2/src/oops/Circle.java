package oops;

public class Circle extends Shape2{
    double radius;
    public Circle(String colour ,double radius){
        super(colour);
        System.out.println("Circle constructor called");
        this.radius=radius;
    }
    double area(){

        return 3.14*radius*radius;
    }
    String tostring(){
        return "Circle colour is"+super.getColour()+"and area is :"+area();
    }
    public static void main(){
        Circle circle=new Circle("Black",2.2);
        System.out.println(circle.tostring());
    }
}
