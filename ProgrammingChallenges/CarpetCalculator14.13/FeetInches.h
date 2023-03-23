#ifndef FEET_INCHES_H
#define FEET_INCHES_H
#include <iostream>
using namespace std;

class FeetInches
{
  int feet;
  int inches;
  // void simplify(); // defined in feetinches cpp

public:
  FeetInches(int f = 0, int i = 0)
  {
    feet = f;
    inches = i;
    simplify();
  }

  // copy constructor
  FeetInches(FeetInches &right)
  {
    feet = right.feet;
    inches = right.inches;
  }

  // mutators
  void setFeet(int f)
  {
    feet = f;
  }

  void setInches(int i)
  {
    inches = i;
    simplify();
  }

  // multiply
  FeetInches multiply(FeetInches &obj)
  {
    FeetInches temp;
    temp.feet = feet * obj.feet;
    temp.inches = inches * obj.inches;
    temp.simplify();
    return temp;
  }

  // accessors
  int getFeet() const
  {
    return feet;
  }

  int getInches() const
  {
    return inches;
  }

  void simplify()
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

  operator double()
  {
    double temp = feet;
    temp += (inches / 12.0);
    return temp;
  }
};

#endif