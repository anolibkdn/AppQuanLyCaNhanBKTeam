import java.util.Scanner;

/**
 * ptb1
 */
public class ptb1 {

    public void giaiphuongtrinhbacnhat(float a, float b){
        float x;
        if(a!=0){
            x = -b/a;
            System.out.println("x = " + x);
        }else{
            if(b!=0){System.out.println("Vo Nghiem!");}
            else{System.out.println("Vo So Nghiem!");}
        }
    }

    public static void main(String[] args) {
        ptb1 b1 = new ptb1();
        Scanner sc = new Scanner(System.in);
        b1.giaiphuongtrinhbacnhat(sc.nextFloat(),sc.nextFloat());
        
    }
}