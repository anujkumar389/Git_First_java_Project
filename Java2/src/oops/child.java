package oops;

public class child extends Animal{
    int a=20;

    public static void main(String[] args) {
        child a=new child();
        System.out.println(a.a);
        Animal p=a;
        System.out.println(p.a);
        System.out.println(a);
        System.out.println(p);
    }
}
