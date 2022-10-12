# Form a number divisible by 3 using array digits
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr` of integers of length `N`, the task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible then print “1” and if not print “0”.

__Example 1:__
```
Input: N = 3
arr = {40, 50, 90}
Output: 1
Explaination: One such number is 405900.
```
__Example 2:__
```
Input: N = 2
arr = {1, 4}
Output: 0
Explaination: The numbers we can form
are 14 and 41. But neither of them are
divisible by 3.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **isPossible()** which takes N and arr as input parameters and returns 1 if we can form a number by the digits of the given number, otherwise returns 0.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N, arr[i] ≤ 10<sup>5</sup>

### Solution
```py
class Solution:
    def isPossible(self, N, arr):
        return 1 if sum(arr) % 3 == 0 else 0

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for i in range(N):
            arr[i] = int(arr[i])
        ob = Solution()
        print(ob.isPossible(N, arr))
```

