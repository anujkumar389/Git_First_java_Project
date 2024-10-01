package basic;

public class Method {
    int x=100;
    int y=19;
    static int one =20;
    static int two =30;
    void sum(int a,int b){
        System.out.println(a+b+" Implementation of instance method ");
    }

    public static void main(){
        Method obj =new Method();
        obj.sum(5,10);
        System.out.println("Intence Variable Implementation : "+obj.x*obj.y);
        System.out.println(Method.one*Method.two+" Implimentation of Static variable");


    }
}
