# Kth smallest element
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` and an integer `K` where K is **smaller than size of array**, the task is to find the K<sup>th</sup> smallest element in the given array. It is given that all array elements are distinct.

__Example 1:__
```
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given
array is 7.
```
__Example 2:__
```
Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given
array is 15.
```
__Your Task__

You don't have to read input or print anything. Your task is to complete the function **kthSmallest()** which takes the array `arr[]`, integers `l` and `r` denoting the starting and ending index of the array and an integer K as input and returns the K<sup>th</sup> smallest element.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(log(n))

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 1 <= arr[i] <= 10<sup>5</sup>
- 1 <= K <= N

### Solution
```py
class Solution:
    def kthSmallest(self,arr, l, r, k):
       arr.sort()
       return arr[k - 1]

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        print(Solution().kthSmallest(arr, 0, n - 1, k))
```