package loops;
import java.util.Scanner;
public class QQ_1 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter your no :");
        int a=sc.nextInt();
        int r=a;
        int m=0;
        while(a>0){
            int i=a%10;
            int c=1;
            int f=1;
            while(c<=i){
                f=f*c;
                c++;
            }
            m=m+f;
            a=a/10;
        }
        if(r==m){
            System.out.println("Strong");
        }else{
            System.out.println("not");
        }
    }

}
