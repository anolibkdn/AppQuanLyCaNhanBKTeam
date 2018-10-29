import java.util.Scanner;
import java.util.ArrayList;
import java.lang.Math;
/**
 * armstrong
 */
public class armstrong {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int n=0,m;
        m = num;
        ArrayList <Integer> tmp = new ArrayList <Integer> ();
        while (num!=0) {
            tmp.add(num%10);
            num /= 10;
            n++;
        }
        int sum =0;
        for (int var : tmp) {
            sum += Math.pow(var, n);
        }

        if(sum == m){
            System.out.println("Armstrong number!");
        }else{
            System.out.println("not Armstrong number!");
        }
    }
}