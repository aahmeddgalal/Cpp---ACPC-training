#include <iostream>

using namespace std;

int main() {
  int o, e, k;
  o = 0;
  e = 0;
  cin >> k;
  for (int i = 1 ; i <= k ; i++ ) {
      if (i % 2 == 0) {
        e++;
      } else {
        o++;
      }
  }
  cout << o * e;



  return 0;
}