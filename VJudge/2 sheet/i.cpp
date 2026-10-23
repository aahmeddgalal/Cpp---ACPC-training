#include <iostream>

using namespace std;

int main() {
  int n, r, a, b, c;
  r = 0;
  cin >> n;

  while (n--) {
    cin >> a >> b >> c;
    if (a + b + c >= 2)
    {
      r++;
    }
  }
  cout << r;
}