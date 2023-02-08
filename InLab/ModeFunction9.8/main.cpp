//hayden olmstead
// mode function 9.8

#include <iostream>
using namespace std;

//constants

//prototypes
int getMode(int*, int);
int* makeArray(int);

#include "getMode.cpp"
#include "makeArray.cpp"

int main(){
  //constant for the array size
  const int size = 11;

  //an array of test values
  int test[size] = {1, 2, 3, 3, 3, 2, 2, 1, 3, 4, 5};
  
  //a variable to hold the mode of the test values
  int mode;

  //get the mode of the test values
  mode = getMode(test, size);

  //display the mode, if any
  if(mode == -1){
    cout << "The array has no mode." << endl;
  }else{
    cout << "\nThe mode of the array is: " << mode << "\n" << endl;
  }

  return 0;
}