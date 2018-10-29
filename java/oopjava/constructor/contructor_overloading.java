/**
 * contructor_overloading
 */
public class contructor_overloading {
    private
        int id;
        String name;
        int age;
    // nap chong ham dung
    contructor_overloading(){
        System.out.println("ham dung khong doi so duoc goi!");
    }

    contructor_overloading(int id, String name, int age){

        this.id = id;
        this.name = name;
        this.age = age;

        System.out.println(id + "," + name + "," + age);
    }


    public static void main(String[] args) {
        contructor_overloading c1  = new contructor_overloading();
        contructor_overloading c2 = new contructor_overloading(1,"hoa",3);
    }
}