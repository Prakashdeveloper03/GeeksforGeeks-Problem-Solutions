# Remove duplicate elements from sorted Array
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a sorted array `A[]` of size `N`, delete all the duplicates elements from A[].

**Note:** Don't use set or HashMap to solve the problem.

__Example 1:__
```
Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.
```
__Example 2:__
```
Input:
N = 3
Array = {1, 2, 2}
Output: 1 2 
```
__Your Task__

You don't need to read input or print anything. Complete the function **remove_duplicate()** which takes the array A[] and its size N as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the new modified size of the array.

**Note:** The generated output will print all the elements of the modified array from index 0 to X-1.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>4</sup>
- 1 ≤ A[i] ≤ 10<sup>6</sup>

### Solution
```py
class Solution:
    def remove_duplicate(self, A, N):
        itr = 0
        while (len(A) - 1) > itr:
            if A[itr] == A[itr + 1]:
                A.pop(itr + 1)
            else:
                itr += 1
        return len(A)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        n = Solution().remove_duplicate(A, N)
        for i in range(n):
            print(A[i], end=" ")
        print()
```

