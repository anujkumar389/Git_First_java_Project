import java.util.Scanner;
public class Q4ab {
    public static void main(String[]args){
        System.out.println("Enter your 1st no :");
        Scanner sc=new Scanner(System.in);
        int a= sc.nextInt();
        System.out.println("Enter your 2nd no :");
        int b= sc.nextInt();
        int r=a>b?a+b:a-b;
        System.out.println(r);

    }
}
