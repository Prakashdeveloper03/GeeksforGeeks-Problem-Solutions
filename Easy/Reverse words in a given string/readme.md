# Reverse words in a given string
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

__Example 1:__
```
Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
```
__Example 2:__
```
Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr
```
__Your Task__

You dont need to read input or print anything. Complete the function reverseWords() which takes string S as input parameter and returns a string containing the words in reversed order. Each word in the returning string should also be separated by '.'

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(|S|)

__Constraints:__
- 1 <= |S| <= 2000

### Solution
```py
class Solution:
    def reverseWords(self, S):
        return ".".join(S.split(".")[-1::-1])

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input()
        print(Solution().reverseWords(S))
```

