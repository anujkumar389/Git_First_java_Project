package oops;

public abstract class Shape2 {
    String colour;
    abstract double area();
    abstract String tostring();
    public Shape2(String colour){
        System.out.println("Shape constructor is called");
        this.colour=colour;
    }
    public String getColour(){
        return colour;
    }

}
