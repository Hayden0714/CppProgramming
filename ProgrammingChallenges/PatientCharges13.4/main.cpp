// hayden olmstead
// 13.4 patient charges program

#include <iostream>
using namespace std;

// file includes
#include "patient.cpp"
#include "procedure.cpp"

int main()
{
  // variables
  Patient patient1("John, Tom, Smith", "123 Colorado Lane, Colorado Springs, CO, 80917", "719-555-5555", "Bob, James, Johnson", "719-444-4444");

  Procedure procedure1("Physical Exam", "2/21/2023", "Dr. Irvine", 250.00);
  Procedure procedure2("X-Ray", "2/21/2023", "Dr. Jamison", 500.00);
  Procedure procedure3("Blood test", "2/21/2023", "Dr. Smith", 200.00);

  // print the procedures
  patient1.printData();

  procedure1.printProcedure();
  procedure2.printProcedure();
  procedure3.printProcedure();

  return 0;
}