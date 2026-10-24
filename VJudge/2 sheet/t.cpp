#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
  int t;
  pair<int, int> s;
  pair<int, int> e;
  bool match = false;

  cin >> t >> s.first >> s.second >> e.first >> e.second;
  string c;
  cin >> c;

  for (int i = 0; i < c.length(); i++) {
    if (c[i] == 'E' && s.first < e.first) {
      s.first += 1;
    } else if (c[i] == 'S' && s.second > e.second)
    {
      s.second -= 1;
    } else if (c[i] == 'W' && s.first > e.first)
    {
      s.first -= 1;
    } else if (c[i] == 'N' && s.second < e.second)
    {
      s.second += 1;
    }
    if (s.first == e.first && s.second == e.second) {
      cout << i + 1;
      match = true;
      break;
    }
  } 

  if (!match)
  {
    cout << -1;
  }
  
}