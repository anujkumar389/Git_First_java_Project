import java.util.Scanner;

public class Digitcount {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int q=sc.nextInt();
        int i=0;
        int r=0;
        int s=0;
        for(;q>0;i++){
            s=q%10;
            r=r*10+s;
            q=q/10;

        }
        System.out.println(r);
    }
}
