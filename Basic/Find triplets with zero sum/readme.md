# Find triplets with zero sum
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` of `n` integers. Check whether it contains a triplet that sums up to zero.

__Example 1:__
```
Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.
```
__Example 2:__
```
Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the boolean function **findTriplets()** which takes the array arr[] and the size of the array (n) as inputs and print 1 if the function returns true else print 0 if the function returns false.

__Expected Time Complexity:__ O(n<sup>2</sup>)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ n ≤ 10<sup>4</sup>
- -10<sup>6</sup> ≤ a[i] ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool findTriplets(int arr[], int n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            v[i] = arr[i];

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            int lo = i + 1, hi = n - 1, sum = 0 - (v[i]);
            while (lo < hi)
            {
                if (v[lo] + v[hi] == sum)
                {
                    return true;
                }
                else if (v[lo] + v[hi] > sum)
                    hi--;
                else
                    lo++;
            }
        }
        return false;
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        if (obj.findTriplets(arr, n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
```