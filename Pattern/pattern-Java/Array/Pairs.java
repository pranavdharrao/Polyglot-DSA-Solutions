import java.util.Scanner;;

public class Pairs {
    public static void Pairs(int no[]) {

        for (int i = 0; i < no.length; i++) {
            int current = no[i];
            for (int j = i + 1; j < no.length; j++) {
                System.out.print("(" + current + "," + no[j] + ")");
            }
            System.out.println();
        }

    }

    public static void main(String[] args) {
        int no[] = { 2, 4, 5, 6, 7, 8 };
        Pairs(no);
    }

}
