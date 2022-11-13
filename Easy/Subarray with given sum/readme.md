# Subarray with given sum
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

__Example 1:__
```
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements
from 2nd position to 4th position
is 12.
```
__Example 2:__
```
Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements
from 1st position to 5th position
is 15.
```
__Your Task__

You don't need to read input or print anything. The task is to complete the function **subarraySum()** which takes arr, N and S as input parameters and returns an arraylist containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting only one element that is -1.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0, r = 0;
        vector<int> res;
        int cur_sum = 0;
        cur_sum = cur_sum + arr[r];
        while (r <= n)
        {
            if (cur_sum == s && l <= r)
            {
                res.push_back(l + 1);
                res.push_back(r + 1);
                return res;
            }
            else if (cur_sum < s)
            {
                r++;
                cur_sum = cur_sum + arr[r];
            }
            else
            {

                cur_sum = cur_sum - arr[l];
                l++;
            }
        }
        res.push_back(-1);
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
```