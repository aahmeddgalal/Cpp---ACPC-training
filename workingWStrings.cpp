#include <iostream>

using namespace std;

int main() {
  string myName = "Galileo but the real one is Ahmed";
  cout << myName.length() << endl;
  cout << myName[0] << endl;
  cout << myName[3] << endl;
  myName[0] = 'J';
  cout << myName << endl;

  cout << myName.find("real", 0) << endl; // 0 is the starting position 
  cout << myName.substr(4, 2) << endl; // start at index 4 and take the next 2 chars (Slicing)
  


  return 0;
}