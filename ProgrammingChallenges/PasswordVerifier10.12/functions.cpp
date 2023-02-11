// this is the file that holds all of the functions that are needed to
// make the program work

#include <iostream>
#include <cstring>

//get the input from the user
// char* getInput()
// {
//   char input[];

//   cout << "Please enter a password: " << endl;
//   cin >> input;

//   return input;
// }

//determine if the password is 6 characters long
bool getLength(string password){
  int length;
  length = password.length();

  if(length >= 6){
    return true;
  }else{
    return false;
  }
}

//determine if the password has at least 1 upper case and at least 1 lowercase
bool getUpperAndLower(string password){
  //loop through the char array to check the case of each letter
  int lower = 0, upper = 0;
  for(char& c : password){
    if(islower(c)){
      lower++;
    }else if(isupper(c)){
      upper++;
    }else{
      //do nothing
    }
  }

  if(lower > 0 && upper > 0){
    return true;
  }else{
    return false;
  }
}

//function to determine if there is digit in the password
bool getHas1Digit(string password){
  //loop through, if a character is a number then break and return true
  for(char& c : password){
    if(isdigit(c)){
      return true;
    }
  }
}






