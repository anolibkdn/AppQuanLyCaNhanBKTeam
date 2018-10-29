import java.util.Scanner;

/**
 * catgiay
 */
public class catgiay {
    static int c = 0;
    public void chia(int x, int y){
        c++;
        if(x==1 || y == 1){
            //c++;
            if(c%2==0){
                System.out.println("hoa");
            }else{
                System.out.println("tam");
            }
        }else{
            if(x>=y){
                chia(x-x/2, y);
            }else{
                chia(x, y - y/2);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,m;
        n = sc.nextInt();
        m = sc.nextInt();
        catgiay c1 = new catgiay();
        c1.chia(n, m);
    }
}