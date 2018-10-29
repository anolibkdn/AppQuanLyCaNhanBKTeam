/**
 * constructorcall
 */
public class constructorcall {
    int roll;
    String name;
    float fee;
    constructorcall(int roll, String name){
        this.roll = roll;
        this.name = name;
    }

    constructorcall(int roll, String name, float fee){
        this(roll,name);
        this.fee = fee;
    }

    public void display(){
        System.out.println(roll + "  " + name + "  " + fee);
    }

    public static void main(String[] args) {
        constructorcall c1 = new constructorcall(12, "john");
        constructorcall c2 = new constructorcall(14, "deven", 21342);

        c1.display();
        c2.display();
    }
}