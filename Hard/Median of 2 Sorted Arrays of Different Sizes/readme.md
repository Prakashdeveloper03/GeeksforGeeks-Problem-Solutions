# Median of 2 Sorted Arrays of Different Sizes
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two sorted arrays array1 and array2 of size `m` and `n` respectively. Find the median of the two sorted arrays.

__Example 1:__
```
Input:
m = 2, n = 4
array1[] = {4,6}
array2[] = {1,2,3,5}
Output: 3.5
```
__Example 2:__
```
Input:
m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}
Output: 5
Explanation: The middle element for
{1,2,3,5,6,7,9} is 5
```
__Your Task__

The task is to complete the function **MedianOfArrays()** that takes array1 and array2 as input and returns their median. 

__Expected Time Complexity:__ O(min(log n, log m))

__Expected Auxiliary Space:__ O(n + m) / 2)

__Constraints:__
- 0 ≤ m,n ≤ 10<sup>4</sup>
- 1 ≤ array1[i], array2[i] ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double MedianOfArrays(vector<int> &array1, vector<int> &array2)
    {
        vector<int> v;
        for (int i = 0; i < array1.size(); i++)
        {
            v.push_back(array1[i]);
        }

        for (int i = 0; i < array2.size(); i++)
        {
            v.push_back(array2[i]);
        }
        sort(v.begin(), v.end());
        return (v[v.size() / 2] + v[(v.size() - 1) / 2]) / 2.00;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> array1[i];
        }

        cin >> n;
        vector<int> array2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array2[i];
        }
        Solution obj;
        cout << obj.MedianOfArrays(array1, array2) << endl;
    }
    return 0;
}
```

