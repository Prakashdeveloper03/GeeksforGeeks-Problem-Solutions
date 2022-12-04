# Wave Array
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a sorted array `arr[]` of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

If there are multiple solutions, find the lexicographically smallest one.

__Example 1:__
```
Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after
sorting it in wave form are
2 1 4 3 5.
```
__Example 2:__
```
Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after
sorting it in wave form are
4 2 8 7 10 9.
```
__Your Task__

The task is to complete the function **convertToWave()**, which converts the given array to a wave array.

**Note:** The given array is sorted in ascending order, and you don't need to return anything to make changes in the original array itself.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ n ≤ 10<sup>6</sup>
- 0 ≤ arr[i] ≤10<sup>7</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void convertToWave(int n, vector<int> &arr)
    {
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
                swap(arr[i], arr[i + 1]);
        }

        else
        {
            for (int i = 0; i < n - 1; i = i + 2)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.convertToWave(n, a);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
```

