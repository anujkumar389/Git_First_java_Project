package method;
import java.util.Scanner;
public class Method6 {
    int a,b;
    void swap(){

        int temp;
        temp=a;
        a=b;
        b=temp;



    }
    public static void main(String args[]){
        Method6 obj=new Method6();
        Scanner sc=new Scanner(System.in);
        obj.a =sc.nextInt();
        obj.b=sc.nextInt();
        obj.swap();
        System.out.println(obj.a+" "+obj.b);
    }
}
