/**
 * Lichvannien
 */
public class Lichvannien {
    int thang[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    boolean namnhuan(int nam){
        if((nam%400==0)||(nam%4==0 && nam%100!=0)) return true;
        return false;
    }

    public static void main(String[] args) {
        Lichvannien l1 = new Lichvannien();
        int nam=2000,thangi=2;

        if(l1.namnhuan(nam) && thangi == 2){
            System.out.println(29);
        }else{
            System.out.println(l1.thang[thangi]);
        }
    }
}