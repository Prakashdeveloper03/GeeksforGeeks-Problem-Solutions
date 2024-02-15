#include <bits/stdc++.h>
using namespace std;
int *greaterElement(int arr[], int n);
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int *b;
    b = greaterElement(arr, n);
    for (int i = 0; i < n; i++) {
      if (b[i] == -10000000)
        cout << "_ ";
      else
        cout << b[i] << " ";
    }
    cout << endl;
  }
  return 0;
}

int *greaterElement(int arr[], int n) {
  set<int> s;
  for (int i = 0; i < n; i++)
    s.insert(arr[i]);
  for (int i = 0; i < n; i++) {
    auto indx = s.upper_bound(arr[i]);
    if (indx != s.end())
      arr[i] = *indx;
    else
      arr[i] = -10000000;
  }
  return arr;
}
