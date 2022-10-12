#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string findLargest(int N, int S)
    {
        string res = "";
        if (S == 0 && N > 1)
            return "-1";

        while (S)
        {
            if (S > 9)
            {
                res += '9';
                S = S - 9;
                N--;
            }
            else
            {
                res += to_string(S);
                S = 0;
                N--;
            }
        }
        if (N < 0)
            return "-1";
        while (N)
        {
            res += '0';
            N--;
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        cin >> N >> S;

        Solution ob;
        cout << ob.findLargest(N, S) << "\n";
    }
    return 0;
}