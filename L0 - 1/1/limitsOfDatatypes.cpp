#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "int max: " << numeric_limits<int>::max() << '\n';
    cout << "long max: " << numeric_limits<long>::max() << '\n';
    cout << "long long max: " << numeric_limits<long long>::max() << '\n';

    cout << "int max: " << numeric_limits<int>::min() << '\n';
    cout << "long max: " << numeric_limits<long>::min() << '\n';
    cout << "long long max: " << numeric_limits<long long>::min() << '\n';
    /* 
      int max: 2147483647
      long max: 2147483647
      long long max: 9223372036854775807
      int max: -2147483648
      long max: -2147483648
      long long max: -9223372036854775808 
    */
}
