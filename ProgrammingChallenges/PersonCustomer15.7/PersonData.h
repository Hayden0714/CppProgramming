#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{
  string lastName;
  string firstName;
  string address;
  string city;
  string state;
  string zip;

public:
  PersonData(string ln, string fn, string addr, string c, string s, string z)
  {
    lastName = ln;
    firstName = fn;
    address = addr;
    city = c;
    state = s;
    zip = z;
  }

  PersonData()
  {
    lastName = "";
    firstName = "";
    address = "";
    city = "";
    state = "";
    zip = "";
  }

  void setLastName(string s)
  {
    lastName = s;
  }

  void setFirstName(string s)
  {
    firstName = s;
  }

  void setAddress(string s)
  {
    address = s;
  }

  void setCity(string s)
  {
    city = s;
  }

  void setState(string s)
  {
    state = s;
  }

  void setZip(string s)
  {
    zip = s;
  }

  string getLastName()
  {
    return lastName;
  }

  string getFirstName()
  {
    return firstName;
  }

  string getAddress()
  {
    return address;
  }

  string getCity()
  {
    return city;
  }

  string getState()
  {
    return state;
  }

  string getZip()
  {
    return zip;
  }
};

#endif