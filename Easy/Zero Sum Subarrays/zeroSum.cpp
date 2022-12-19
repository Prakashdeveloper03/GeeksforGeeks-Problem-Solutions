#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    ll findSubarray(vector<ll> arr, int n)
    {
        unordered_map<ll, ll> m;
        m[0] = 1;
        ll count = 0, s = 0;
        for (auto i : arr)
            s += i, count += ++m[s] - 1;
        return count;
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
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.findSubarray(arr, n) << "\n";
    }
    return 0;
}