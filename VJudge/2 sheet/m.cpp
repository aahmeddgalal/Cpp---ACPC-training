#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--)
  {
    int n, x; // x is the sum
    x = 0;
    cin >> n;

    string s;
    cin >> s;
    for (int i = 0; i < s.length() ; i++ ) {
      x += s[i] - '0'; // minus '0' from the char gives u its numeric value
    }

    int y = s.length() - x;
    int f = x * 90 + y * -90;

    if (f >= 360 || f <= -360) {
      f %= 360;
    }

    if (f == 90 || f == -270) {
      cout << 'N' << endl;
    } else if (f == 180 || f == -180)
    {
      cout << 'W' << endl;
    } else if (f == 270 || f == -90)
    {
      cout << 'S' << endl;
    } else {
      cout << 'E' << endl;
    }
  }
  
}