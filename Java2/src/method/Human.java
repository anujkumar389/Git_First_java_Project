package method;

public class Human {
    String name="Aditi";
    int age=24;
    String gender="Female";
    double height=5.6;
    double weight=60;
    void walk(){

    }
    void run(){

    }
    void eat(){

    }
    void sleep(){
        System.out.println("you have to sleep for good health");
    }
    Human( String name, int age, String gender){
        System.out.println(name+" "+age+" "+gender);

    }
    Human(String name,int age,String gender,double height,double weight){
        System.out.println(name+" "+age+" "+gender+" "+height+" "+weight);
    }


    public static void main(String[] args) {
        Human obj= new Human("Anuj",20,"Male");
        Human obj2 =new Human("Shivam",22,"Male",5.9,60);

    }
}
