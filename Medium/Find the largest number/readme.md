# Find the largest number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an integer `N` the task is to find the largest number which is smaller or equal to it and has its digits in non-decreasing order.

__Example 1:__
```
Input:
N = 200
Output:
199
Explanation:
If the given number
is 200, the largest
number which is smaller
or equal to it having
digits in non decreasing
order is 199.
```
__Example 2:__
```
Input:
N = 139
Output:
139
Explanation:
139 is itself in
non-decresing order.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **find()** which takes one integer value `N`, as input parameter and return the largest number which is smaller or equal to it and has its digits in non-decreasing order.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isDcreasing(int n)
    {
        string s = to_string(n);
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] < s[i - 1])
            {
                return false;
            }
        }
        return true;
    }

    int find(int N)
    {
        while (N)
        {
            if (isDcreasing(N))
            {
                return N;
            }
            N -= 1;
        }
        return N;
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
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0;
}
```