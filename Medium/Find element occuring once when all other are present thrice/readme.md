# Find element occuring once when all other are present thrice
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once. Find that element which occurs once.

__Example 1:__
```
Input:
N = 4
arr[] = {1, 10, 1, 1}
Output:
10
Explanation:
10 occurs once in the array while the other
element 1 occurs thrice.
```
__Example 2:__
```
Input:
N = 10
arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}
Output:
3
Explanation:
All elements except 3 occurs thrice in the array.
```
__Your Task__

The task is to complete the function **singleElement()** which finds and returns the element occuring once in the array.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>6</sup>
- -10<sup>9</sup> ≤ A[i] ≤ 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleElement(int arr[], int N)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (mp[arr[i]] == 1)
                return arr[i];
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.singleElement(arr, N);
        cout << "\n";
    }
    return 0;
}
```