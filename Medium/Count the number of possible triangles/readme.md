# Count the number of possible triangles
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an unsorted array `arr[]` of `n` positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles.

__Example 1:__
```
Input:
n = 3
arr[] = {3, 5, 4}
Output:
1
Explanation:
A triangle is possible
with all the elements 5, 3 and 4.
```

__Example 2:__
```
Input:
n = 5
arr[] = {6, 4, 9, 7, 8}
Output:
10
Explanation:
There are 10 triangles
possible  with the given elements like
(6,4,9), (6,7,8),...
```

__Your Task__

This is a function problem. You only need to complete the function **findNumberOfTriangles()** that takes arr[] and n as input parameters and returns the count of total possible triangles.

__Expected Time Complexity:__ O(N * N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 3 <= n <= 10<sup>3</sup>
- 1 <= arr[i] <= 10<sup>3</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNumberOfTriangles(int arr[], int n)
    {
        int ans = 0;
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n - 2; i++)
        {
            int largerSide = arr[i];
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (arr[l] + arr[r] > largerSide)
                {
                    ans += r - l;
                    l++;
                }
                else
                    r--;
            }
        }
        return ans;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.findNumberOfTriangles(arr, n) << endl;
    }
    return 0;
}
```