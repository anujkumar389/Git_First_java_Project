package Array_2D;

import java.util.Scanner;

public class Q_3 {
    public static void main(String[] args) {

        Scanner sc =new Scanner(System.in);
        System.out.println("Enter your row size :");
        int row=sc.nextInt();
//        int colum=sc.nextInt();
        int arr[][]=new int[row][];
        for(int i=0;i<row;i++){
            System.out.println("Enter your colum size for  row index : "+i);
             arr[i]=new int[sc.nextInt()];
        }
        System.out.println("Enter your array Element :");
        for(int i=0;i<row;i++){
            for(int j=0;j<arr[i].length;j++){
                arr[i][j]= sc.nextInt();
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }

    }
}
