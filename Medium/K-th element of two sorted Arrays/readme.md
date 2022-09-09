# K-th element of two sorted Arrays
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two sorted arrays `arr1` and `arr2` of size `N` and `M` respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.

__Example 1:__
```
Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
```
__Example 2:__
```
Input:
arr1[] = {100, 112, 256, 349, 770}
arr2[] = {72, 86, 113, 119, 265, 445, 892}
k = 7
Output:
256
Explanation:
Final sorted array is - 72, 86, 100, 112,
113, 119, 256, 265, 349, 445, 770, 892
7th element of this array is 256.
```
__Your Task__

The task is to complete the function **singleElement()** which finds and returns the element occuring once in the array.

__Expected Time Complexity:__ O(Log(N) + Log(M))

__Expected Auxiliary Space:__ O(Log(N))

__Constraints:__
- 1 ≤ N, M ≤ 10<sup>6</sup>
- 1 <= arr1<sub>i</sub>, arr2<sub>i</sub> < INT_MAX
- 1 <= K <= N + M

### Solution
```py
class Solution:
    def kthElement(self, arr1, arr2, n, m, k):
        res = arr1 + arr2
        res.sort()
        return res[k - 1]

def main():
    T = int(input())
    while T > 0:
        sz = [int(x) for x in input().strip().split()]
        n, m, k = sz[0], sz[1], sz[2]
        a = [int(x) for x in input().strip().split()]
        b = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.kthElement(a, b, n, m, k))
        T -= 1

if __name__ == "__main__":
    main()
```