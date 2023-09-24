

import java.util.Scanner;

public class ReverseArray {
    public static void Reverse(int n[]) {
        int first = 2, end = n.length - 1;
        while (first < end) {
            int temp = n[end];
            n[end] = n[first];
            n[first] = temp;
            first++;
            end--;
        }

    }

    public static void main(String[] args) {
        int n[] = { 2, 10, 23, 15, 20, 1 };
        Reverse(n);
        for (int i = 0; i < n.length; i++) {
            System.out.print(n[i] + " ");
        }
        System.out.println();

    }
}
