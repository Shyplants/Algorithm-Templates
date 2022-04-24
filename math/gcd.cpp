#include<iostream>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main()
{
  int a = 6, b = 14;
  cout << gcd(a, b); // B must not be zero.
  return 0;
}