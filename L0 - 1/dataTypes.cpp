#include <iostream>

using namespace std;

int main ()
{
  char grade = 'A';
  string name = "Galileo";
  int age = 50;
  int num = 3e9;
  long long num2 = 3e13L;

  double gpa = 4.2;
  bool isMale = true;

  cout << name << " has got a gpa of " << gpa << " with " << grade << "s straight" << endl;
  cout << num << " " << num2 << endl;

  return 0;
}