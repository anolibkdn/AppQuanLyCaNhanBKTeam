/**
 * contructor-no-arg
 */
public class contructor_no_arg {
    //truong hop co thuoc tinh nhung khong duoi khoi tao gia tri thi
    //compiler se tu dong tao ham dung cho doi tuong
    int id;
    String name;
    //khoi tao khong doi so voi ham dung
    contructor_no_arg(){
        //System.out.println("ham dung duoc goi!");
        System.out.println(id + "," + name);
    }
    public static void main(String[] args) {
        // khi moi doi tuong vua duoc tao ra thi lap tuc ham dung duoc goi
        contructor_no_arg c1 = new contructor_no_arg();
    }
}