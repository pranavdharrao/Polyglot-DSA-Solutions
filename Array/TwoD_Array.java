import java.util.Scanner;

public class TwoD_Array {
    public static void main(String[] args) {
        int matrix[][] = new int[3][3];
        int n = 3, m = 3;

        System.out.println("Enter the 9 Values");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                matrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix.length; j++) {

                System.out.print(matrix[i][j] + " ");

            }
            System.out.println();
        }
    }
}
