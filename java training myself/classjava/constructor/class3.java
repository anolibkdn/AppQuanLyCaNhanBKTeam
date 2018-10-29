/**
 * class3
 */
class employer{
    int id;
    String name;
    float salary;
    //ham thiet lap du lieu
    void insert(int id, String name, float salary){
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
    //ham hien thi du lieu
    void display(){
        System.out.println(id + "  "+ name + "  " + salary);
    }
}

public class class3 {

    public static void main(String[] args) {
        employer em = new employer();
        employer em1 = new employer();

        em.insert(1,"son", 12000);
        em1.insert(2, "nguyen", 13000);

        em.display();
        em1.display();
    }
}