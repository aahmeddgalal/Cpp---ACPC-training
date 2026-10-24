#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    x = 0;
    cin >> n;

    string s = to_string(n);
    for (int i = 0; i < s.length(); i++) {
      int dig = s[i] - '0';
      if (dig != 0 && n % dig == 0) {
        x++;
      }
    }
    cout << x << endl;
  }
  
}