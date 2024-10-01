package loops;
import java.util.Scanner;
public class Q_5 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        char c='A';
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                System.out.print(c++);
            }
            c= (char) (c-2);
            System.out.println();
        }
    }
}
