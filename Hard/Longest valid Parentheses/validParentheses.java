import java.io.*;
import java.util.*;

class validParentheses {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            String S = in.readLine();

            Solution ob = new Solution();
            System.out.println(ob.maxLength(S));
        }
    }
}

class Solution {
    public int maxLength(String s) {
        int len = 0;
        int[] dp = new int[s.length() + 1];
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                dp[i] = 0;
                stack.push(i);
            } else if (s.charAt(i) == ')') {
                if (stack.isEmpty()) {
                    dp[i] = 0;
                } else {
                    int j = stack.pop();
                    if (j > 0) {
                        dp[i] = dp[i - 1] + dp[j - 1] + 2;
                    } else {
                        dp[i] = dp[i - 1] + 2;
                    }
                }
            }
            len = Math.max(dp[i], len);
        }
        return len;
    }
}