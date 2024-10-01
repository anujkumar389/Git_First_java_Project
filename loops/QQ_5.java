package loops;
import java.util.Scanner;
public class QQ_5 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter no :");
        int n=sc.nextInt();
        int a=0;
        int b=1;
        int s=1;
        for(;a<=n;){
            System.out.println(a);
            a=b;
            b=s;
            s=a+b;

        }
    }
}
