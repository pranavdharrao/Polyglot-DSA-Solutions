
public class Bubble_sort {
    public static void Bubble(int Arr[]) {
        for (int i = 0; i < Arr.length - 1; i++) {
            for (int j = 0; j < Arr.length - 1 - i; j++) {
                if (Arr[j] > Arr[j + 1]) {
                    int temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;

                }

            }

        }
        for (int k = 0; k < Arr.length; k++) {
            System.out.print(Arr[k] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int Arr[] = { 5, 8, 9, 4, 6, 7, 8, 3, 9 };
        Bubble(Arr);

    }
}
