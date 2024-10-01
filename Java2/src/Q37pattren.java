import java.util.Scanner;
public class Q37pattren {
    public static void main(String []args){
        System.out.println("Enter no :");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=n-1;
        int a=1;
        for(int i=1;i<=n;i++){
            for(int k=1;k<=s;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=a;j++){
                if (j%2==1){
                    System.out.print("* ");
                }else{
                    //System.out.print(" ");
                }
            }
            System.out.println();
            s--;
            a=a+2;
        }
    }
}
