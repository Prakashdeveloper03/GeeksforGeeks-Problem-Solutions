# Infix to Postfix
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

- **Infix expression:** The expression of the form a op b. When an operator is in-between every pair of operands.
- **Postfix expression:** The expression of the form a b op. When an operator is followed for every pair of operands.
    
    **Note:** The order of precedence is: ^ greater than * equals to / greater than + equals to -

__Example 1:__
```
Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
After converting the infix expression
into postfix expression, the resultant
expression will be abcd^e-fgh*+^*+i-
```
__Example 2:__
```
Input: str = "A*(B+C)/D"
Output: ABC+*D/
Explanation:
After converting the infix expression
into postfix expression, the resultant
expression will be ABC+*D/
```
__Your Task__

This is a function problem. You only need to complete the function **infixToPostfix()** that takes a string(Infix Expression) as a parameter and returns a string(postfix expression). The printing is done automatically by the driver code.

__Expected Time Complexity:__ O(|str|)

__Expected Auxiliary Space:__ O(|str|)

__Constraints:__
- 1 ≤ |str| ≤ 10<sup>5</sup>

### Solution
```java
import java.util.*;
import java.lang.*;
import java.io.*;

class InfixtoPostfix {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            System.out.println(new Solution().infixToPostfix(br.readLine().trim()));
        }
    }
}

class Solution {
    public static int prec(char c) {
        if (c == '^') {
            return 3;
        } else if (c == '*' || c == '/') {
            return 2;
        } else if (c == '+' || c == '-') {
            return 1;
        } else {
            return -1;
        }
    }

    public String infixToPostfix(String s) {
        Stack<Character> st = new Stack<>();
        String ans = new String();

        for (int i = 0; i < s.length(); i++) {
            if (Character.isLetterOrDigit(s.charAt(i))) {
                ans += s.charAt(i);
            } else if (s.charAt(i) == '(') {
                st.push(s.charAt(i));
            } else if (s.charAt(i) == ')') {
                while (!st.empty() && st.peek() != '(') {
                    ans += st.pop();
                }
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                while (!st.empty() && prec(st.peek()) >= prec(s.charAt(i))) {
                    ans += st.pop();
                }

                st.push(s.charAt(i));
            }
        }

        while (!st.empty()) {
            ans += st.pop();
        }
        return ans;
    }
}
```