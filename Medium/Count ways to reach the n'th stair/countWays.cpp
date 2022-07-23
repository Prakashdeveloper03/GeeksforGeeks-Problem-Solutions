#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countWays(int n)
    {
        int p1 = 1, p2 = 1;
        int mod = 1e9 + 7;
        for (int i = 2; i <= n; i++)
        {
            int cr = (p2 + p1) % mod;
            p2 = p1;
            p1 = cr;
        }
        return (p1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl;
    }
    return 0;
}