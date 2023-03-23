// hayden olmstead
// 15.1, employee and production worker classes

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// prototype
void displayInfo(ProductionWorker);

int main()
{
  ProductionWorker pw("John Smith", "719-555-5555", "01/01/2023", 2, 44.00);
  displayInfo(pw);
  return 0;
}

void displayInfo(ProductionWorker e)
{
  cout << setprecision(2) << fixed << showpoint;
  cout << "Name: " << e.getName() << endl;
  cout << "Employee number: " << e.getNumber() << endl;
  cout << "Hire date: " << e.getHireDate() << endl;
  cout << "Shift: " << e.getShiftName() << endl;
  cout << "Shift number: " << e.getShiftNumber() << endl;
  cout << "Pay rate : " << e.getPayRate() << endl;
}