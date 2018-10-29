
/**
 * contructorarg
 */
public class contructorarg {
    int id;
    String name;

    contructorarg(int id, String name){
        this.id = id;
        this.name = name;
    }

    public void display(){
        System.out.println(id+","+name);
    }
    public static void main(String[] args) {
        contructorarg c1 = new contructorarg(1, "hoa");

        c1.display();
    }
}