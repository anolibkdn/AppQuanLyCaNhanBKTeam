/**
 * jvprogram2
 */

import java.util.Scanner;//import scanner 

public class jvprogram2 {

    public static void main(String[] args) {
        int num,num1;
        Scanner sc = new Scanner(System.in);
        //nhap vao mot so nguyen
        num = sc.nextInt();
        num1 = num;
        int cpnum = 0;
        while (num!= 0) {
            cpnum *= 10;
            cpnum += num%10;
            num /= 10;
        }   

        if (num1==cpnum) {
            System.out.println("palindrome number!");
        }else{
            System.out.println("not palindrome number!");
        }
    }
}