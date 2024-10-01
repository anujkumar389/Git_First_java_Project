//reference variable  store refrence
//reference variable is a data type
package basic;
import java.util.Scanner;
public class Condition {
    static int a=10;
        int b=20;
    public static void main(String[]arg){
        Condition obj=new Condition();
        Condition obj2=new Condition();
        //Condition.a=8;

       // System.out.println(a);
        obj.b=10;
        obj2.b=11;
        System.out.println(obj.b);
        obj.a=10;
        obj2.a=11;
        System.out.println(obj.a);



    }

}

