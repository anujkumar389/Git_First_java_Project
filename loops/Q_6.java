package loops;
import java.util.Scanner;
public class Q_6 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        char c='A';
        char e='a';
        int check=1;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                if(check==1){
                    System.out.print(e);
                    e++;c++;
                    check=0;
                }else{
                    System.out.print(c);
                    e++;c++;
                    check=1;
                }
            }
            System.out.println();
        }
    }
}
