/**
 * javaloop
 */
public class javaloop {

    public static void main(String[] args) {
        int max = 10;
        for (int i = 0; i < max; i++) {
            System.out.println(i);
        }

        //loop array
        int arr[] ={1,2,3,4,5,6,78,9,0};
        for (int var :arr) {
            System.out.println(var);
        }
        
        //labeled for loop

        aa:
        for (int i = 0; i < 3; i++) {
            bb:
            for (int j = 0; j < 3; j++) {
                if(i==2 && j ==2 ){
                    break aa;
                }
                if(i==3){
                    break bb;
                }
                System.out.println(i+"  "+j);
            }
        }
        int key = 0;
        while (key < 10) {
            System.out.println(key);
            key++;
        }

        int key1 = 0;

        do {
            System.out.println(key1);
            key1++;
        } while (key1<10);
    }
}