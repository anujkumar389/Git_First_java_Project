package loops;
import java.util.Scanner;
public class QQ_4 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter num1 :");
        int a=sc.nextInt();
        System.out.println("Enter num2");
        int b= sc.nextInt();
        int g=0;
         for(int i=1;i<=a||i<=b;i++){
             if(a%i==0&&b%i==0){
                 g=i;
             }
         }
        System.out.println(g);
    }
}
