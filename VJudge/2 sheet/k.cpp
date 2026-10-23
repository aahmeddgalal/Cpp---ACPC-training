#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;

    if (a >= n)
    {
      cout << 1 << endl;
    }
    else if (a <= b)
    {
      cout << -1 << endl;
    }
    else {
      int days = 0;

      while (true)
      {
        days++;
        n -= a;

        if (n <= 0) break;

        n += b;
      }
      cout << days << endl;
    }
  }
  
}