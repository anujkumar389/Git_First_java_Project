package loops;
import java.util.Scanner;
public class Q_3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        for(int i=1;i<=a;i++){
            char c='A';
            for(int j=1;j<=i;j++){
                System.out.print(c++);
            }
            System.out.println();
        }
    }
}
