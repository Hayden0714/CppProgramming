// hayden olmstead
// programing challenge 11.8, customer accounts

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// constants
const int NUM_CUSTOMERS = 10;

// customer struct
struct Customer
{
  string name, address, cityStateZip, phoneNumber;
  double balance;
  string lastPayment;
};

// prototypes
int getUserInput();
string getStringInput();
void enterNewData(Customer *arr, int, int);
void editData(Customer *arr, int);
void displayData(Customer *arr, int);
void searchData(Customer *arr, int, int);
void showMainMenu();

// file inculdes
#include "functions.cpp"

int main()
{
  // variables
  int input = 0;
  Customer customers[NUM_CUSTOMERS];
  int index = 0;

  // while loop to run the program until the user exits
  bool running = true;
  while (running)
  {
    // start by displaying a menu to the user and getting their input
    showMainMenu();
    input = getUserInput();
    string strInput;
    
    // switch case to determine what function gets ran based on the input
    switch (input)
    {
    case 1:
      index++;
      enterNewData(customers, NUM_CUSTOMERS, index);
      break;
    case 2:
      editData(customers, NUM_CUSTOMERS);
      break;
    case 3:
      displayData(customers, index);
      break;
    case 4:
      strInput = getStringInput();
      searchData(customers, NUM_CUSTOMERS, strInput);
      break;
    case 5:
      // this is the exit the program case9
      running = false;
      break;
    }
  }
  cout << "Thank you for using the program! Have a nice day!" << endl;
  return 0;
}
