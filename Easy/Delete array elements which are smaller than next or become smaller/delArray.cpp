#include <bits/stdc++.h>
using namespace std;
vector<int> deleteElement(int arr[], int n, int k);
int main() {
  int t, n, k;
  cin >> t;
  while (t--) {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> k;
    vector<int> v;

    v = deleteElement(arr, n, k);
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;
  }
  return 0;
}

vector<int> deleteElement(int arr[], int n, int k) {
  stack<int> s;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    while (!(s.empty()) && s.top() < arr[i] && k != 0) {
      s.pop();
      k--;
    }
    s.push(arr[i]);
  }

  while (!s.empty()) {
    v.push_back(s.top());
    s.pop();
  }

  reverse(v.begin(), v.end());
  return v;
}
