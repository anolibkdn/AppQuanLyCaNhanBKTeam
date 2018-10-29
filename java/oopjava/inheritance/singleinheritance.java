/**
 * singleinheritance**
 * Animal
 */
class Animal {

    void eat(){
        System.out.println("eatting...");
    }
}


class Dog extends Animal{
    void brank(){
        System.out.println("branking...");
    }
}
public class singleinheritance {

    public static void main(String[] args) {
        Dog d1 = new Dog();
        d1.brank();
        d1.eat();
    }
}