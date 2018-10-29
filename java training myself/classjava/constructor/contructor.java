/**
 * contructor
 */
public class contructor {

    int id;
    String name;

    contructor(int i, String n){
        id = i;
        name = n;
    }

    void display(){
        System.out.println(id + "    " + name);
    }
    public static void main(String[] args) {
        contructor c1 = new contructor(111, "jonh");
        contructor c2 = new contructor(222, "aryan");

        c1.display();
        c2.display();
    }
}