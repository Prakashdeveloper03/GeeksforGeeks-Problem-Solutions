#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void segregateElements(int arr[], int n) {
    vector<int> vec1, vec2;
    for (int i = 0; i < n; i++) {
      if (arr[i] > 0) {
        vec1.push_back(arr[i]);
      } else {
        vec2.push_back(arr[i]);
      }
    }

    for (int i = 0; i < vec1.size(); i++) {
      arr[i] = vec1[i];
    }

    for (int j = 0; j < vec2.size(); j++) {
      arr[vec1.size() + j] = vec2[j];
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    Solution ob;
    ob.segregateElements(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  }
}