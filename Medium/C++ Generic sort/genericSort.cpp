#include <bits/stdc++.h>
using namespace std;

template <class T>
void sortArray(T a[], int n)
{
    sort(a, a + n);
}

template <class T>
void printArray(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, i;
        cin >> n >> q;
        int intArr[100];
        float floatArr[100];
        string strArr[100];
        switch (q)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                cin >> intArr[i];
            }
            sortArray(intArr, n);
            printArray(intArr, n);
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                cin >> strArr[i];
            }
            sortArray(strArr, n);
            printArray(strArr, n);
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                cin >> floatArr[i];
            }
            sortArray(floatArr, n);
            printArray(floatArr, n);
            break;
        }
    }
    return 0;
}