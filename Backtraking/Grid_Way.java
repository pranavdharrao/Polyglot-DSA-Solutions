public class Grid_Way {
    public static int basecase(int n, int m, int i, int j) {
        if (i == n - 1 && j == m - 1) {
            return 1;
        } else if (i == n || j == n) {

            return 0;
        }
        int w1 = basecase(n, m, i + 1, j);
        int w2 = basecase(n, m, i, j + 1);
        return w1 + w2;
    }

    public static void main(String agrs[]) {
        int n = 3;
        int m = 3;
        System.out.println(basecase(n, m, 0, 0));
    }
}
