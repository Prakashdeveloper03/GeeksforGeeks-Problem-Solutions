#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool istrue(int row, int col, vector<vector<int>> mat, int val)
    {
        for (int i = 0; i < 9; i++)
        {
            if (mat[row][i] == val)
                return 0;
        }
        for (int i = 0; i < 9; i++)
        {
            if (mat[i][col] == val)
                return 0;
        }
        for (int i = 0; i < 9; i++)
        {
            if (mat[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == val)
                return 0;
        }
        return 1;
    }

    int isValid(vector<vector<int>> mat)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (mat[i][j] != 0)
                {
                    int val = mat[i][j];
                    mat[i][j] = 0;
                    if (istrue(i, j, mat, val) == 1)
                        mat[i][j] = val;
                    else
                        return 0;
                }
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for (int i = 0; i < 81; i++)
            cin >> mat[i / 9][i % 9];

        Solution ob;
        cout << ob.isValid(mat) << "\n";
    }
    return 0;
}