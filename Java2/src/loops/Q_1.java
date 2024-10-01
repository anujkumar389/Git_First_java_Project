package loops;
import java.util.Scanner;
public class Q_1 {
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        char c = 'A';
        for(int i=1;i<=3;i++){
            for(int j=1;j<=i;j++){
                System.out.print(c++);
            }
            System.out.println();
        }

    }
}
