package Array_2D;

import java.util.Scanner;

public class Q_6 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int row=sc.nextInt();
        int colum=sc.nextInt();
        int z= sc.nextInt();
        int [][][]arr=new int [row][colum][z];
        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                for(int k=0;k<z;k++){
                    System.out.println(arr[i][k].length);

                }
                System.out.println(arr[j].length);
            }
            System.out.println(arr[i].length);
        }

    }
}
