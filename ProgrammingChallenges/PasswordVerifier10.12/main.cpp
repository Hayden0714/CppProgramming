// hayden olmstead
// programming challenge 10.12
// password verifier program

#include <iostream>
#include <cstring>
using namespace std;

// prototypes

// file includes
#include "functions.cpp"

// main
int main()
{
  // variables
  bool sixLong = false; 
  bool upperAndLower = false;
  bool has1Digit = false;

while((sixLong && upperAndLower && has1Digit) == false){
  // get the input from the user
  string password;
  cout << "Please enter a password: " << endl;
  cin >> password;

  // check that the password is 6 characters long
  sixLong = getLength(password);

  // check that the passsord has 1 uppercase and 1 lowercase letter
  upperAndLower = getUpperAndLower(password);

  // check that the password has 1 digit
  has1Digit = getHas1Digit(password);

  // display the result, based on if you return true from all of the
  // functions or not

  if(upperAndLower == false){
    cout << "Your password needs to have 1 lower case and 1 upper case letter." << endl;
  }

  if(sixLong == false){
    cout << "Your pass word needs to be at least 6 characters." << endl;
  }

  if(has1Digit == false){
    cout << "Your password needs to have 1 number in it." << endl;
  }
}

cout << "Thank you for entering your password." << endl;

  return 0;
}