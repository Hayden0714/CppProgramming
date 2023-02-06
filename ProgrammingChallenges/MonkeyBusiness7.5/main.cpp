//Hayden Olmstead
// 1/30/23

//Problem 7.5, Monkey Business

#include <iostream>
#include <iomanip>
using namespace std;

//prototypes
void getInput();
double getAverageFoodEaten(); //returns an array of the average amount eaten per day
int getLeastAmountEaten();
int getMostAmountEaten();
void displayReport(int, int);

//main arrays
int monkeys[3][5];

//other file includes
#include "getInput.cpp"
#include "displayReport.cpp"
#include "getAverageFoodEaten.cpp"
#include "getLeastAmountEaten.cpp"
#include "getMostAmountEaten.cpp"

//main
int main(){

  //variables
  int leastAmountEaten, mostAmountEaten;

  //ask the user for the input to fill the array
  getInput();

  //get the average amount of food eaten per day
  double average = getAverageFoodEaten();

  //calculate the least amount eaten in the week
  leastAmountEaten = getLeastAmountEaten();

  //calculate the most amount eaten in the week
  mostAmountEaten = getMostAmountEaten();

  //display final report
  displayReport(leastAmountEaten, mostAmountEaten, average);


  return 0;
}