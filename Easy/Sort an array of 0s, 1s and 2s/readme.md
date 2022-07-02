# Sort an array of 0s, 1s and 2s
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of size `N` containing only 0s, 1s, and 2s; sort the array in ascending order.

__Example 1:__
```
Input:
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated
into ascending order.
```
__Example 2:__
```
Input:
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated
into ascending order.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **sort012()** that takes an array arr and N as input parameters and sorts the array in-place.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>6</sup>
- 0 <= A[i] <= 2

### Solution
```py
class Solution:
    def sort012(self, arr, n):
        arr = arr.sort()
        return arr

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().sort012(arr, n)
        for i in res:
            print(i, end=" ")
        print()
```

