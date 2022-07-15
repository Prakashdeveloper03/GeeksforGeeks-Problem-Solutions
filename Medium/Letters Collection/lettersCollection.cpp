#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for (int count = 0; count < q; count++)
        {
            int h = queries[count][0];
            int i = queries[count][1];
            int j = queries[count][2];
            if (i >= n || j >= m)
            {
                ans.push_back(-1);
            }
            int sum = 0;
            for (int k = -h; k <= h; k++)
            {
                if (i - h > -1 && j + k > -1 && j + k < m)
                    sum += mat[i - h][j + k];

                if (i + h < n && j + k > -1 && j + k < m)
                    sum += mat[i + h][j + k];

                if (k > -h && k < h)
                {
                    if (j - h > -1 && i + k > -1 && i + k < n)
                        sum += mat[i + k][j - h];
                    if (j + h < m && i + k > -1 && i + k < n)
                        sum += mat[i + k][j + h];
                }
            }
            ans.push_back(sum);
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
        int n, m, q, ty, i, j;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> mat[i][j];
        cin >> q;
        vector<int> queries[q];
        for (int k = 0; k < q; k++)
        {
            cin >> ty >> i >> j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        Solution obj;
        vector<int> ans = obj.matrixSum(n, m, mat, q, queries);
        for (int u : ans)
            cout << u << endl;
    }
    return 0;
}