#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long low = 0;
        long high = 1e9;
        while (low <= high)
        {
            long mid = (high - low) / 2 + low;
            long total = 0, count = 0;

            for (int itr = 0; itr < N; itr++)
            {
                count = H[itr] + A[itr] * mid;
                if (count >= L)
                    total += count;
            }

            if (total >= M)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long N, M, L;
        cin >> N >> M >> L;
        long H[N], A[N];
        for (long i = 0; i < N; i++)
            cin >> H[i] >> A[i];
        Solution obj;
        cout << obj.buzzTime(N, M, L, H, A) << endl;
    }
    return 0;
}