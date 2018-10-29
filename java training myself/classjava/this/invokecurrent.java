/**
 * invokecurrent
 */
public class invokecurrent {
    //constructor automaticly call when compiler run
    invokecurrent(){
        // this(7);
        System.out.println("hello a");
    }

    invokecurrent(int x){
        this();
        System.out.println(x);
    }
    public static void main(String[] args) {
        invokecurrent a = new invokecurrent();
    }
}