# Smallest Positive missing number
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

__Example 1:__
```
Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
```
__Example 2:__
```
Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2.
```
__Your Task__

The task is to complete the function **missingNumber()** which returns the smallest positive missing number in the array.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>6</sup>
- -10<sup>6</sup> <= arr[i] <= 10<sup>6</sup>

### Solution
```py
class Solution:
    def missingNumber(self, arr):
        arr.sort()
        s = 1
        for i in range(len(arr)):
            if s == arr[i]:
                s += 1
        return s

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().missingNumber(arr))
```