import java.util.Scanner;

public class Cross {
    public static void main(String[] args) {
        System.out.println("Enter the number");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = a;
        int d = a;
        for(int i = 1;a>=i;i++){
            for(int k = 1;i-1>=k;k++){
                System.out.print(" ");
            }
            for(int j = 1; b>=j;j++){
                System.out.print("* ");
            }
            b--;
            System.out.print("\n");
        }
        for(int l = 1;a-1>=l;l++){
            for(int  m = 1;d-2>=m;m++){
                System.out.print(" ");
            }
            for(int n = 0;l>=n;n++){
                System.out.print("* ");
            }
            d--;
            System.out.print("\n");
        }

    }
}
