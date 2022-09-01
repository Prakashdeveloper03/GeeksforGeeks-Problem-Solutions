# Sum of two large numbers
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two strings denoting non-negative numbers X and Y. Calculate the sum of X and Y.

__Example 1:__
```
Input:
X = "25", Y = "23"
Output:
48
Explanation:
The sum of 25 and 23 is 48.
```
__Example 2:__
```
Input:
X = "2500", Y = "23"
Output:
2523
Explanation:
The sum of 2500 and 23 is 2523.
```
__Your Task__

Your task is to complete the function **findSum()** which takes two strings as inputs and returns the string without leading zeros. You do not need to take any input or print anything.

__Expected Time Complexity:__  O(|X| + |Y|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= |X|, |Y| <= 10<sup>5</sup>

### Solution
```py
class Solution:
    def findSum(self, X, Y):
        return str(int(X) + int(Y))

if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        x = input()
        y = input()
        ob = Solution()
        answer = ob.findSum(x, y)
        print(answer)
```