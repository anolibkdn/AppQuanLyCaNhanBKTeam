/**
 * javaprograms
 */

import java.util.Scanner;//import thu vien scanner
import java.lang.Math;//import thu vien toan hoc

public class javaprograms {

    static boolean prime(int n){
        if(n<2) return false;
        else{
            for (int i = 2; i <= Math.sqrt(n); i++) {
                if(n%i==0) return false;
            }return true;
        }
    }

    public static void main(String[] args) {
        
        //day fibonacci

        int a = 0,b=1,c=0;
        System.out.println("fibonacci: ");
        while (c<=10) {
            System.out.println(a+b);
            int tmp = a;
            a = b;
            b += tmp;
            c++;
        }
        Scanner sc = new Scanner(System.in);//khai baos bien lop scanner

        System.out.println("prime number: ");
        int number = sc.nextInt();
        int sum = 0;
        for (int i = 0; i <=number; i++) {
            if(prime(i)){
                sum++;
                System.out.println(i);
            }
        }
        System.out.println("Tong so prime: "+ sum);
    }
}