import java.util.Scanner;
public class Q1typecasting {
    public static void main(String [] args){
//        int marks;
//        System.out.println("Enter your marks :");
//        Scanner sc=new Scanner(System.in);
//        marks=sc.nextInt();
//        if (marks>90&&marks<=100){
//            System.out.println("A+");
//    }
//
        int a;
        System.out.println("Enter your no a :");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        int b;
        System.out.println("Enter your no b : ");
        b= sc.nextInt();
        int s=a>b?a+b:a-b;
        System.out.println(s);

    }
}
