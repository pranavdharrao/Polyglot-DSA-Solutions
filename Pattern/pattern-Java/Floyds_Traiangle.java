import java.util.Scanner;

public class Floyds_Traiangle {
    public static void floyd(int n) {
        int No = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {

                System.out.print(No + " ");
                No++;
            }
            System.out.println();

        }

    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        int n = x.nextInt();
        floyd(n);
    }
}
