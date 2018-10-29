/*
    instance initializer block is used to initialize
    the instance data member, it runs earch time when obj
    of the class is created

    - why use instance initialize block?

    suppose i have to perform some operations while assigning value to
    instance data menber...
*/


/**
 * Initialzerblock
*/
/** 
    -super()
    - initialize block
    - constructor
*/

/**
 * InnerInitialzerblock
 */
class A {
    A(){
        System.out.println("this is class A");
    }
}


public class Initialzerblock extends A{

    private int speed;

    
    Initialzerblock(){
        super();
        System.out.println("this is main class");
        
    }

    {System.out.println("this is initializer block main class");}
    public static void main(String[] args) {
        Initialzerblock I1 = new Initialzerblock();
    }   
}
