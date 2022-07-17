import java.io.*;
import java.util.*;

class palindrome {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();

            Solution ob = new Solution();
            ArrayList<ArrayList<String>> allPart = ob.allPalindromicPerms(S);

            for (int i = 0; i < allPart.size(); i++) {
                for (int j = 0; j < allPart.get(i).size(); j++) {
                    System.out.print(allPart.get(i).get(j) + " ");
                }
                System.out.println();
            }
        }
    }
}

class Solution {
    ArrayList<ArrayList<String>> hs = new ArrayList<>();

    public boolean ispalindrome(String str) {
        int last = str.length() - 1;
        int start = 0;

        while (start <= last) {
            if (str.charAt(start) != str.charAt(last))
                return false;
            start++;
            last--;
        }
        return true;
    }

    public void check(int index, String S, ArrayList<String> ary, int n) {
        if (index == n)
            hs.add(new ArrayList<>(ary));

        for (int i = index + 1; i <= S.length(); i++) {
            if (ispalindrome(S.substring(index, i))) {
                ary.add(S.substring(index, i));
                check(i, S, ary, n);
                ary.remove(ary.size() - 1);
            }
        }
    }

    ArrayList<ArrayList<String>> allPalindromicPerms(String S) {
        ArrayList<String> ary = new ArrayList<>();
        int n = S.length();
        check(0, S, ary, n);
        return hs;
    }
};