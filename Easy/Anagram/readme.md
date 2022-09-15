# Anagram
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two strings `a` and `b` consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

__Example 1:__
```
Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have samecharacters with
same frequency. So, both are anagrams.
```
__Example 2:__
```
Input:a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings are
not same, so they are not anagrams.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **isAnagram()** which takes the string `a` and string `b` as input parameter and check if the two strings are an anagram of each other. The function returns true if the strings are anagram else it returns false.

**Note:** In python, you have to return True or False.

__Expected Time Complexity:__ O(|a|+|b|)

__Expected Auxiliary Space:__ O(Number of distinct characters)

__Constraints:__
- 1 ≤ |a|,|b| ≤ 10<sup>5</sup>

### Solution
```py
from collections import Counter

class Solution:
    def isAnagram(self, a, b):
        return Counter(a) == Counter(b)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b = input().strip().split()
        if Solution().isAnagram(a, b):
            print("YES")
        else:
            print("NO")
```

