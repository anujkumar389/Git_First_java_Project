package oops;

public class Square extends Shape{
     void get_area(){
         System.out.println("Area of Square is a*a ");
     }

    public static void main(String[] args) {
         Shape obj =new Shape();
         obj.get_area();

    }
}
