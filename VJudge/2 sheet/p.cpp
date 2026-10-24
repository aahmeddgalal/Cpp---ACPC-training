#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n][n], p, s;
  p = 0;
  s = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
      cin >> a[i][j];
      if (i == j) {
        p += a[i][j];
      }
      if (j == n - 1 - i) {
        s += a[i][j];
      }
    }
  }

  cout << abs(p - s);
}