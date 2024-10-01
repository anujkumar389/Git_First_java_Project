import java.util.Scanner;
public class Leapyear {
    public static void main(String []args) {
        System.out.println("Enter year :");
        Scanner sc=new Scanner(System.in);
        int year=sc.nextInt();
        if((year%4==0&&year%100 !=0)||year%400==0){
            System.out.printf("%d is leap year",year);
        }else{
            System.out.printf("%d is not leap year",year);
        }
        
    }
}
