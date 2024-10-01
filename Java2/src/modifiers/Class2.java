package modifiers;

public class Class2   {
    int a=10;//instance variable
    static int ab=12;//Static variable
      static void m1(){
        int c=15;
        System.out.println(c);
    }
    public static void main(String[]arg){
        Class2.m1();
       System.out.println(Class1.a);

    }

}
