import java.util.Scanner;

class Binary_search {
    public static int Binary(int Number[], int key) {
        int start = 0, end = Number.length - 1;
        while (start <= end) {
            int mid = start + end / 2;
            if (Number[mid] == key) {
                return mid;
            }
            if (Number[mid] < key) {
                return mid + 1;
            } else {
                return mid - 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int Number[] = { 3, 6, 8, 9, 10, 5, 13 };
        int key = 10;

        System.out.println("Key found at " + Binary(Number, key) + " index");
    }
}