/**
 * multilevelinheritance
 */
class Animal {

    void inhe1() {
        System.out.println("this is animal!");
    }

    @Override
    public String toString() {
        return "tostring";
    }
}

/**
 * Innermultilevelinheritance
 */
class Dog extends Animal {

    void inhe2() {
        System.out.println("this is dog class!");
    }
}

class Husky extends Dog {
    void inhe3() {
        System.out.println("this is husky");
    }
}

public class multilevelinheritance {

    public static void main(String[] args) {
        Husky h1 = new Husky();
        h1.inhe1();
        h1.inhe2();
        h1.inhe3();
    }
}