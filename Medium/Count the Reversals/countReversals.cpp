#include <bits/stdc++.h>
using namespace std;

int countRev(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countRev(s) << '\n';
    }
}

int countRev(string s)
{
    int n = s.length();
    if (n % 2 != 0)
    {
        return -1;
    }
    int count = 0;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                s[i] = '{';
                st.push(s[i]);
                count++;
            }
            else
            {
                st.pop();
            }
        }
    }
    return (st.size() / 2) + count;
}