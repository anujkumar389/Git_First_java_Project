package method;
import java.util.Scanner;
public class Method1 {
    int m1(int a){
        return a+3;
    }
    public static void main(){
        Method1 obj =new Method1();
        //obj.m1(5);
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println(obj.m1(a));
    }
}
