import java.util.Scanner;

class Selection_Sort {
    public static void Selection(int Arr[]) {
        for (int i = 0; i < Arr.length - 1; i++) {
            int midposition = i;
            for (int j = i + 1; j < Arr.length; j++) {
                if (Arr[midposition] > Arr[j]) {
                    midposition = j;
                }
            }
            int temp = Arr[midposition];
            Arr[midposition] = Arr[i];
            Arr[i] = temp;

        }

    }

    public static void print(int Arr[]) {
        for (int i = 0; i < Arr.length; i++) {
            System.out.println(Arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int Arr[] = { 4, 8, 9, 7, 6, 2 };
        Selection(Arr);
        print(Arr);
    }
}