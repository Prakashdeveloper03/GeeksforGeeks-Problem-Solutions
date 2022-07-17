# Find all possible palindromic partitions of a String
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a String S, Find all possible Palindromic partitions of the given String.

__Example 1:__
```
Input:
S = "geeks"
Output:
g e e k s
g ee k s
Explanation:
All possible palindromic partitions
are printed.
```
__Example 2:__
```
Input:
S = "madam"
Output:
m a d a m
m ada m
madam
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **allPalindromicPerms()** which takes a String S as input parameter and returns a list of lists denoting all the possible palindromic partitions in the order of their appearance in the original string.

__Expected Time Complexity:__ O(N*2<sup>N</sup>)

__Expected Auxiliary Space:__ O(N<sup>2</sup>)

__Constraints:__
- 1 <= |S| <= 20

### Solution
```java
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
```