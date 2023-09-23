

import java.util.Scanner;

public class Sample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Marks[] = new int[100];
        Marks[0] = sc.nextInt();
        Marks[1] = sc.nextInt();
        Marks[3] = sc.nextInt();
        System.out.println("Physics :" + Marks[1]);
        System.out.println("math :" + Marks[0]);
        System.out.println("chem :" + Marks[3]);

    }

}
