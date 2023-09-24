import java.util.Scanner;

public class Kadane_Algo {
    public static void Kadane(int No[]) {
        int current = 0;
        int Max = Integer.MIN_VALUE;
        for (int i = 0; i < No.length - 1; i++) {
            current = current + No[i];
            if (current < 0) {
                current = 0;
            }
            Max = Math.max(current, Max);
            System.out.println(Max);
        }

    }

    public static void main(String[] args) {
        int No[] = { 2, -3, 1, -4, 5, -1 };
        Kadane(No);

    }
}
