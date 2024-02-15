#include <iostream>
using namespace std;
void volume(int s) { cout << s * s * s << endl; }

void volume(int r, int h) { cout << 3.14159 * r * r * h << endl; }

void volume(int l, int b, int h) { cout << l * b * h << endl; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int q;
    cin >> q;

    switch (q) {
    case 1:
      int edge;
      cin >> edge;
      volume(edge);
      break;

    case 2:
      int radius, heigh;
      cin >> radius >> heigh;
      volume(radius, heigh);
      break;

    case 3:
      int length, width, height;
      cin >> length >> width >> height;
      volume(length, width, height);
      break;
    }
  }
  return 0;
}