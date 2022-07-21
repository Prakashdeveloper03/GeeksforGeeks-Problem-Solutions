# Rearrange an array with O(1) extra space
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` of size `N` where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes **arr[arr[i]]**.

__Example 1:__
```
Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation:
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.
```
__Example 2:__
```
Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation:
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.
```
__Your Task__

You don't need to read input or print anything. The task is to complete the function **arrange()** which takes arr and N as input parameters and rearranges the elements in the array in-place.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>7</sup>
- 0 <= Arr[i] < N

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void arrange(long long arr[], int n)
    {
        int max = n;

        for (int i = 0; i < n; i++)
            arr[i] = (arr[arr[i]] % n) * n + arr[i];

        for (int i = 0; i < n; i++)
            arr[i] = arr[i] / n;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        Solution ob;
        ob.arrange(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
```