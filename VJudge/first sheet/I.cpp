// #include <iostream>

// using namespace std;

// int main() {
//   float N;
//   cin >> N;

//   float decimal_part = (N - static_cast<long>(N)) * 10;
//   int whole_number = static_cast<long>(N);

//   if (decimal_part >= 0 && decimal_part <= 2)
//   {
//     cout << whole_number << "-";
//   } else if (decimal_part >= 3 && decimal_part <= 6) {
//     cout << whole_number;
//   } else {
//     cout << whole_number << "+";
//   }
  
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float N;
  cin >> N;

  int decimal_part = round((N - static_cast<int>(N)) * 10);
  int whole_number = static_cast<int>(N);

  if (decimal_part <= 2)
    cout << whole_number << "-";
  else if (decimal_part <= 6)
    cout << whole_number;
  else
    cout << whole_number << "+";

  return 0;
}