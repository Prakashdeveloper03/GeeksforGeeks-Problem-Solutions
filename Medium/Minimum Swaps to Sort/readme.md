# Minimum Swaps to Sort
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.

__Example 1:__
```
Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
```
__Example 2:__
```
Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **minSwaps()** which takes the nums as input parameter and returns an integer denoting the minimum number of swaps required to sort the array. If the array is already sorted, return 0.

__Expected Time Complexity:__ O(nlogn)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 ≤ n ≤ 10<sup>5</sup>
- 1 ≤ nums<sub>i</sub> ≤ 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        vector<pair<int, int>> V;
        for (int i = 0; i < nums.size(); i++)
        {
            V.push_back({nums[i], i});
        }
        sort(V.begin(), V.end());
        int cnt = 0;
        for (int i = 0; i < V.size(); i++)
        {
            if (V[i].second == i)
                continue;
            else
            {
                swap(V[i], V[V[i].second]);
                i--;
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        Solution obj;
        int ans = obj.minSwaps(nums);
        cout << ans << endl;
    }
    return 0;
}
```

