/**
 * thisconstructorcall
 */
public class thisconstructorcall {
    int id;
    String name;
    double fee;

    thisconstructorcall(int id, String name){
        this.id = id;
        this.name = name;
    }

    thisconstructorcall(int id, String name, double fee){
        this(id, name);
        this.fee = fee;
    }

    public void display(){
        System.out.println(id + "," + name +"," + fee);
    }
    public static void main(String[] args) {
        thisconstructorcall th1 = new thisconstructorcall(1, "hanh");
        th1.display();
        // this co the dung de thay goij ham dung 
        thisconstructorcall th2 = new thisconstructorcall(2, "name", 1234.56);
        th2.display();
    }
}