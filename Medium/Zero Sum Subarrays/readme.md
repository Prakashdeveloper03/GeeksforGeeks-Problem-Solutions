# Zero Sum Subarrays
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.

__Example 1:__
```
Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are
[0], [0], [0], [0], [0,0], and [0,0].
```
__Example 2:__
```
Input:
n = 10
arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
Output: 4
Explanation: The 4 subarrays are [-1 -3 4]
[-2 2], [2 4 6 -12], and [-1 -3 4 -2 2]
```
__Your Task__

You don't need to read input or print anything. Complete the function **findSubarray()** that takes the array arr and its size n as input parameters and returns the total number of sub-arrays with 0 sum.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 <= n <= 10<sup>7</sup>
- -10<sup>10</sup> <= arr<sub>i</sub> <= 10<sup>10</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    ll findSubarray(vector<ll> arr, int n)
    {
        unordered_map<ll, ll> m;
        m[0] = 1;
        ll count = 0, s = 0;
        for (auto i : arr)
            s += i, count += ++m[s] - 1;
        return count;
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
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.findSubarray(arr, n) << "\n";
    }
    return 0;
}
```

