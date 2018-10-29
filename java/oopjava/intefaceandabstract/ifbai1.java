/**
 * ifbai1
 */
public interface A {
    int x = 100;
    
}

public interface B {

    int x  = 200;
}
public class ifbai1 implements A,B {

    public static void main(String[] args) {
        System.out.println(A.x);
    }
}