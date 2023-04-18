// recursive multiplication
#include <iostream>
using namespace std;

long multiply(int, int);

int main()
{
  cout << multiply(7, 4);
  cout << endl;
  return 0;
}

long multiply(int x, int y)
{
  if (x == 1)
    return y;
  else
    return y + multiply(x - 1, y);
}