#include <iostream>
using namespace std;

//constants
const SIZE = 80;
const MIN = 6;

//prototypes
void displayRequirements();
void displayResult(char[]);
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main(){
  char cstring[SIZE];   //to hold the password

  //display password requirements
  displayRequirements();

  //get the password as input from the user
  cout << "Enter a password: ";
  cin.getline(cstring, SIZE);

  //display a message verifying if pwd is valid
  displayResult(cstring);

  return 0;
}

//display requirements function
void displayRequirements(){
  cout << "Password Requirements:\n" << " - The password should be at least " << MIN <<
  " characters long."\n << " - The password should contain at least one uppercase\n"
  << " and at least one lowercase letter.\n" << " - The password should have at least one digit.\n\n"

}