#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a[5][5], r, c;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
          r = i + 1;
          c = j + 1; 
      }
    }
  }
  cout << std::abs(r - 3) + std::abs(c - 3);

  return 0;
}