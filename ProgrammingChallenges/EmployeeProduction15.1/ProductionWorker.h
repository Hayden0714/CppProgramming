#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
  int shift;
  double payRate;

public:
  ProductionWorker() : Employee()
  {
    shift = 0;
    payRate = 0.0;
  }

  ProductionWorker(string aName, string aNumber, string aDate, int aShift, double aPayRate) : Employee(aName, aNumber, aDate)
  {
    shift = aShift;
    payRate = aPayRate;
  }

  // mutators
  void setShift(int s)
  {
    shift = s;
  }

  void setPayRate(double d)
  {
    payRate = d;
  }

  // accessors
  int getShiftNumber() const
  {
    return shift;
  }

  string getShiftName() const
  {
    if (shift == 1)
    {
      return "Day";
    }
    else if (shift == 2)
    {
      return "Night";
    }
    else
    {
      return "Invalid";
    }
  }
  double getPayRate() const
  {
    return payRate;
  }
};

#endif