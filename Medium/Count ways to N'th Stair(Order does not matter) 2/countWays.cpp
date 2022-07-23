#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthStair(int n)
    {
        return n / 2 + 1;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.nthStair(n);
        cout << ans << "\n";
    }
    return 0;
}