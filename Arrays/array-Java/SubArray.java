import java.util.Scanner;

public class SubArray {
    public static void SubArray(int Num[]) {

        for (int i = 0; i <= Num.length; i++) {
            int start = i;
            for (int j = i; j < Num.length; j++) {
                int last = j;
                for (int k = start; k <= last; k++) {
                    System.out.print(Num[k] + " ");
                }
                System.out.println();
            }
            System.err.println();
        }
    }

    public static void main(String[] args) {
        int Num[] = { 2, 3, 4, 5, 6, 7, 8 };
        SubArray(Num);
    }
}
