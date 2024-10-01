package oops;

public class Vehical {
    private int no_of_weel;
    private int no_of_door;
    public void setter(int weel) {
        this.no_of_weel=weel;

    }
    public int geeter(){
        return no_of_weel;
    }
    public void setNo_of_door(int door){
        this.no_of_door=door;

    }
    public int getNo_of_door(){
        return no_of_door;
    }
    protected void Engine_start(){
        System.out.println("Engine Start");
    }
    protected void Model_engine(){
        System.out.println("1802");
    }
    public static void main(String[] args) {

    }
}
