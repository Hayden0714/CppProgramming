
#include <iostream>
using namespace std;

//prototypes
double median(int*, int);
void displayArray(int*, int);

#include "median.cpp"
#include "displayArray.cpp"

int main(){
  //array with odd elements
  int odd[] = {1, 2, 3, 4, 5, 6, 7};

  //array with even elements
  int even[] = {1, 2, 3, 4, 5, 6, 7, 8};

  //display the odd array
  cout << "The odd numbered set of values is: ";
  displayArray(odd, 7);

  //display the odd arrays median value
  cout << "The median is: " << median(odd, 7) << endl << endl;

  //display the even array
  cout << "The even numbered set of values is: ";
  displayArray(even, 8);

  //display the even arrays median value
  cout << "The median is: " << median(even, 7) << endl << endl;
}