// r on the red card,
// g on the green card and
// b on the blue card.

#include <iostream>
using namespace std;

int main()
{
  int r, g, b;
  cin >> r >> g >> b;

  if ((g * 10 + b) % 4 == 0) 
  // A number is divisible by 4 if its last two digits form a number divisible by 4.
    cout << "YES";
  else
    cout << "NO";

  return 0;
}