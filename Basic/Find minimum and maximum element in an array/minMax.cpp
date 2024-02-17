#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n) {
  int min = a[0], max = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > max)
      max = a[i];
    else if (a[i] < min)
      min = a[i];
  }
  return {min, max};
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    Solution ob;
    pair<long long, long long> pp = ob.getMinMax(a, n);

    cout << pp.first << " " << pp.second << endl;
  }
  return 0;
}