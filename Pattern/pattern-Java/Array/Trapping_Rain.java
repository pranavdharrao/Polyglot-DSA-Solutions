import java.util.Scanner;

public class Trapping_Rain {
    public static int Trap_water(int Height[]) {
        // Left Max Boundry-Array
        int Left_max[] = new int[Height.length];
        Left_max[0] = Height[0];
        for (int i = 1; i < Height.length; i++) {
            Left_max[i] = Math.max(Height[i], Left_max[i - 1]);

        }
        // Right Max Boundry-Array
        int Right_max[] = new int[Height.length];
        Right_max[Height.length - 1] = Height[Height.length - 1];
        for (int i = Height.length - 2; i >= 0; i--) {
            Right_max[i] = Math.max(Height[i], Right_max[i + 1]);

        }
        int trapewater = 0;
        for (int i = 0; i < Height.length; i++) {
            // Wterlevel
            int waterlevel = Math.min(Left_max[i], Right_max[i]);
            // Trapewater
            trapewater += waterlevel - Height[i];

        }
        return trapewater;

    }

    public static void main(String[] args) {
        int Height[] = { 4, 2, 0, 6, 3, 2, 5 };
        System.out.println(Trap_water(Height));
    }

}
