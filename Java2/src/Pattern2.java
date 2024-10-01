public class Pattern2 {
    public static void main(String[]args){
        int n=4;
        int a=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=a;j++){
                System.out.print(" ");
            }
            for(int k=n;k>0;k--){
                System.out.print("*");
            }
            System.out.println();
            a++;
            n--;

        }
    }
}
