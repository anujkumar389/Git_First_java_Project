import java.util.Scanner;
public class Q3discount {
    public static void main (String[]args){
        System.out.println("Welcome To Our Store....!!");
        int n;
        System.out.println("Please Enter your number of item purchase :");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        System.out.println("Please Enter your Amount per item :");
        int a=sc.nextInt();
        if(n>100){
            int b=a*n*10/100;
            System.out.println("Amount per Item - "+a);
            System.out.println("your discounted Amount is "+b);
        }else{
            System.out.println("Your Amount per item - "+a);
            System.out.printf("total amount %d",a*n);

        }

    }
}
