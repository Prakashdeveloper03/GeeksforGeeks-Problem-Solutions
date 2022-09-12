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