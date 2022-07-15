#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        int sum = 0;
        if (ty == 0)
        {
            if (i - 1 >= 0)
                sum += mat[i - 1][j];
            if (i + 1 < n)
                sum += mat[i + 1][j];
            if (j - 1 >= 0)
                sum += mat[i][j - 1];
            if (j + 1 < m)
                sum += mat[i][j + 1];
            if (j % 2)
            {
                if (i + 1 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 1][j + 1];
                }
            }
            else
            {
                if (i - 1 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 1][j + 1];
                }
            }
            return sum;
        }
        else
        {
            if (i - 2 >= 0)
                sum += mat[i - 2][j];
            if (i + 2 < n)
                sum += mat[i + 2][j];
            if (j - 2 >= 0)
                sum += mat[i][j - 2];
            if (j + 2 < m)
                sum += mat[i][j + 2];
            if (i - 1 >= 0)
            {
                if (j - 2 >= 0)
                    sum += mat[i - 1][j - 2];
                if (j + 2 < m)
                    sum += mat[i - 1][j + 2];
            }
            if (i + 1 < n)
            {
                if (j - 2 >= 0)
                    sum += mat[i + 1][j - 2];
                if (j + 2 < m)
                    sum += mat[i + 1][j + 2];
            }
            if (j % 2)
            {
                if (i - 1 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 1][j + 1];
                }
                if (i + 2 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 2][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 2][j + 1];
                }
            }
            else
            {
                if (i + 1 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 1][j + 1];
                }
                if (i - 2 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 2][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 2][j + 1];
                }
            }
            return sum;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j, ty;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(0, m));
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> mat[i][j];
        cin >> ty >> i >> j;
        Solution obj;
        cout << obj.hopscotch(n, m, mat, ty, i, j) << endl;
    }
    return 0;
}