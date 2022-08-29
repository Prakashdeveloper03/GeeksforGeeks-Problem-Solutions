#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isDcreasing(int n)
    {
        string s = to_string(n);
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] < s[i - 1])
            {
                return false;
            }
        }
        return true;
    }

    int find(int N)
    {
        while (N)
        {
            if (isDcreasing(N))
            {
                return N;
            }
            N -= 1;
        }
        return N;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0;
}