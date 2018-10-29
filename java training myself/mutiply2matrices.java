/**
 * mutiply2matrices
 */
public class mutiply2matrices {
    public static void mutiply2matrices(int a[][], int b[][]){
        int c[][]={{0,0,0},{0,0,0},{0,0,0}},sum = 0;
        int max = 3;
        for (int i = 0; i < max; i++) {
            for (int j = 0; j < max; j++) {
                for (int e = 0; e < max; e++) {
                    sum += a[i][e]*b[e][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < max; i++) {
            for (int j = 0; j < max; j++) {
                System.out.print("  "+ c[i][j]);
            }System.out.println();
        }
    }
    public static void main(String[] args) {
        int a[][]={ //matrices a 
            {1,1,1},
            {2,2,2},
            {3,3,3}
        };
        int b[][]={ //matrices b 
            {1,1,1},
            {2,2,2},
            {3,3,3}
        };

        // a x b

        mutiply2matrices(a, b);
    }
}