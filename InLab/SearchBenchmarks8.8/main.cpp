//hayden olmstead
//problem 8.8

//use a linear search to find a value in an array, then keep track of
//the comparisons
//then use a binary search to find a value in an array, and keep track
//of the number of the comparisons

#include <iostream>
using namespace std;

//constants
const int ARRAY_SIZE = 20;

//prototypes
int linearSearch(int [], int, int);
int binarySearch(int [], int, int);

//file includes (to get the other functions)
#include "linearSearch.cpp"
#include "binarySearch.cpp"

int main(){

  int comparisons;  //hold the number of comparisons

  //instantiate the array that will be searched through
  int tests[ARRAY_SIZE] = {101, 142, 147, 189, 199, 207, 222,  234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};

  //display the value being searched for
  cout << "\nWe are looking for 521." << endl;

  //run the linear search and return it to comparisons
  comparisons = linearSearch(tests, 521, ARRAY_SIZE);

  //print the linear search comparisons
  cout << "The number of comparisons for the linear search: " << comparisons << endl;

  //run the binary search and return it to comparisons
  comparisons = binarySearch(tests, 521, ARRAY_SIZE);

  //print the binary search comparisons
  cout << "The number of comparisons for the binary search: " << comparisons << "\n" << endl;

  return 0;
}