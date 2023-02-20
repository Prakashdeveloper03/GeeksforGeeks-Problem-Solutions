# Java Collections | Set 6 (Stack)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string `str`. Calculate the total number of unique substrings of the given string.

__Example 1:__
```
Input:
abd

Ouput:
6

Explanation:
str = abd. The 6 unique substrings
are {a, b, d, ab, bd, abd}.
```

__Example 2:__
```
Input:
jaja

Ouput:
7

Explanation:
str = jaja. The substrings will be j, a, j, a,
ja, aj, ja, jaj, aja, jaja. Out of these the
unique are j, a, ja, aj, jaj, aja, jaja.
```

**Your Task:**

You need to complete the function **unique_substring()** that takes str as a parameter and returns the count of unique substrings.

__Constraints:__
- 1 <= |str| <= 100

### Solution
```java
import java.io.*;
import java.util.*;

class uniqueSubstrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String str = sc.nextLine();
            Solution ob = new Solution();
            System.out.println(ob.unique_substring(str));
        }
        sc.close();
    }
}

class Solution {
    public int unique_substring(String str) {
        HashSet<String> set = new HashSet<String>();
        String ans = "";
        for (int i = 0; i < str.length(); i++) {
            ans += str.charAt(i);
            set.add(ans);
            for (int j = i + 1; j < str.length(); j++) {
                ans += str.charAt(j);
                set.add(ans);
            }
            ans = "";
        }
        return set.size();
    }
}
```