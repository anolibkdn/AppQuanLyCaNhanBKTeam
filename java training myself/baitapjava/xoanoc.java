import java.util.Scanner;

/**
 * xoanoc
 */
public class xoanoc {

    static void xoan(int m[][], int n) {
        int k1 = 1, k2 = 1;
        for (int i = 0, j = 0, dem = 1; dem <= n * n; dem++) {
            if (i <= (n - 1) / 2 && j < n && (m[i][j] == 0 || m[i][j + 1] == 0)) {
                if (m[i][j] == 0) {
                    m[i][j] = dem;
                    j++;
                    continue;
                } else if (m[i][j + 1] == 0) {
                    m[i][j + 1] = dem;
                    j++;
                    continue;
                }
                continue;
            }
            i++;
            if (j > (n - 1) / 2 && i < n && m[i][j - 1] == 0) {
                m[i][j - 1] = dem;
                continue;
            }
            j--;
            if (i > (n - 1) / 2 && j > 0 && m[i - 1][j - 1] == 0) {
                m[i - 1][j - 1] = dem;
                continue;
            }
            i--;
            if (j <= (n - 1) / 2 && i >= 0 && m[i - 1][j] == 0) {
                m[i - 1][j] = dem;
                continue;
            }
        }
    }

    static void show(int m[][], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(m[i][j] + "  ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[][] m = new int[10][10];
        xoan(m, n);
        // clean(m, n);
        show(m, n);
    }
}