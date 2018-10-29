/**
 * inheritance1
 */
class employee{
    String name;
    int id;

    employee(String name, int id){
        this.name = name;
        this.id = id;
    }

    public void getEmployee(){
        System.out.println(name + " ," + id);
    }
}

public class inheritance1 extends employee{
    double salary;

    inheritance1(String name, int id, double s1){
        this(name,id);
        this.salary = s1;
    }

    public void getInheritance(){
        this.getEmployee();
        System.out.println(salary);
    }
    public static void main(String[] args) {
        inheritance1 i1 = new inheritance1("son", 2, 345.456);
    }
}