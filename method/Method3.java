package method;
import java.util.Scanner;
public class Method3 {
    void m2(){
        float a,b,c,d,e;
        Scanner sc=new Scanner(System.in);
        a=sc.nextFloat();
        b=sc.nextFloat();
        c=sc.nextFloat();
        d=sc.nextFloat();
        e=sc.nextFloat();
        float mean=(a+b+c+d+e)/5f;
        System.out.println(mean+ "is your Average");
    }
    public static void main(String[]args){
        System.out.println("Enter five no :");
        Method3 ref=new Method3();
        ref.m2();
    }
}
