#include <iostream>
using namespace std;

void printNTimes(int n, string text) {
  for (int i = 0; i < n; i++) {
    cout << text << endl;
  }
}

int main() {
  printNTimes(4, "Hamada");
}