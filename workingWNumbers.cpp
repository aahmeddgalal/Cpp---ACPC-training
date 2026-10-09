#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int gpaWhole = 4;
  float gpa = 4.2;
  cout << gpa << endl;
  cout << gpaWhole << endl;

  gpa++;
  gpaWhole--;
  
  cout << gpa << endl;
  cout << gpaWhole << endl;
  
  gpa += 1;
  gpaWhole -= 3;

  cout << gpa << endl;
  cout << gpaWhole << endl;

  cout << 10 % 3 <<endl;


  // Math functions (We will import/include smth)

  cout << pow(2, 5) << endl;
  cout << sqrt(36) << endl;
  cout << round(3.6) << endl;
  cout << round(3.1) << endl;
  cout << ceil(3.1) << endl;
  cout << floor(3.9) << endl;
  cout << fmax(3, 9) << endl;
  cout << fmin(3, 9) << endl;

  return 0;
}