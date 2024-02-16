#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> findIndex(int a[], int n, int key) {
    vector<int> result;
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] == key) {
        if (first == -1) {
          first = i;
        }
        last = i;
      }
    }
    result.push_back(first);
    result.push_back(last);
    return result;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    vector<int> res;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int key;
    cin >> key;
    Solution ob;
    res = ob.findIndex(arr, n, key);
    for (int i = 0; i < res.size(); i++)
      cout << res[i] << " ";
    cout << "\n";
  }
  return 0;
}