/**
 * contructoroverflow
 */
public class contructoroverflow {
    int id;
    String name;
    int age;

    contructoroverflow(int i, String n){
        id = i;
        name = n;
    }

    contructoroverflow(int i, String n, int a){
        this.id = i;
        this.name = n;
        this.age = a;
    }

    void display(){
        System.out.println(id + "   " + name + "   " + age);
    }
    public static void main(String[] args) {
        contructoroverflow c1 = new contructoroverflow(1111, "son");
        contructoroverflow c2 = new contructoroverflow(2222, "nguyen", 23);

        c1.display();
        c2.display();
    }
}