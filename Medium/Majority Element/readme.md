# Majority Element
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size **N is an element that appears more than N/2 times in the array**.

__Example 1:__
```
Input:
N = 3
A[] = {1,2,3}
Output:
-1
Explanation:
Since, each element in
{1,2,3} appears only once so there
is no majority element.
```
__Example 2:__
```
Input:
N = 5
A[] = {3,1,3,3,2}
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is
the majority element.
```
__Your Task__

The task is to complete the function **majorityElement()** which returns the majority element in the array. If no majority exists, return -1.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>7</sup>
- 0 <= A[i] <= 10<sup>6</sup>

### Solution
```py
class Solution:
    def majorityElement(self, A, N):
        my_hash = {}
        for x in A:
            my_hash[x] = my_hash.get(x, 0) + 1
        return next((y for y, value in my_hash.items() if value > int(N / 2)), -1)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().majorityElement(arr, n))
```