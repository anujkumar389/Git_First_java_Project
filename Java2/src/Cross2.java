import java.util.Scanner;
public class Cross2 {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=0;
        int g=n*2-1;
        for(int i=1;i<=n*2-1;i++){
            for(int k=1;k<=s;k++){
                System.out.print(" ");
            }
            for(int j=1;j<=n*2-1;j++){
                if(i==j){
                    System.out.print("*");
                }else if(g==i){
                    System.out.print("*");
                }
            }

            if(i<n){
                ++s;
                --g;
            }else if(i>n){
                s--;
                g++;
            }
            System.out.println();

        }
    }
}

