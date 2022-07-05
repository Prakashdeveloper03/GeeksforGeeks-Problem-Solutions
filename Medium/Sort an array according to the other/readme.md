# Sort an array according to the other
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two integer arrays `A1[]` and `A2[]` of size `N` and `M` respectively. Sort the first array `A1[]` such that all the relative positions of the elements in the first array are the same as the elements in the second array `A2[]`.
See example for better understanding.

**Note:** If elements are repeated in the second array, consider their first occurance only.

__Example 1:__
```
N = 11
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output:
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are
sorted according to A2[]. So 2 comes first
then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in
sorted order.
```
__Example 2:__
```
Input:
N = 11
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {99, 22, 444, 56}
Output:
1 1 2 2 3 5 6 7 8 8 9
Explanation: No A1[] elements are in A2[]
so we cannot sort A1[] according to A2[].
Hence we sort the elements in non-decreasing
order.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **sortA1ByA2()** which takes the array A1[ ], array A2[ ] and their respective size N and M as input parameters and returns the sorted array A1[ ] such that the relative positions of the elements in A1[ ] are same as the elements in A2[ ]. For the elements not present in A2[ ] but in A1[ ], it appends them at the last in increasing order.

__Expected Time Complexity:__ O(N * Log(N))

__Expected Auxiliary Space:__ O(max(A))

__Constraints:__
- 1 <= N, M <= 10<sup>6</sup>
- 1 <= A1[i], A2[i] <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortA1ByA2(vector<int> A1, int n, vector<int> A2, int m)
    {
        vector<int> ans;
        map<int, int> map1;
        for (int i = 0; i < n; i++)
        {
            map1[A1[i]]++;
        }

        for (int i = 0; i < m; i++)
        {
            if (map1.find(A2[i]) != map1.end())
            {
                while (map1[A2[i]]--)
                {
                    ans.push_back(A2[i]);
                }
                map1.erase(A2[i]);
            }
        }

        for (auto x : map1)
        {
            int val = x.second;
            int key = x.first;
            while (val--)
            {

                ans.push_back(key);
            }
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
        int n, m, i;
        cin >> n >> m;
        vector<int> a1(n);
        vector<int> a2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }
        Solution obj;
        vector<int> res = obj.sortA1ByA2(a1, n, a2, m);
        for (i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

