#include <iostream>

using namespace std;
// 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.
int main() {
  int t;
  cin >> t;
  while (t--)
  {
    int h = 1; // int height
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) {
        h *= 2;
      } else {
        h += 1;
      }
    }

    cout << h << endl;
  }
  
}