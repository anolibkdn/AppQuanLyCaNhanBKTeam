/**
 * Emp
 */
public class Emp {
    int id;
    String name;
    Address add;

    public Emp(int id, String name, Address add){
        this.id = id;
        this.name = name;
        this.add = add;
    }

    void show(){
        System.out.println(this.id + "  " + this.name);
        System.out.println(this.add.city+","+this.add.state +","+this.add.country);
    }
    public static void main(String[] args) {
        Address add1 = new Address("da nang", "mien trung", "viet nam");
        Address add2 = new Address("ha noi", "mien bac", "viet nam");

        Emp e1 = new Emp(1, "hoa khanh", add1);

        Emp e2 = new Emp(1, "quan 1", add2);
        
        e1.show();
        e2.show();
    }
}