/**
 * staticjava
 */
public class staticjava {
    static int counter = 9;

    staticjava(){
        counter++;
        System.out.println(counter);
    }
    public static void main(String[] args) {
        staticjava s1 = new staticjava();
        staticjava s2 = new staticjava();
    }
}