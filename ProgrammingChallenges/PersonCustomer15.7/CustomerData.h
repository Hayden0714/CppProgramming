#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
#include <string>
using namespace std;

class CustomerData : public PersonData
{
  int customerNumber;
  bool mailingList;

public:
  CustomerData(string ln, string fn, string addr, string c, string s, string z, int cn, bool ml) : PersonData(ln, fn, addr, c, s, z)
  {
    customerNumber = cn;
    mailingList = ml;
  }

  CustomerData() : PersonData()
  {
    customerNumber = 0;
    mailingList = false;
  }

  void setCustomerNumber(int cn)
  {
    customerNumber = cn;
  }

  void setMailingList(bool b)
  {
    mailingList = b;
  }

  int getCustomerNumber()
  {
    return customerNumber;
  }

  bool getMailingList()
  {
    return mailingList;
  }
};

#endif