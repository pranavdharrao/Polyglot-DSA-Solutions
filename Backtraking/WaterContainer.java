import java.util.*;

public class WaterContainer {
    public static void container(ArrayList<Integer> height) {
        int maxwater = 0;
        // for (int i = 0; i < height.size(); i++) {
        // for (int j = i + 1; j < height.size(); j++) {
        // int ht = Math.min(height.get(i), height.get(j));
        // int width = j - 1;
        // int waterlevel = ht * width;
        // maxwater = Math.max(maxwater, waterlevel);
        // }
        // }
        int lp = 0;
        int rp = height.size() - 1;
        while (lp < rp) {
            int ht = Math.min(height.get(lp), height.get(rp));
            int width = rp - lp;
            int waterlevel = ht * width;
            maxwater = Math.max(maxwater, waterlevel);
            if (height.get(lp) < height.get(rp)) {
                lp++;
            } else {
                rp--;
            }
        }

        System.out.println(maxwater);
    }

    public static void main(String[] args) {
        ArrayList<Integer> height = new ArrayList<>();
        height.add(1);
        height.add(8);
        height.add(6);
        height.add(2);
        height.add(5);
        height.add(4);
        height.add(8);
        height.add(3);
        height.add(7);
        container(height);
    }
}