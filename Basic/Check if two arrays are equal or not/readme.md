# Check if two arrays are equal or not
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

**Note:** If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

__Example 1:__
```
Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be
rearranged to {0,1,2,4,5}
```
__Example 2:__
```
Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only
one common value.
```
__Your Task__

Complete **check()** function which takes both the given array and their size as function arguments and **returns true** if the arrays are equal else **returns false**.The 0 and 1 printing is done by the driver code.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 10<sup>7</sup>
- 1 <= A[],B[] <= 10<sup>18</sup>

### Solution
```py
class Solution:
    def check(self,A,B,N):
        return sorted(A)==sorted(B)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        B = list(map(int, input().strip().split()))
        if Solution().check(A, B, N):
            print(1)
        else:
            print(0)
```

