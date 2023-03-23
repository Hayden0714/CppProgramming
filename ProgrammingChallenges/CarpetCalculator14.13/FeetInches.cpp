#include "FeetInches.h"

void FeetInches::simplify()
{
  if (inches >= 12)
  {
    feet += (inches / 12);
    inches = inches % 12;
  }
  else if (inches < 0)
  {
    feet -= ((abs(inches) / 12) + 1);
    inches = 12 - (abs(inches) % 12);
  }
}

FeetInches::operator double()
{
  double temp = feet;
  temp += (inches / 12.0);
  return temp;
}