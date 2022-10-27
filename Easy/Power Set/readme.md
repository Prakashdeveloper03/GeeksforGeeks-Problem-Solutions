# Power Set
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.

__Example 1:__
```
Input : str = "abc"
Output: a ab abc ac b bc c
Explanation : There are 7 subsequences that
can be formed from abc.
```
__Example 2:__
```
Input: str = "aa"
Output: a a aa
Explanation : There are 3 subsequences that
can be formed from aa.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **AllPossibleStrings()** which takes S as the input parameter and returns a list of all possible substrings(non-empty) that can be formed from S in lexicographically-sorted order.

__Expected Time Complexity:__ O(2<sup>n</sup>)

__Expected Auxiliary Space:__ O(n * 2<sup>n</sup>)

__Constraints:__
- 1 <= Length of String <= 16

### Solution
```py
class Solution:
    def AllPossibleStrings(self, s):
        n = len(s)
        ans = []
        m = 1 << n
        ans.extend(
            "".join(s[i] for i in range(n) if num & 1 << i) for num in range(1, m)
        )
        return sorted(ans)

if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        s = input()
        ob = Solution()
        ans = ob.AllPossibleStrings(s)
        for i in ans:
            print(i, end=" ")
        print()
```