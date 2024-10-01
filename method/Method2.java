package method;
import java.util.Scanner;

public class Method2 {
    void m1(float a,float b,float c){



        if(a<b&&a<c){
            System.out.println(a+"is smallest");
        }else if(b<a&&b<c){
            System.out.println(b+"is smallest");
        }else if(c<a&&c<b){
            System.out.println(c+"is smallest");
        }else{
            System.out.println("Invalid input");
        }

    }
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        float a=sc.nextFloat();
        float b=sc.nextFloat();
        float c=sc.nextFloat();
        Method2 ref=new Method2();
      //  ref.m1( );

    }
}
