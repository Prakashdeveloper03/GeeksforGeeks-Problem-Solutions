#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> result;
    vector<int> Reverse(stack<int> st)
    {
        if (st.empty())
        {
            return result;
        }
        result.push_back(st.top());
        st.pop();
        return Reverse(st);
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
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        Solution obj;
        vector<int> res = obj.Reverse(st);
        for (i = 0; i < n; i++)
        {
            cout << res[i];
            if (i != n - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}