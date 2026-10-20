/* Given a string S print AC if it perfectly matches Hello,World!; otherwise, print WA.*/

#include <iostream>

using namespace std;

int main()
{
  string S;
  cin >> S;
  if (S == "Hello,World!")
  {
    cout << "AC";
  }
  else
  {
    cout << "WA";
  }
}