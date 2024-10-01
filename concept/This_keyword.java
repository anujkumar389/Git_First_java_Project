package concept;

public class This_keyword {
    int a;
    void set(int a){
        this.a=a;
    }
    void show(){
        System.out.println(a);
    }

    public static void main(String[] args) {
        This_keyword obj=new This_keyword();
        obj.set(5);
        obj.show();
        System.out.println("Run ho gaya ");

    }
}
