#include <iostream>

using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (b <= a) {
    cout << "delicious";
  } else if (b <= (x + a))
  {
    cout << "safe";
  } else {
    cout << "dangerous";
  }
}