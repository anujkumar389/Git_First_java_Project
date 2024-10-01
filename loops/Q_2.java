package loops;
import java.util.Scanner;
public class Q_2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        char c='A';
        int s=a-1;
        int d=1;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=s;j++){
                System.out.print(" ");
            }
            for (int k=1;k<=d;k++){
                if(k==1||k==d) {
                    System.out.print(c);
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
            c++;
            s--;
            d=d+2;
        }
    }

}
