#include <iostream>
using namespace std;
class student {
 protected:
  int roll_number;

 public:
  void set_number(int a) { roll_number = a; }

  void display_number() { cout << roll_number << endl; }
};

class test : public student {
 public:
  float totalmarks = 0, avgmarks = 0;
  void set_marks(float temp[]) {
    for (int i = 0; i < 5; i++) {
      totalmarks += temp[i];
    }
    avgmarks = totalmarks / 5;
  }
};

class result : public test {
 public:
  void display() {
    cout << roll_number << " " << totalmarks << " " << avgmarks;
    cout << endl;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    result student1;
    int n;
    cin >> n;
    student1.set_number(n);
    float temp[5];
    int i;

    for (i = 0; i < 5; i++) cin >> temp[i];

    student1.set_marks(temp);
    student1.display();
  }

  return 0;
}