import java.util.Scanner;
public class First {
    public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.printf("Enter byte");
        byte a=sc.nextByte();
        System.out.printf("Enter short");
        short b=sc.nextShort();
        System.out.printf("Enter int");
        int c=sc.nextInt();
        System.out.printf("Enter long");
        long d=sc.nextLong();
        System.out.printf("Enter Float");
        float e=sc.nextFloat();
        System.out.printf("Enter double");
        double f=sc.nextDouble();
        System.out.printf("Enter char");
        char g=sc.next().charAt(0);
        sc.nextLine();
        System.out.printf("Enter String");
        String h=sc.nextLine();
        System.out.printf("Enter Boolean");
        boolean i=sc.nextBoolean();
       
    }
}
