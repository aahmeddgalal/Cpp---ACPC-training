#include <iostream>

using namespace std;

int main() {
  long long x; // Not int
  cin >> x;
  if (x % 2 == 0)
  {
    cout << x/2;
  } else {
    cout << ((x - 1)/2) - x;
  }

  return 0;
}