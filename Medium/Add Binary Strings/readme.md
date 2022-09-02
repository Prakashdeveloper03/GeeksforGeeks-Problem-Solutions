# A Simple Fraction
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two binary strings `A` and `B` consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.

**Note:** The input strings may contain leading zeros but the output string should not have any leading zeros.

__Example 1:__
```
Input:
A = "1101", B = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
```
__Example 2:__
```
Input:
A = "10", B = "01"
Output: 11
Explanation:
  10
+ 01
  11
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **addBinary()** which takes 2 binary string A and B and returns a binary string denoting the addition of both the strings.

__Expected Time Complexity:__ O(max(|A|, |B|))

__Expected Auxiliary Space:__ O(max(|A|, |B|))

__Constraints:__
- 1 ≤ |A|, |B| ≤ 10<sup>6</sup>

### Solution
```py
class Solution:
    def addBinary(self, A, B):
        return bin(int(A, base=2) + int(B, base=2))[2:]

if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        a, b = input().split(" ")
        ob = Solution()
        answer = ob.addBinary(a, b)
        print(answer)
```