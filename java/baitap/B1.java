
/**
 * B1
 */
public class B1 {

    public static void multi_n(int n){
        long s1 = 1, s2 = 1;
        for (int i = 2; i <= n; i++) {
            if(i%2==0) s1 *= i;
            if(i%2==1) s2 *= i;
        }
        if(n%2==0) System.out.println("n!! = " + s1 );
        else System.out.println("n!! = " + s2 );
    }

    public static boolean checkNumber(int n){
        int s = 0;

        while (true) {
            s += n%2;
            n/=2;
            if(n==0) break;
            s*=10;
        }
        if(s == reverseNumber(s)) return true;
        return false;
    }

    public static boolean ngtNumber(int n){
        if(n<2) return false;
        else{
            for (int i = 2; i <= Math.sqrt(n); i++) {
                if(n%i==0) return false;
            }
        }

        return true;
    }

    public static int reverseNumber(int n){
        int s = 0;
        while (true) {
            s += n%10;
            n/=10;
            if(n==0) break;
            s*=10;
        }return s;
    }

    public static int analysisNumber(int n){
        int s = 1;
        while (n!=0) {
            s *= n%10;
            n/=10;
        }return s;
    }

    public static int ucln(int a, int b){
        if(a==b) return a;
        else{
            if(a>b) return ucln(a-b, b);
            else return ucln(a, b-a);
        }
    }
    public static void main(String[] args) {
        int a = 4,b = 8;

        System.out.println("ucln: " + ucln(a, b));
        int bcnn = a*b/ucln(a, b);
        System.out.println("bcnn: " + bcnn);
        System.out.println("analysis: " + analysisNumber(123));
        System.out.println("reverse: " + reverseNumber(123));
        System.out.println("checkNumbebr: " + checkNumber(7));
    }
}
