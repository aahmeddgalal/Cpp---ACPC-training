#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    char s;
    cin >> s;
    if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'r' || s == 's')
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}