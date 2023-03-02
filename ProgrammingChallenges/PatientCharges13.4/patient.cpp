// patient class for the 13.4 programming challenge

class Patient
{
public:
  string firstMiddleLastName;
  string addressCityStateZip;
  string phoneNumber;
  string emergencyName;
  string emergencyPhone;

  Patient(string f, string a, string p, string en, string ep)
  {
    firstMiddleLastName = f;
    addressCityStateZip = a;
    phoneNumber = p;
    emergencyName = en;
    emergencyPhone = ep;
  }

  // getters
  string getName()
  {
    return firstMiddleLastName;
  }

  string getAddress()
  {
    return addressCityStateZip;
  }

  string getPhoneNumber()
  {
    return phoneNumber;
  }

  string getEmergencyName()
  {
    return emergencyName;
  }

  string getEmergencyPhone()
  {
    return emergencyPhone;
  }

  // setters
  void setName(string n)
  {
    firstMiddleLastName = n;
  }

  void setAddress(string a)
  {
    addressCityStateZip = a;
  }

  void setPhoneNumber(string p)
  {
    phoneNumber = p;
  }

  void setEmergencyName(string en)
  {
    emergencyName = en;
  }

  void setEmergencyPhone(string ep)
  {
    emergencyPhone = ep;
  }

  void printData()
  {
    cout << "\nPatient Name: " << firstMiddleLastName << endl;
    cout << "Patient Address: " << addressCityStateZip << endl;
    cout << "Patient Phone Number: " << phoneNumber << endl;
    cout << "Emergency Contact Name: " << emergencyName << endl;
    cout << "Emergency Contact Phone Number: " << emergencyPhone << endl;
  }
};