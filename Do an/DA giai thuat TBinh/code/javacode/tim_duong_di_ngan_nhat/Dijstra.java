import java.util.ArrayList;
import java.util.Scanner;

/**
 * Dijstra
 */

public class Dijstra {
    
    /*
     ************** THONG TIN VE NGUON GOC RA DOI**************
     * 
     * Giai thuat Dijkstra mang ten mot nha khoa hoc may tinh nguoi Ha Lan Dijkstra
     * laf mot thuat toan giai quyet bai toan duong di ngan nhat trong mot do thi
     * "CO HUONG KHONG CO CANH TRONG SO AM". Ung dung lon nhat cua thuat toan nay la
     * trong cong nghe he thong dinh vi toan cau(GPS).
     *********** 
     * 
     * 
     * LY THUYET VE DO THI VA THUAT TOAN*************
     * 
     * -Mot do thi co huong G =(V,E), voi cac canh co trong so khong am, co du lieu
     * vao la ma tran trong so L va 2 dinh x,y cho truoc. Viec cua ta can lam la di
     * tim duong di ngan nhat tu x den y trong do thi G.
     *********************** 
     * 
     * THUAT TOAN************************
     * 
     * B1: Khoi tao cac mang n phan tu
     */

    private int n;
    private int arrayRun[][];
    private int inputArray[][];
    private int stick[];
    private int results[];

    public Dijstra(){
        this.n = 0;
    }
    /**
     * @param n the n to set
     */
    public void setN(int n) {
        this.n = n;
    }
    /**
     * @return the n
     */
    public int getN() {
        return n;
    }
    public static void main(String[] args) {
        Dijstra d1 = new Dijstra();

        Scanner sc = new Scanner(System.in);
        d1.setN(sc.nextInt());
        // System.out.println(d1.getN());

        // fake date
        /*
            n=7
            0 0 1 2 0 0 0
            0 0 2 0 0 0 3
            1 2 0 1 3 0 0
            2 1 0 0 0 0 1
            0 0 3 0 0 2 0
            0 3 0 0 2 0 1
            0 0 0 1 0 1 0 
        */

    }
}