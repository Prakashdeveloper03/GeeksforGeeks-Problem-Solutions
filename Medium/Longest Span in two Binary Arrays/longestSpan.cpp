#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n)
    {
        int ans = 0;
        int s1 = 0, s2 = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            s1 += (arr1[i] - arr2[i]);
            if (s1 == 0)
                ans = i + 1;
            if (m.find(s1) != m.end())
                ans = max(ans, i - m[s1]);
            if (m.find(s1) == m.end())
                m[s1] = i;
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
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}