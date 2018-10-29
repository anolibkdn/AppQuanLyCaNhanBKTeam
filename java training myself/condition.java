/**
 * condition
 */
public class condition {

    public static void main(String[] args) {
        // if - else condition
        int age = 20;
        if(age < 18){
            System.out.println("age is lesser than 18!");
        }else{
            System.out.println("age is greater than 18!");
        }

        // switch statement

        int number = 12;

        switch(number){
            case 10:
                System.out.println("10");
                break;
            case 20:
                System.out.println("20");
                break;
            case 30:
                System.out.println("30");
                break;
            default:
                System.out.println("any number");
        }
    }
}