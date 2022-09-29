# Minimum sum
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr` of size `N` such that each element is from the range 0 to 9. Find the minimum possible sum of two numbers formed using the elements of the array. All digits in the given array must be used to form the two numbers.

__Example 1:__
```
Input:
N = 6
Arr[] = {6, 8, 4, 5, 2, 3}
Output: 604
Explanation: The minimum sum is formed
by numbers 358 and 246.
```
__Example 2:__
```
Input:
N = 5
Arr[] = {5, 3, 0, 7, 4}
Output: 82
Explanation: The minimum sum is
formed by numbers 35 and 047.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **solve()** which takes arr[] and n as input parameters and returns the minimum possible sum. As the number can be large, return string presentation of the number without leading zeroes.

__Expected Time Complexity:__ O(N * logN)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>7</sup>
- 0 ≤ arr<sub>i</sub> ≤ 9

### Solution
```py
class Solution:
    def solve(self, arr, n):
        arr.sort()
        n1 = 0
        n2 = 0
        for i in range(n):
            if i % 2 == 0:
                n1 = n1 * 10 + arr[i]
            else:
                n2 = n2 * 10 + arr[i]
        return n1 + n2

if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.solve(arr, n)
        print(ans)
        tc -= 1
```