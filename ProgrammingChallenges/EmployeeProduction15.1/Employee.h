#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
  string name;
  string number;
  string hireDate;

public:
  Employee()
  {
    name = "";
    number = "";
    hireDate = "";
  }

  Employee(string aName, string aNumber, string aDate)
  {
    name = aName;
    number = aNumber;
    hireDate = aDate;
  }

  // mutators
  void setName(string s)
  {
    name = s;
  }

  void setNumber(string s)
  {
    number = s;
  }

  void setHireDate(string s)
  {
    hireDate = s;
  }

  // accessors
  string getName() const
  {
    return name;
  }

  string getNumber() const {
    return number;
  }

  string getHireDate() const {
    return hireDate;
  }

};

#endif
