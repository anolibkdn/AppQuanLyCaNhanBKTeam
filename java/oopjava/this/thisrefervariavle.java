/**
 * thisrefervariavle
 */
public class thisrefervariavle {

    private int id;
    String name;
    float fee;

    thisrefervariavle(int id, String name, float fee) {
        this.id = id;
        this.name = name;
        this.fee = fee;
    }

    public void display() {
        System.out.println(id + "," + name + "," + fee);
    }

    public static void main(String[] args) {
        thisrefervariavle th1 = new thisrefervariavle(1, "hoa", 1234);
        th1.display();
    }
}