#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        set<int> s(a, a + n);
        int count = 0;
        for (int i = 0; i < m; i++)
            if (s.find(b[i]) != s.end())
            {
                count++;
                s.erase(b[i]);
            }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[100], b[100];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        Solution obj;
        cout << obj.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}