package loops;
import java.util.Scanner;
public class QQ_2 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int a= sc.nextInt();
        int s=a;
        int count=0;
        int main=0;
        for(int i=a;i>0;i=i/10){
            count++;
        }
        for(int i=a;i>0;i=i/10){
            int e=i%10;
            int r=e;
            for(int c=1;c<count;c++){
                r=r*e;
            }
            main=main+r;
        }
        if(main==s){
            System.out.println("Armstrong");
        }else{
            System.out.println("not");
        }
    }

}
