#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fibonacciPrime(string N)
    {
        vector<string> arr{"2", "3", "5", "13", "89", "233", "1597", "28657", "514229",
                           "433494437", "2971215073", "99194853094755497", "1066340417491710595814572169",
                           "19134702400093278081449423917",
                           "475420437734698220747368027166749382927701417016557193662268716376935476241"};

        for (int i = 0; i < arr.size(); i++)
            if (N == arr[i])
                return 1;

        return 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string N;
        cin >> N;

        Solution ob;

        cout << ob.fibonacciPrime(N) << "\n";
    }
    return 0;
}