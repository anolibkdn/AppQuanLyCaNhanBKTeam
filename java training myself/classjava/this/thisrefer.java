/**
 * thisrefer
 * the this keyword can be used to current class instance variable. if
 * there is ambiguty between the instance variable and parameters this keyqord resolves the prolem of ambiguty
 */
public class thisrefer {
    int roll;
    String name;
    double fee;

    thisrefer(int roll, String name, double fee){
        this.roll = roll;
        this.name = name;
        this.fee = fee;
    }

    public void display(){
        System.out.println(roll + "   " + name +"   " + fee);
    }
    public static void main(String[] args) {
        thisrefer t1 = new thisrefer(12,"name" , 2345.2344235);
        t1.display();
    }
}