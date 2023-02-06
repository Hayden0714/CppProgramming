//Hayden Olmstead
//In Lab
//Paint Job Estimator

#include <iostream> //io stream allows us to do cin and cout
#include <iomanip>  //allows us to use setprecision function

using namespace std;  //you can not use this and call std::cout

//constant for the wall area that one gallon of paint will cover
const int WALL_AREA_PER_GALLON = 110;

//constant for the hourly rate of labor
const double HOURLY_RATE = 25.0;


#include "laborHours.cpp"
#include "getWallSquareFeet.cpp"
#include "getPaintPrice.cpp"
#include "getNumberOfRooms.cpp"
#include "getNumberOfGallons.cpp"
#include "displayCost.cpp"

//function prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallSquareFeet();
int numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main(){
  //variables
  int numRooms;
  double paintPrice;
  int totalWallArea = 0;
  int gallons;
  double hours;

  //number of rooms to paintm
  //price of the paint per gallon
  //accumulator for total wall area
  //gallons of paint needed
  //hours of labor needed


  //get the number of rooms
  numRooms = getNumberOfRooms();

  //get the price of paint per gallon
  paintPrice = getPaintPrice();

  //get the total wall area of the rooms
  for(int i = 1; i <= numRooms; i++){
    int wallArea;
    cout << "Room " << i << ": ";
    wallArea = getWallSquareFeet();
    totalWallArea += wallArea;
  }

  //get the number of gallons of paint needed
  gallons = numberOfGallons(totalWallArea);

  //get the number of labor hours needed
  hours = laborHours(totalWallArea);

  //display the total charges
  displayCost(gallons, paintPrice, hours);

  return 0;
}