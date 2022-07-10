# Count of sum of consecutives
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number `N`, the task is find the number of ways to represent this number as a sum of 2 or more consecutive natural numbers.

__Example 1:__
```
Input:
N = 10
Output:
1
Explanation:
10 can be reprsented as sum of two or
more consecutive numbers in only one
way. 10 = 1+2+3+4.
```
__Example 2:__
```
Input:
N = 15
Output:
3
Explanation:
15 can be reprsented as sum of two or
more consecutive numbers in 3 ways.
(15 = 1+2+3+4+5); (15 = 4+5+6); (15 = 7+8).
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **getCount()** which takes an Integer n as input and returns the answer.

__Expected Time Complexity:__ O(sqrt(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>8</sup>

### Solution
```py
import math

class Solution:
    def getCount(self, N):
        counter = 0
        maxNum = math.ceil((math.sqrt(8 * N + 1) - 1) / 2)
        for num in range(2, maxNum + 1):
            res = N / num - (num - 1) / 2
            if res == round(res):
                counter += 1
        return counter

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(Solution().getCount(n))
```