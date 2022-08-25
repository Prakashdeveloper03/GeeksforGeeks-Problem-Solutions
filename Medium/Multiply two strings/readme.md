# Multiply two strings
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two numbers as strings `s1` and `s2`. Calculate their Product.

**Note:** The numbers can be negative.

__Example 1:__
```
Input:
s1 = "33"
s2 = "2"
Output:
66
```
__Example 2:__
```
Input:
s1 = "11"
s2 = "23"
Output:
253
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **multiplyStrings()** which takes two strings s1 and s2 as input and returns their product as a string.

__Expected Time Complexity:__ O(n1 * n2)

__Expected Auxiliary Space:__ O(n1 * n2)

__Constraints:__
- 1 ≤ length of s1 and s2 ≤ 10<sup>3</sup>

### Solution
```py
class Solution:
    def multiplyStrings(self, s1, s2):
        return int(s1) * int(s2)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b = input().split()
        print(Solution().multiplyStrings(a.strip(), b.strip()))
```