# Maximum Profit
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

In the stock market, a person buys a stock and sells it on some future date. Given the stock prices of `N` days in an array `A[]` and a positive integer `K`, find out the maximum profit a person can make in at-most K transactions. A transaction is equivalent to (buying + selling) of a stock and new transaction can start only when the previous transaction has been completed.

__Example 1:__
```
Input: K = 2, N = 6
A = {10, 22, 5, 75, 65, 80}
Output: 87
Explaination:
1st transaction: buy at 10 and sell at 22.
2nd transaction : buy at 5 and sell at 80.
```
__Example 2:__
```
Input: K = 3, N = 4
A = {20, 580, 420, 900}
Output: 1040
Explaination: The trader can make at most 2
transactions and giving him a profit of 1040.
```
__Example 3:__
```
Input: K = 1, N = 5
A = {100, 90, 80, 50, 25}
Output: 0
Explaination: Selling price is decreasing
daily. So seller cannot have profit.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **maxProfit()** which takes the values K, N and the array A[] as input parameters and returns the maximum profit.

__Expected Time Complexity:__ O(N * K)

__Expected Auxiliary Space:__ O(N * K)

__Constraints:__
- 1 ≤ N ≤ 500
- 1 ≤ K ≤ 200
- 1 ≤ A[i] ≤ 1000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(int K, int N, int A[])
    {
        vector<vector<int>> dp(K + 1, vector<int>(N, 0));
        for (int i = 1; i <= K; i++)
        {
            int maxDiff = dp[i - 1][0] - A[0];
            for (int j = 1; j < N; j++)
            {
                dp[i][j] = max(dp[i][j - 1], maxDiff + A[j]);
                maxDiff = max(maxDiff, dp[i - 1][j] - A[j]);
            }
        }
        return dp[K][N - 1];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
```

