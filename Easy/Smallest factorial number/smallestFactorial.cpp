#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int mid, int n)
    {
        int counter = 0, x = mid;
        while (x)
        {
            x /= 5;
            counter += x;
        }
        return (counter >= n);
    }

    int findNum(int n)
    {
        int low = 1, high = 1e9, mid, ans;
        while (high >= low)
        {
            mid = low + (high - low) / 2;
            if (check(mid, n))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
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
        Solution obj;
        cout << obj.findNum(n) << endl;
    }
    return 0;
}