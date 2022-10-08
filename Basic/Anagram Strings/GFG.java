import java.io.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S1 = read.readLine();
            String S2 = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.areAnagram(S1, S2));
        }
    }
}

class Solution {
    int areAnagram(String S1, String S2) {
        if (S1.length() != S2.length())
            return 0;
        int[] char_count = new int[26];
        for (int i = 0; i < S1.length(); i++) {
            char_count[S1.charAt(i) - 'a']++;
            char_count[S2.charAt(i) - 'a']--;
        }
        for (int count : char_count) {
            if (count != 0) {
                return 0;
            }
        }
        return 1;
    }
}