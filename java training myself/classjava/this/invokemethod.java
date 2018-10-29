/**
 * invokemethod
 * u may invoke the method of the current class by using this keyword
 * if you don't invoke the this keyword, the compiler will automatically add this
 * keyword while invoking the method.
 */
public class invokemethod {

    void m(){
        System.out.println("hello m!");
    }

    void n(){
        System.out.println("hello n!");
        this.m();
    }

    public static void main(String[] args) {
        invokemethod i1 = new invokemethod();//khoi tao doi tuong
        i1.n();
    }
}