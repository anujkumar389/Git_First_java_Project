package method;

public class Method5 {
    String   name;
   Method5(String name){
       this.name=name;
   }
//    public void setName(String names){
//        name=names;
//    }
    public  String getName(){
        return name;
    }

    public static void main(String []args){
        Method5 obj=new Method5("abc");
        System.out.println(obj.getName());

    }
}
