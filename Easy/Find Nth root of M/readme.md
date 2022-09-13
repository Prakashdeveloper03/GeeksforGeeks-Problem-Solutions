# Find Nth root of M
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given 2 numbers (n , m); the task is to find <sup>n</sup>√m (nth root of m).

__Example 1:__
```
Input: n = 2, m = 9
Output: 3
Explanation: 3 ^ 2 = 9
```
__Example 2:__
```
Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not
integer.
```
__Your Task__

You don't need to read or print anyhting. Your task is to complete the function **NthRoot()** which takes n and m as input parameter and returns the nth root of m. If the root is not integer then returns -1.

__Expected Time Complexity:__ O(n * log(m))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= n <= 30
- 1 <= m <= 10<sup>9</sup>

### Solution
```py
import math
class Solution:
    def NthRoot(self, n, m):
        ans = pow(m, 1 / n)
        ans_floor = math.floor(ans)
        ans_ceil = math.ceil(ans)
        if math.pow(ans_floor, n) == m:
            return ans_floor
        elif math.pow(ans_ceil, n) == m:
            return ans_ceil
        else:
            return -1

if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        n = int(input())
        m = int(input())
        ob = Solution()
        ans = ob.NthRoot(n, m)
        print(ans)
```

