package loops;

import java.util.Scanner;
public class Q_15 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=n,l=0;i>0;i--,l++){
            for(int k=0;k<l;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

