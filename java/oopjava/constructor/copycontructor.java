
/**
 * copycontructor
 */
public class copycontructor {
    int id;
    String name;

    copycontructor(int i, String n){
        id = i;
        name = n;
    }


    copycontructor( copycontructor c){
        id = c.id;
        name = c.name;
    }

    public void display(){
        System.out.println(id + "," +name);
    }

    public static void main(String[] args) {
        copycontructor c1 = new copycontructor(1,"lan");
        copycontructor c2 = new copycontructor(c1);

        c2.display();
    }
}