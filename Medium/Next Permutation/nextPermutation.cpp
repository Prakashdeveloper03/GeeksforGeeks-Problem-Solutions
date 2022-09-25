#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
        for (int i = N - 1; i > 0; i--)
        {
            if (arr[i] > arr[i - 1])
            {
                for (int j = N - 1; j >= i; j--)
                {
                    if (arr[i - 1] < arr[j])
                    {
                        swap(arr[i - 1], arr[j]);
                        break;
                    }
                }
                sort(arr.begin() + i, arr.end());
                return arr;
                break;
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<int> ans = obj.nextPermutation(n, arr);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}