# nCr
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 10<sup>9</sup+7.

__Example 1:__
```
Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3.
```
__Example 2:__
```
Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.
```
__Your Task__

You do not need to take input or print anything. Your task is to complete the function **nCr()** which takes n and r as input parameters and returns nCr modulo 10<sup>9</sup>+7.

__Expected Time Complexity:__ O(n * r)

__Expected Auxiliary Space:__ O(r)

__Constraints:__
- 1 ≤ n ≤ 1000
- 1 ≤ r ≤ 800

### Solution
```py
from math import factorial
class Solution:
    def nCr(self, n, r):
        if r > n:
            return 0
        x = factorial(n)
        y = factorial(r)
        z = factorial(n - r)
        return (x //(y * z)) % 1000000007

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = int(input())
        print(Solution().nCr(n , r))
```