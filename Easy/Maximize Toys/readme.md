# Maximize Toys
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` of length `N` consisting cost of N toys and an integer `K` depicting the amount with you. Your task is to find maximum number of toys you can buy with K amount.

__Example 1:__
```
Input:
N = 7
K = 50
arr[] = {1, 12, 5, 111, 200, 1000, 10}
Output: 4
Explaination: The costs of the toys
you can buy are 1, 12, 5 and 10.
```
__Example 2:__
```
Input:
N = 3
K = 100
arr[] = {20, 30, 50}
Output: 3
Explaination: You can buy all toys.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **toyCount()** which takes the integer `N`, integer `K` and the array `arr[]` as input parameters and returns the maximum count of toys you can have.

__Expected Time Complexity:__ O(N * Log(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ K, arr[i] ≤ 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        long long su = 0, nt = 0;
        for (int i = 0; i < N; i++)
        {
            su += arr[i];
            if (su <= K)
            {
                nt++;
            }
        }
        return nt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.toyCount(N, K, arr) << endl;
    }
    return 0;
}
```