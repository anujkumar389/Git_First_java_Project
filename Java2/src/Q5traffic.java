import java.sql.SQLOutput;
import java.util.Scanner;
public class Q5traffic {
    public static void main(String[]args){

        System.out.println("Enter no :");
        Scanner sc=new Scanner(System.in);
        int a= sc.nextInt();
        //82 for red ,121 for y, Y-89,71 for G
        char b=(char)a;
        //System.out.println(b);
        switch(b){
            case 'R':
            case 'r':
                System.out.println("Red is to stop");
                break;
            case 'Y':
            case 'y':
                System.out.println("Yellow is to Ready");
                break;
            case 'G':
            case 'g':
                System.out.println("Green is to Go");
                break;
            default:
                System.out.println("Invalid input");

        }
    }
}
