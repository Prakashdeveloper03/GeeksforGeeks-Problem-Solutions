#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void clonestack(stack<int> st, stack<int> &cloned)
    {
        cloned.swap(st);
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
        int arr[n];
        stack<int> st;
        vector<int> copy;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        reverse(copy.begin(), copy.end());
        Solution obj;
        stack<int> cloned;
        obj.clonestack(st, cloned);
        vector<int> check;
        while (cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        int flag = 0;
        if (check != copy)
            flag = 1;
        cout << 1 - flag << endl;
    }
    return 0;
}