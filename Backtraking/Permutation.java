public class Permutation {
    public static void findpermutation(String str, String ans) {
        if (str.length() == 0) {
            System.out.println(ans);
            return;
        }
        for (int i = 0; i < str.length(); i++) {
            char current = str.charAt(i);
            String newstr = str.substring(0, i) + str.substring(i + 1);
            findpermutation(newstr, ans + current);
        }
    }

    public static void main(String[] args) {
        String str = "ABC";
        findpermutation(str, "");

    }
}
