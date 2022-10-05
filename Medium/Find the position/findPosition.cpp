#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unsigned long long int findpos(string n)
    {
        unsigned long long int sum = 0, p = 1;
        for (int i = n.size() - 1; i >= 0; i--)
        {
            if (n[i] == '7')
                sum += p;
            p = p * 2;
        }
        return sum + pow(2, n.size()) - 1;
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
        Solution obj;
        cout << obj.findpos(s) << endl;
    }
    return 0;
}