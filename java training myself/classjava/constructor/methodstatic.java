/**
 * methodstatic
 */
public class methodstatic {
    int id;
    static String name = "ITS";

    static void change(){
        name = "BBDIT";
    }

    methodstatic(int i){
        this.id = i;
    }

    public void display(){
        System.out.println(id+"  " + name);
    }
    //static la phuong thuc chung cho ca class
    public static void main(String[] args) {
        methodstatic.change();
        methodstatic st1 = new methodstatic(12);
        methodstatic st2 = new methodstatic(32);

        st1.display();
        st2.display();
    }
}