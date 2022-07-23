#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isDivisible(string s)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                    even++;
            }
            else
            {
                if (s[i] == '1')
                    odd++;
            }
        }
        return abs(odd - even) % 3 == 0;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
    return 0;
}