package Array_2D;

import java.util.Scanner;

public class Q_1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);


        int row=sc.nextInt();
        int colume=sc.nextInt();

        int [][]arr=new int [row][colume];
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                arr[i][j]=sc.nextInt();
            }

        }
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }


    }
}
