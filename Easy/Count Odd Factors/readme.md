# Count Odd Factors
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an integer `N`, count the numbers having **an odd number of factors from 1 to N (inclusive)**.

__Example 1:__
```
Input:
N = 5
Output:
2
Explanation:
From 1 - 5 only 2 numbers,
1 and 4 are having odd number
of factors.
```
__Example 2:__
```
Input:
N = 1
Output:
1
Explanation:
1 have only 1(odd)
factor
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **count()** which takes an integer `N` as input parameters and returns an integer, the total count of numbers from 1 to N having an odd number of factors.

__Expected Time Complexity:__ O(sqrt(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 ≤ N ≤ 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count(int N)
    {
        int res = abs(sqrt(N));
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
        cin >> n;
        Solution obj;
        cout << obj.count(n) << endl;
    }
    return 0;
}
```

