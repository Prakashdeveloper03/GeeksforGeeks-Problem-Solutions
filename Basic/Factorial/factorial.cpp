#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int factorial(int N)
    {
        if (N == 0)
            return 1;
        return N * factorial(N - 1);
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
        cout << obj.factorial(n) << endl;
    }
    return 0;
}