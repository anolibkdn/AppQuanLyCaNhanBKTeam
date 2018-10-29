/**
 * thisargument
 */
public class thisargument {
    int id;
    String name;

    void m(thisargument th1){
        System.out.println(id + "," + name);
        System.out.println("hello world!");
    }

    thisargument(){
        m(this);
    }

    thisargument(int id, String name){
        this.id = id;
        this.name = name;
        m(this);
    }

    public static void main(String[] args) {
        thisargument th1 = new thisargument(); 
        thisargument th2 = new thisargument(3,"this argument!");   
    }
}