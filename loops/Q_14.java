package loops;

import java.util.Scanner;

public class Q_14 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n =sc.nextInt();
        for(int i=1,l=n-1;i<=n;i++,l--){
            for(int j=1;j<=l;j++){
                System.out.print(" ");
            }
            for(int k =1;k<=i;k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

