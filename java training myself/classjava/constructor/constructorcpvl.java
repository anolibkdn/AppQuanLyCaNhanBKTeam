/**
 * constructorcpvl
 */
public class constructorcpvl {

    int id;
    String name;

    constructorcpvl(int i, String n){
        this.id = i;
        this.name = n;
    }

    constructorcpvl(){}//neu khong co ham nay se loi
    public void display(){
        System.out.println(id + "    " + name);
    }
    public static void main(String[] args) {
        constructorcpvl c1 = new constructorcpvl(12, "nguyen");
        constructorcpvl c2 = new constructorcpvl();   
        
        c2.id = c1.id;
        c2.name = c1.name;

        c1.display();
        c2.display();
    }
}