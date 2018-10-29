/**
 * overloadingmethod
 */

/**
 * Adder
 */
class Adder {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
}

public class overloadingmethod {

    public static void main(String[] args) {
        Adder a1 = new Adder();
        System.out.println(a1.add(1, 2));
        System.out.println(a1.add(1, 2, 3));
    }
}