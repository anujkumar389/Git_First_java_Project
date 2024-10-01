package Array_2D;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Q_4 {
    void sort_array(int[][] arr){

    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your row size :");
        int row =sc.nextInt();
        System.out.println("Enter your colume size :");
        int colum=sc.nextInt();
        int[][] arr =new int [row][colum];
        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                arr[i][j]= sc.nextInt();
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<colum-1;j++){
//                if(j==colum-1){
//                    break;
//                }
                if(i>0&&j==0){
                    if(arr[i][j]<arr[i-1][colum-1]){
                        int temp=arr[i-1][colum-1];
                        arr[i-1][colum-1]=arr[i][j];
                        arr[i][j]=temp;
                    }
                }
                if(arr[i][j]>arr[i][j+1]){
                    int temp=arr[i][j+1];
                    arr[i][j+1]=arr[i][j];
                    arr[i][j]=temp;
                }
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                   System.out.print(arr[i][j]);
            }
            System.out.println();
        }
    }
}
