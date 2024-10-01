package loops;

import java.util.Scanner;

public class Q_17 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=n,s=0;i>0;i--,s++){
            for(int k=1;k<=s;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }

    }
}
