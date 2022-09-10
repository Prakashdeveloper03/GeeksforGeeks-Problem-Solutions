# C++ Visible Numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of integers having n elements, return the numbers that occur more than floor(n/3) times in that array in increasing order.

__Example 1:__
```
Input: arr[] = {1, 2, 1, 3, 1, 2}
Output: 1
Explanation:
Here we have 3 diffrent type of element
1, 2 and 3. Now, You can count the frequency
of all the elements
1 -> 3
2 -> 2
3 -> 1
So, the only element which have frequency
greater than  ⌊n/3⌋ is {1}.
```
__Example 2:__
```
Input: arr[] = {1, 2, 2, 3, 2, 3, 2, 3}
Output: 2 3
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **compute()** that takes an array (arr), sizeOfArray (n), and return the array of the elements that occur more than ⌊n/3⌋ times in increasing order. The driver code automatically returns -1 in case of no elements ocuring more than ⌊n/3⌋ times.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 0 ≤ A[i] ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> compute(int arr[], int n)
    {
        unordered_map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto x : mp)
        {
            if (x.second > floor(n / 3))
            {
                v.push_back(x.first);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        vector<int> v;
        Solution ob;
        v = ob.compute(arr, n);
        if (v.size() == 0)
            v.push_back(-1);
        for (int i : v)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}
```