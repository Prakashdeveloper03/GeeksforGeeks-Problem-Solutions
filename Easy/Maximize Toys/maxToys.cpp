#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        long long su = 0, nt = 0;
        for (int i = 0; i < N; i++)
        {
            su += arr[i];
            if (su <= K)
            {
                nt++;
            }
        }
        return nt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.toyCount(N, K, arr) << endl;
    }
    return 0;
}