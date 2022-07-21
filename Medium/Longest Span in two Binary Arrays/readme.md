# Longest Span in two Binary Arrays
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two binary arrays arr1[] and arr2[] of same size N. Find length of the longest common span [i, j] where j>=i such that arr1[i] + arr1[i+1] + …. + arr1[j] = arr2[i] + arr2[i+1] + …. + arr2[j].

__Example:__
```
Input:
N = 6
Arr1[] = {0, 1, 0, 0, 0, 0}
Arr2[] = {1, 0, 1, 0, 0, 1}
Output: 4
Explanation: The longest span with same
sum is from index 1 to 4 following zero
based indexing.
```
__Your Task__

You don't need to read input or print anything. Complete the function **longestCommonSum()** which takes two arrays arr1, arr2 and integer n as input parameters and returns the length of the longest common span.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 0 <= Arr1[i], Arr2[i] <= 1

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n)
    {
        int ans = 0;
        int s1 = 0, s2 = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            s1 += (arr1[i] - arr2[i]);
            if (s1 == 0)
                ans = i + 1;
            if (m.find(s1) != m.end())
                ans = max(ans, i - m[s1]);
            if (m.find(s1) == m.end())
                m[s1] = i;
        }
        return ans;
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
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
```