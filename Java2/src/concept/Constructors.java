//no arg constructors:

package concept;
public class Constructors {
    String type;
    int speed;

    //Creating no arg constructor
    Constructors(){
        this("car",0);
        System.out.println("This is no arg constructor");
    }
    Constructors(String type,int speed){
        this.type=type;
        this.speed=speed;
        System.out.println("Paramiterised constructor is called");
    }
    void display(){
        System.out.println("type :"+type+ " Speed :"+speed);
    }
    //the main method
    public static void main(String[] args) {
        //Creating an Object that invoke the Constructor
        Constructors obj=new Constructors();
        obj.display();

    }
}
