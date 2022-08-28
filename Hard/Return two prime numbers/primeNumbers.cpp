#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isPrime(int k)
    {
        for (int i = 2; i <= sqrt(k); i++)
        {
            if (k % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> primeDivision(int N)
    {
        vector<int> v;
        for (int i = 2; i <= N; i++)
        {
            if (isPrime(i))
            {
                if (isPrime(N - i))
                {
                    v.push_back(i);
                    v.push_back(N - i);
                    break;
                }
            }
        }
        return v;
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
        vector<int> res = obj.primeDivision(n);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}