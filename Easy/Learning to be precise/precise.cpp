#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    float r = a / b;
    cout << r;
    cout << " " << setprecision(3) << fixed << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b;
        precise(a, b);
    }
    return 0;
}