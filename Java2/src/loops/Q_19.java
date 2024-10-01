package loops;

import java.util.Scanner;

public class Q_19 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1,s=n-1;i<=n;i++,s--){
            for(int k=1;k<=s;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1,s=1;i>0;i--,s++){
            for(int k=1;k<=s;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
