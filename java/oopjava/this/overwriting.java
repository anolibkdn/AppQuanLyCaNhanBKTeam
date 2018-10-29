/**
 * overwriting
 */
class A{
    int a,b;

    // A(int a, int b){
    //     this.a = a;
    //     this.b = b;
    // }
    public void cong(){
        int c = a +b;
        System.out.println(a+","+ b + ","+c);
    }
}

public class overwriting extends A{
    double a,b;
    overwriting(double a, double b){
        this.a = a;
        this.b = b;
        this.cong();
    }
    public void cong(){
        double c = a+b;
        System.out.println(c);
    }

    public static void main(String[] args) {
        overwriting o1  =  new overwriting(1.5, 2); 
    }
}