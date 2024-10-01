package Array;

import java.util.Scanner;

public class Index {
    int index(int []arr,int find){
        int i=0;
        for(;i<arr.length;i++){
            if(arr[i]==find){
                break;
            }
        }
        return i;

    }
    public static void main(String[] args) {
        int size;
        Scanner sc=new Scanner(System.in);
        size=sc.nextInt();
        int []arr=new int[size];
        System.out.println("Enter element :");
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter your Finding element :");
        int find=sc.nextInt();
        Index index=new Index();

        System.out.println("your element index is : "+index.index(arr,find));

    }
}
