#include <iostream>
using namespace std;

pair<int, int> makePair(int x, int y)
{
  return pair<int, int>(x, y);
}

int main() {
  auto [x, y] = makePair(2, 3);
  cout << "(" << x << ", "<< y << ")";
}