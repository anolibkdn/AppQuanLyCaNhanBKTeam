
/**
 * controctorinhe
 */
class Teacher {

    private String mName;
    private int mAge;

    Teacher(){
        mName = null;
        mAge = 0;
    }
    Teacher(String name, int age){
        this.mName = name;
        this.mAge = age;
    }

    public void show(){
        System.out.println(mName + " " + mAge);
    }

    /**
     * @param mAge the mAge to set
     */
    public void setmAge(int mAge) {
        this.mAge = mAge;
    }

    /**
     * @param mName the mName to set
     */
    public void setmName(String mName) {
        this.mName = mName;
    }
}
public class controctorinhe extends Teacher{
    private String mSubject;

    controctorinhe(){
        mSubject = null;
    }

    controctorinhe(String name, int age, String sub){
        super(name, age);
        this.mSubject = sub;
        // this.setmAge(age);
        // this.setmName(name);
    }

    public void show(){
        super.show();
        System.out.println(mSubject);
    }
    public static void main(String[] args) {
        controctorinhe c1 = new controctorinhe("hoa", 32, "ly");
        controctorinhe c2 = new controctorinhe();

        c1.show();
        c2.show();
    }
}