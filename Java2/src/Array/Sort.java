package Array;

import java.util.Scanner;


public class Sort {
    void sort(int []arr){
        for(int i=0;i<arr.length;i++){
            if(i==arr.length-1){
                break;
            }
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        for (int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
        int size;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter size :");
        size=sc.nextInt();
        int []arr=new int[size];
        System.out.println("Enter your element :");
        for(int i=0;i<size;i++){
            arr[i]= sc.nextInt();
        }
        Sort sort=new Sort();
        sort.sort(arr);

    }
}
