#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool check(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return true;
    }
    return false;
}

void findAll()
{
    bool flag = true;
    for (int i = 1; i < 1000000; i++)
    {
        flag = true;
        int num = i;
        while (num > 0)
        {
            int d = num % 10;
            if (!check(d))
            {
                flag = false;
                break;
            }
            num /= 10;
        }
        if (flag)
            mp[i] = 1;
    }
}

int main()
{
    findAll();
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; ++i)
        {
            if (mp[arr[i]])
            {
                cout << arr[i] << " ";
                flag = 1;
            }
        }
        if (!flag)
            cout << "-1";
        cout << endl;
    }
    return 0;
}