# Print first n Fibonacci Numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

__Example 1:__
```
Input:
N = 5
Output: 1 1 2 3 5
```
__Example 2:__
```
Input:
N = 7
Output: 1 1 2 3 5 8 13
```
__Your Task__

Your task is to complete **printFibb()** which takes single argument N and returns a list of first N Fibonacci numbers.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 84

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> printFibb(int n)
    {
        vector<long long> ans(n);
        ans[0] = 1;
        ans[1] = 1;
        for (int i = 2; i < n; i++)
        {
            ans[i] = ans[i - 2] + ans[i - 1];
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
        int n;
        cin >> n;
        Solution obj;
        vector<long long> ans = obj.printFibb(n);
        for (long long i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
```