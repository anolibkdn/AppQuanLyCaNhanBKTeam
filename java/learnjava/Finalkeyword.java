/**
 * final keyword in java is used to restric the user, the final keyword can be used in many context
 * - valuable
 * - method
 * - class
 */

/**
 * Finalkeyword
 */
public class Finalkeyword {

    /**
     * if you make any variable as final, you can not change
     * the value of final variable
     * is like const in C++ langauge
     */
    final int speedlitmit = 90;

    /**
     * java final method
     * if you make method as final, you can not override it
     * @param args
     */
    final public void run(){
        System.out.println("final method run");
    }


    /**
     * java final class
     * if you make any class as final, you can not extend it
     * @param args
     */

    /**
     * FinalClass
     */
    final class FinalClass {
    
        FinalClass(){
            System.out.println("this is final class");
        }
    }
    public static void main(String[] args) {
        
    }
}