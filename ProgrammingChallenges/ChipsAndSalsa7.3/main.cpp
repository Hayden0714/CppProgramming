//Hayden Olmstead
//1/30/23

//7.3 Chips and Salsa Programming Challenge

//standard includes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//arrays that are used through the program
const string SALSA_NAMES[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
const int NUM_TYPES = 5;
int SALSA_SALES[];

//other file includes
#include "displayReport.cpp"
#include "getHighest.cpp"
#include "getLowest.cpp"
#include "getSalsaSales.cpp"
#include "getTotal.cpp"

//prototypes
void getSalsaSales();
void displayReport(int, int, int);
int getHighest();
int getLowest();
int getTotal();

//main
int main(){

  //variables
  int highest, lowest, total;

  //get the sales of the salsas
  getSalsaSales();

  //calculate the highest and the lowest values
  highest = getHighest();
  lowest = getLowest();

  //calculate the total number of sales
  total = getTotal();

  //display the report
  displayReport(lowest, highest, total);

  return 0;
}