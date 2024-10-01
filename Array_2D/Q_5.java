package Array_2D;

import java.util.Scanner;

public class Q_5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int row= sc.nextInt();
        int [][]arr=new int [row][];
        for(int i=0;i<row;i++){
            int colum= sc.nextInt();
            arr[i]=new int [colum];

        }
    }
}
