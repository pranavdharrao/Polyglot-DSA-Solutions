public class SubstringCount {
    public static void main(String[] args) {
        String inputString = "ABC";

        // Count and display substrings
        int subStringCount = countAndPrintSubstrings(inputString);

        // Display result
        System.out.println("Number of substrings: " + subStringCount);
    }

    // Function to count and print substrings
    private static int countAndPrintSubstrings(String str) {
        int count = 0;
        int n = str.length();

        // Generate all possible substrings
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                String substring = str.substring(i, j);
                System.out.println(substring);
                count++;
            }
        }

        return count;
    }
}
