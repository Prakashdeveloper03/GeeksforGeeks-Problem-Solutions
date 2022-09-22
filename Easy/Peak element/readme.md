# Peak element
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists). Given an array arr[] of size N, **Return the index of any one of its peak elements**.

**Note:** The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

__Example 1:__
```
Input:
N = 3
arr[] = {1,2,3}
Possible Answer: 2
Generated Output: 1
Explanation: index 2 is 3.
It is the peak element as it is
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0.
```
__Example 2:__
```
Input:
N = 2
arr[] = {3,4}
Possible Answer: 1
Output: 1
Explanation: 4 (at index 1) is the
peak element as it is greater than
its only neighbour element 3.
If 2 is returned then the generated output will be 1 else 0.
```
__Your Task__

You don't have to read input or print anything. Complete the function **peakElement()** which takes the array arr[] and its size N as input parameters and return the index of any one of its peak elements.

__Expected Time Complexity:__ O(log N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ A[i] ≤ 10<sup>6</sup>

### Solution
```py
class Solution:
    def peakElement(self, arr):
        return arr.index(max(arr))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        index = Solution().peakElement(arr)
        flag = False
        if index < 0 and index >= n:
            flag = False
        elif index == 0 and n == 1:
            flag = True
        elif index == 0 and arr[index] >= arr[index + 1]:
            flag = True
        elif index == n - 1 and arr[index] >= arr[index - 1]:
            flag = True
        elif arr[index - 1] <= arr[index] and arr[index] >= arr[index + 1]:
            flag = True
        else:
            flag = False

        if flag:
            print(1)
        else:
            print(0)
```

