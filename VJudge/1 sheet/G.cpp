#include <iostream>

using namespace std;

int main() {
  int x , y;
  cin >> x >> y;

  int groups[13] = {
    0,
    1,
    3,
    1,
    2,
    1,
    2,
    1,
    1,
    2,
    1,
    2,
    1
  };

  if (groups[x] == groups[y]) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}