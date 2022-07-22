#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int t[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (X[i - 1] == Y[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        int ans = (m + n) - t[m][n];
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        Solution obj;
        cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size()) << endl;
    }
    return 0;
}