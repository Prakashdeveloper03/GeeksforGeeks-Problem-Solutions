# Reverse a String
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given a string `s`. You need to reverse the string.

__Example 1:__
```
Input:
s = Geeks
Output: skeeG
```
__Example 2:__
```
Input:
s = for
Output: rof
```
__Your Task__

You only need to complete the function **reverseWord()** that takes s as parameter and returns the reversed string.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= |s| <= 10000

### Solution
```py
def reverseWord(s):
    return s[::-1]

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        print(reverseWord(s))
```

