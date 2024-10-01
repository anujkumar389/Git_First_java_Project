package method;
import java.util.Scanner;
public class Method4 {
    void m3(){

        System.out.println("Enter number");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;

        for(;n>0;n=n/10){
            sum=n%10+sum;
        }
        System.out.println(sum);
    }

    public static void main(){
        Method4 ref=new Method4();
        ref.m3();
        // System.out.println("Anuj kumar");

    }
}
