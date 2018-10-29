/**
 * ex1
 */
class Employer{
    float salary = 4000;
}

public class ex1 extends Employer {
    int bonus = 1000;


    public static void main(String[] args) {
        ex1 e1 = new ex1();
        
        System.out.println(e1.salary);
        System.out.println(e1.bonus);
    }
}