#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isprime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i <= (sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    vector<int> primeRange(int M, int N)
    {
        vector<int> ans;
        for (int i = M; i <= N; i++)
        {
            if (isprime(i) == true)
            {
                ans.push_back(i);
            }
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
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans)
            cout << u << " ";
        cout << "\n";
    }
}