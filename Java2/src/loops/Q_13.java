package loops;
import java.util.Scanner;

public class Q_13 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no :");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i%2==1){
                    if(j%2==1){
                        System.out.print("*");
                    }else{
                        System.out.print("#");
                    }
                }else{
                    if(j%2==0){
                        System.out.print("*");
                    }else{
                        System.out.print("#");
                    }
                }
            }
            System.out.println();
        }

    }
}
