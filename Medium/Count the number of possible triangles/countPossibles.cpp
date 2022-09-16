#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNumberOfTriangles(int arr[], int n)
    {
        int ans = 0;
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n - 2; i++)
        {
            int largerSide = arr[i];
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (arr[l] + arr[r] > largerSide)
                {
                    ans += r - l;
                    l++;
                }
                else
                    r--;
            }
        }
        return ans;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.findNumberOfTriangles(arr, n) << endl;
    }
    return 0;
}