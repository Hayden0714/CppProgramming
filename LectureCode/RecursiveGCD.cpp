#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
  int num1, num2;

  cout << "Enter two integers: ";
  cin >> num1 >> num2;

  cout << "The greatest common divisor of " << num1;
  cout << " and " << num2 << " is ";
  cout << gcd(num1, num2) << endl;
  return 0;
}

int gcd(int x, int y)
{
  if (x % y == 0)
    return y;
  else
    return gcd(y, x % y);
}