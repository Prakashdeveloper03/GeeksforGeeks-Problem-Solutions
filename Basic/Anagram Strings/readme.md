# Anagram Strings
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two strings S1 and S2 . Print "1" if both strings are anagrams otherwise print "0" .

**Note:** An anagram of a string is another string with exactly the same quantity of each character in it, in any order.

__Example 1:__
```
Input: S1 = "cdbkdub" , S2 = "dsbkcsdn"
Output: 0
Explanation: Length of S1 is not same
as length of S2.
```
__Example 2:__
```
Input: S1 = "geeks" , S2 = "skgee"
Output: 1
Explanation: S1 has the same quantity
of each character in it as S2.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **areAnagram()** which takes S1 and S2 as input and returns "1" if both strings are anagrams otherwise returns "0".

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(K)

__Constraints:__
- 1 <= |S1| <= 1000
- 1 <= |S2| <= 1000

### Solution
```java
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
```