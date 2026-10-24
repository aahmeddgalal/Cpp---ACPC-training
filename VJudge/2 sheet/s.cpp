#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    bool found = false;
    pair<int, int> p = {0, 0};
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'U')
      {
        p.second += 1;
      } else if (s[i] == 'D')
      {
        p.second -= 1;
      } else if (s[i] == 'R')
      {
        p.first += 1;
      } else if (s[i] == 'L')
      {
        p.first -= 1;
      }

      if (p.first == 1 && p.second == 1) {
        cout << "YES" << endl;
        found = true;
        break;
      }
      
    }
    if (!found)
    {
      cout << "NO" << endl;
    }
  }
}