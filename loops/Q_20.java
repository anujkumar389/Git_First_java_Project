package loops;

import java.util.Scanner;

public class Q_20 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1,s=n-1;i<=n;i++,s--){
            for(int k=1;k<=s;k++){
                System.out.print("  ");
            }
            for(int j=1;j<=i*2-1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
