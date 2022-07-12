#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int atoi(string str)
    {
        int n = str.length() - 1;
        int res = 0;
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '-')
            {
                if (flag == true)
                {
                    return -1;
                }
                flag = true;
                n--;
                continue;
            }
            int el = str[i] - '0';
            if (el >= 0 && el <= 9)
            {
                res += el * pow(10, n);
                n--;
            }
            else
            {
                return -1;
            }
        }
        if (flag)
        {
            return (-1) * res;
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.atoi(s) << endl;
    }
    return 0;
}