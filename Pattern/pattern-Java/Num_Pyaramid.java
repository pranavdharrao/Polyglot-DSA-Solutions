import java.util.*;

public class Num_Pyaramid {
    public static void ND(int n) {
        int no = 0;
        for (int i = 1; i <= n; i++) {
            no++;
            for (int j = i; j <= n; j++) {
                System.out.print(" ");

            }
            for (int k = 1; k <= (2 * i) - 1; k++) {

                System.out.print(no);
            }

            System.out.println();

        }

    }

    public static void main(String[] args) {
        ND(5);
    }
}
