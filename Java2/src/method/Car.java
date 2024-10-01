package method;
import modifiers.Vehicle;

 class Car extends Vehicle  {
    private String model_Name="Mustang";
    public static void main(String []args){
        Car myCar=new Car();
        myCar.honk();
        System.out.println(myCar.brand+" "+myCar.model_Name);
     }

}