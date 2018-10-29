/**
 * class2
 */

class student{
    int id;
    String name;
}

public class class2 {

    public static void main(String[] args) {
        student st = new student();
        System.out.println(st.id);
        System.out.println(st.name);
        st.id= 122;
        st.name = "nguyenvanson";

        System.out.println("name: " + st.name + " id: "+st.id);
    }
}