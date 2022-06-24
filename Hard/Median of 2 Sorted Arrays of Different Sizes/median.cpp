#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double MedianOfArrays(vector<int> &array1, vector<int> &array2)
    {
        vector<int> v;
        for (int i = 0; i < array1.size(); i++)
        {
            v.push_back(array1[i]);
        }

        for (int i = 0; i < array2.size(); i++)
        {
            v.push_back(array2[i]);
        }
        sort(v.begin(), v.end());
        return (v[v.size() / 2] + v[(v.size() - 1) / 2]) / 2.00;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> array1[i];
        }

        cin >> n;
        vector<int> array2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array2[i];
        }
        Solution obj;
        cout << obj.MedianOfArrays(array1, array2) << endl;
    }
    return 0;
}