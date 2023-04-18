#include <iostream>
using namespace std;

int factorial(int);

int main()
{
  int n, result;

  cout << "Enter a non-negative number: ";
  cin >> n;

  result = factorial(n);
  cout << "Factorial of " << n << " = " << result << endl;
  return 0;
}

// recursive method
//  int factorial(int n)
//  {
//    // tbd
//    if (n > 1)
//    {
//      return n * factorial(n - 1);
//    }
//    else
//    {
//      return 1;
//    }
//  }

// iterative method
int factorial(int n)
{
  int result = 1;
  for (int i = n; i > 1; i--)
  {
    result *= i;
  }
  return result;
}