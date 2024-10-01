package Array_2D;

import java.sql.SQLOutput;

public class KuchV {
    KuchV(String name,int marks){
        System.out.println(name);
        System.out.println(marks);
    }

    public static void main(String[] args) {
        KuchV[]arr=new KuchV[5];
        for(int i=0;i<5;i++){
            arr[i]=new KuchV("Anuj", 87);
        }


    }
}
