#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        stack<long long> st;
        vector<long long> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }

            ans[i] = (st.empty() ? -1 : st.top());

            st.push(arr[i]);
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution obj;
        vector<long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}