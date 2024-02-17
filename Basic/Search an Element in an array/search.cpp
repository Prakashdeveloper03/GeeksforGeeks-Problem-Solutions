#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int search(int arr[], int N, int X) {
    for (int i = 0; i < N; i++) {
      if (arr[i] == X)
        return i;
    }
    return -1;
  }
};

int main() {
  int testcases;
  cin >> testcases;
  while (testcases--) {
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    int x;

    for (int i = 0; i < sizeOfArray; i++) {
      cin >> arr[i];
    }
    cin >> x;
    Solution ob;
    cout << ob.search(arr, sizeOfArray, x) << endl;
  }
  return 0;
}