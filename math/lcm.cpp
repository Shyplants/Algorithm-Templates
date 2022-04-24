#include<iostream>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
  return a/gcd(a, b)*b;
}

int main()
{
  int a = 6, b = 14;
  cout << lcm(a, b); // b must not be zero.
  return 0;
}