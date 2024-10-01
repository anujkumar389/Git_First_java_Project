package oops;

import java.net.SocketTimeoutException;

public class Mahendra extends Vehical {
    protected void Engine_start()
    {
        System.out.println("Huuummmm");
    }
    protected void Model_engine(){
        System.out.println(1880);
    }

    public static void main(String[] args) {
        Mahendra obj=new Mahendra();
        obj.Engine_start();
        obj.Model_engine();
        obj.setter(5);
        System.out.println(obj.geeter());
        obj.setNo_of_door(2);
        System.out.println(obj.getNo_of_door());
    }
}
