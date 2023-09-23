
import java.util.*;

public class Largest {
    public static int largest(int no[]) {
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;
        for (int i = 0; i < no.length; i++) {
            if (largest < no[i]) {
                largest = no[i];
            }
            if (smallest > no[i]) {
                smallest = no[i];
            }

        }
        System.out.println("Smallest value is :" + smallest);
        return largest;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the 10 Value :");
        int no[] = { 2, 5, 6, 1, 3, 4 };

        System.out.println("largest Value is :" + largest(no));

    }

}
