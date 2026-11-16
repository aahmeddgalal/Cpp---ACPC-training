#include <iostream>
using namespace std;

bool isPrime(int num) {
  if (num < 2) return false;
  for (int i = 2; i*i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int score = 0;
  int a, b, c;
  cin >> a >> b >> c;
  
  if (isPrime(a)){
    score += a;
  } else {
    score -= a;
  }
  if (isPrime(b)){
    score += b;
  } else {
    score -= b;
  }
  if (isPrime(c)){
    score += c;
  } else {
    score -= c;
  }

  cout << score;
  return 0;
}