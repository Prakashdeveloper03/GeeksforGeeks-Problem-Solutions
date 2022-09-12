# Large Factorial
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given an array `A` of integers of length `N`. You need to calculate factorial of each number. The answer can be very large, so print it modulo `109 + 7`.

__Example 1:__
```
Input:
N = 5
A[] = {0, 1, 2, 3, 4}
Output:
1 1 2 6 24
Explanation:
Factorial of 0 is 1,
factorial of 1 is 1, factorial of 2 is 2,
factorial of 3 is 6 and so on.
```
__Example 2:__
```
Input:
N = 3
A[] = {5, 6, 3}
Output:
120 720 6
Explanation:
Factorial of 5 is 120,
factorial of 6 is 720,
factorial of 3 is 6.
```
__Your Task__

Complete the function **factorial()** which takes list a and single integer `n`, as input parameters and returns a list of factorials of the numbers in the list `a`.

__Expected Time Complexity:__ O(max(A) + N)

__Expected Auxiliary Space:__ O(max(A))

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 0 <= A[i] <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> factorial(vector<long long> a, int n)
    {
        long long d = *max_element(a.begin(), a.end());
        vector<long long> ans, dp(d + 1, 1);
        for (long long i = 1; i <= d; i++)
        {
            dp[i] = (i * dp[i - 1]) % 1000000007;
        }
        for (auto element : a)
        {
            ans.push_back(dp[element]);
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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<long long> res = obj.factorial(a, n);
        for (i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

