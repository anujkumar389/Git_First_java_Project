package loops;
import java.util.Scanner;
public class QQ_6 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        int r=0;
        for(int i=a;i>0;i=i/10){
            int q=i%10;
            r=r*10+q;
        }
        if(r==a){
            System.out.println("Palindrome");
        }else{
            System.out.println("not");
        }
    }
}
