class Backtracking_array {
    public static void recursion(int arr[], int i, int val) {
        if (i == arr.length) {
            printarr(arr);
            return;
        }
        // recursion
        arr[i] = val;
        recursion(arr, i + 1, val + 1);
        arr[i] = arr[i] - 1;

    }

    public static void printarr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int arr[] = new int[5];
        recursion(arr, 0, 1);
        printarr(arr);
    }
}
