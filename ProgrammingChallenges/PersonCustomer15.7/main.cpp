// hayden olmstad
// 15.7, person and customer data
#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

void displayCustomer(CustomerData);

int main()
{
  CustomerData customer1("Smith", "John", "The White House", "Des Moines", "HI", "1234", 43344, true);

  cout << "Customer #1\n"
       << "-------------------\n";
  displayCustomer(customer1);

  CustomerData customer2;
  customer2.setLastName("Jones");
  customer2.setFirstName("Jenny");
  customer2.setAddress("555 East Street");
  customer2.setCity("Jonesville");
  customer2.setState("VA");
  customer2.setZip("88888");
  customer2.setCustomerNumber(77777);
  customer2.setMailingList(false);

  cout << "\nCustomer #2\n"
       << "-------------------\n";
  displayCustomer(customer2);
}

void displayCustomer(CustomerData c)
{
  cout << "Last Name: " << c.getLastName() << endl;
  cout << "First Name: " << c.getFirstName() << endl;

  cout << "Address: " << c.getAddress() << endl;

  cout << "City: " << c.getCity() << endl;

  cout << "State: " << c.getState() << endl;

  cout << "Zip Code: " << c.getZip() << endl;

  cout << "Customer Number: " << c.getCustomerNumber() << endl;

  if (c.getMailingList() == 0)
  {
    cout << "Not on the mailing list." << endl;
  }
  else
  {

    cout << "On the mailing list." << endl;
  }
}