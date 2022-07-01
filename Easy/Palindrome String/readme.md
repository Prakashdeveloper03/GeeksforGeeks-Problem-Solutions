# Palindrome String
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string `S`, check if it is palindrome or not.

__Example 1:__
```
Input: S = "abba"
Output: 1
Explanation: S is a palindrome
```
__Example 2:__
```
Input: S = "abc"
Output: 0
Explanation: S is not a palindrome
```
__Your Task__

You don't need to read input or print anything. Complete the function **isPlaindrome()** which accepts string S and returns an integervalue 1 or 0.

__Expected Time Complexity:__ O(Length of S)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= Length of S <= 10<sup>5</sup>

### Solution
```py
class Solution:
	def isPalindrome(self, S):
		return 1 if S == S[::-1] else 0

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input()
        print(Solution().isPalindrome(S))
```

