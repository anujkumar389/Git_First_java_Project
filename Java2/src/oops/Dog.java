package oops;

public class Dog extends Animal {
    void animalSound(){
        System.out.println("Bark");
    }
    public static void main(String[] args) {
        Dog obj=new Dog();
        obj.animalSound();

    }
}
