public class Subarray_MSum {
    public static void Max(int No[]) {
        // int current = 0;
        int Max = Integer.MIN_VALUE;
        for (int i = 0; i < No.length; i++) {
            int first = i;

            for (int j = i; j < No.length; j++) {
                int last = j;
                int current = 0;

                for (int k = i; k <= j; k++) {
                    current += No[k];

                }
                System.out.println(current);
                if (current > Max) {
                    Max = current;
                }

            }
        }
        System.out.println("Max Value is " + Max);
    }

    public static void main(String[] args) {
        int No[] = { 1, 2, 3, 1 };
        Max(No);
    }
}
