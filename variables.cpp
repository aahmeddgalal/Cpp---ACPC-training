#include <iostream>

using namespace std;

int main() {
  // This is bad cuz what if we want to change the name or gorge became 71 :'\
  // cout << "there once was a man named Gorge" << endl;
  // cout << "Gorge Was 70 years old" << endl;
  // cout << "Gorge liked the name Gorge" << endl;
  // cout << "but Gorge didn't like being 70" << endl;
  
  // Variables starts here (Yes i invented them)
  
  string name = "Gorge";
  int age = 72;

  cout << "there once was a man named " << name << endl;
  cout << "Gorge Was " << age << " years old" << endl;

  name = "Tom";
  age = 69;

  cout << name << " liked the name " << name << endl;
  cout << "but " << name << " didn't like being " << age << endl;


  return 0; 
}