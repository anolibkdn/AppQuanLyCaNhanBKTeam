/**
 * thisinvokecurrentclassmethod
 */
public class thisinvokecurrentclassmethod {
    int id;
    String name;
    double fee;

    thisinvokecurrentclassmethod(){
        this(2,"hang");
        this.display();
    }

    thisinvokecurrentclassmethod(int id, String name){
        // this();
        this.id = id;
        this.name = name;
        this.inforclass();
    }

    public void display(){
        System.out.println("this is this keyword to invoke current class method!");
    }

    public void inforclass(){
        System.out.println("this can invoke current class method!");
        System.out.println(id +"," +name +"," + fee);
    }
    public static void main(String[] args) {
        // thisinvokecurrentclassmethod th1 = new thisinvokecurrentclassmethod();
        thisinvokecurrentclassmethod th2 = new thisinvokecurrentclassmethod(1, "hoa");
        thisinvokecurrentclassmethod th3 = new thisinvokecurrentclassmethod();
    }
}