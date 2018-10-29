import java.util.Scanner;

/**
 * jvprogram3
 */
public class jvprogram3 {

    public static void main(String[] args) {
        //factorial number
        long factorial = 1;
        Scanner sc = new Scanner(System.in);
        int max = sc.nextInt();

        for (int i = 1; i <= max; i++) {
            factorial*=i;
        }

        System.out.println("Factorial number: " + factorial);
    }
}