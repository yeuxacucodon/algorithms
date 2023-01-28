// https://codelearn.io/learning/thuat-toan-can-ban/3617
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  for (int i = 3; i < n / 2; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int greatestCommonPrimeDivisor(int a, int b) {
  int min = a, result = -1;
  bool checkPrime;
  if (a >= b) {
    min = b;
  }
  for (int i = 2; i < min; i++) {
    if (a % i == 0 && b % i == 0) {
      checkPrime = isPrime(i);
      if (checkPrime == true) {
        result = i;
      }
    }
  }
  return result;
}

int main() {
  int a, b;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  int result = greatestCommonPrimeDivisor(a, b);
  cout << result;
}