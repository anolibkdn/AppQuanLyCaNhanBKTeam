/**
 * constructorcopy
 */
public class constructorcopy {
    int id;
    String name;

    constructorcopy(int i, String n){
        this.id = i;
        this.name = n;
    }

    constructorcopy(constructorcopy c){
        this.id = c.id;
        this.name = c.name;
    }

    public void display(){
        System.out.println(id + "      " + name);
    }
    public static void main(String[] args) {
        constructorcopy c1 = new constructorcopy(12,"son");
        constructorcopy c2 = new constructorcopy(c1);

        c1.display();
        c2.display();
    }
}