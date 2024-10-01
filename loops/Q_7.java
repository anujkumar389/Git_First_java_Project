package loops;
import java.util.Scanner;
public class Q_7 {
    public static void main(String[] args) {
        int a=10;
        int b=11;
        if((a++>b)|(a++>b)){
            System.out.println(a);
        }else{
            System.out.println(a);
        }
        System.out.println(a);
        if((b++>a)&&(b++>a)){
            System.out.println(b);
        }
    }
}
