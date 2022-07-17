# Longest valid Parentheses
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string `S` consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

A parenthesis string is valid if:
- For every opening parenthesis, there is a closing parenthesis.
- Opening parenthesis must be closed in the correct order.

__Example 1:__
```
Input: S = ((()
Output: 2
Explaination: The longest valid
parenthesis substring is "()".
```
__Example 2:__
```
Input: S = )()())
Output: 4
Explaination: The longest valid
parenthesis substring is "()()".
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **maxLength()** which takes string S as input parameter and returns the length of the maximum valid parenthesis substring.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(|S|)

__Constraints:__
- 1 ≤ |S| ≤ 10<sup>5</sup>

### Solution
```java
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
```