import java.util.InputMismatchException;
import java.util.Scanner;

public class Waste {
    public static void main() {
        Scanner sc = new Scanner(System.in);
        float finalValue = 0;
        try{
            System.out.println("Enter numerator");
            int numb = sc.nextInt();
            if(numb == 0){
                System.out.println("Thank you for give your precious time");
                throw new NullPointerException();
            }
            System.out.println("Enter denomiator");
            float numb2 = sc.nextFloat();
            finalValue = numb / numb2;
            if(numb2 <= 0){
                throw new ArithmeticException();
            }

        }catch (InputMismatchException inputMismatchException){
            System.out.println("You have entered a character not a integer");
            main();
        }catch (ArithmeticException arithmeticException){
            System.out.println("Denominator is not less than zero and either not zero");
            main();
        }catch (NullPointerException nullPointerException){
            return;
        }catch (Exception exception){
            System.out.println("Something Went Wrong");
            main();
        }
        if(finalValue == 0){
            main();
        }else {
            System.out.println(finalValue);
            main();
        }


    }
}
