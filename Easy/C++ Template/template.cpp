#include <bits/stdc++.h>
using namespace std;
template <class T>
class minElement {
  T a;

 public:
  minElement(T n) { a = n; }
  void check(T b) {
    if (a < b)
      cout << a << endl;
    else
      cout << b << endl;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int c;
    cin >> c;
    if (c == 1) {
      string a, b;
      cin >> a >> b;
      minElement<string> obj1(a);
      obj1.check(b);
    } else if (c == 2) {
      int a, b;
      cin >> a >> b;
      minElement<int> obj2(a);
      obj2.check(b);
    } else {
      char a, b;
      cin >> a >> b;
      minElement<char> obj3(a);
      obj3.check(b);
    }
  }
}