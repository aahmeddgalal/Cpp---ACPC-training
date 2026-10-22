#include <iostream>

using namespace std;

int main() {
  int a, b, y;
  cin >> a >> b;

  for (y = 0; b >= a; y++) {
    a *= 3;
    b *= 2;
  }
  cout << y;
}