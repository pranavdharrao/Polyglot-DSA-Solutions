import java.util.Scanner;

public class Half_Num_pyramid {
    public static void Half(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= (n - i) + 1; j++) {
                System.out.print(j + " ");
            }
            System.out.println(" ");
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Value Of n");
        int n = sc.nextInt();
        Half(n);
    }
}
