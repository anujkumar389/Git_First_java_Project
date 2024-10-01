package oops;

public class Grand extends Son{
    void property(){
        super.property();
        System.out.println("Grand Property ");
    }
    public static void main(String[] args) {
        Grand obj =new Grand();
        obj.property();

    }
}
