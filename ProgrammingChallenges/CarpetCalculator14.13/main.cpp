#include <iostream>
#include <iomanip>
using namespace std;

#include "RoomCarpet.h"

int main()
{
  // variables for the room length
  int lengthFeet, lengthInches;

  // room width
  int widthFeet, widthInches;

  // carpet cost per square foot
  double costPerFoot;

  // get the rooms length
  cout << "Enter the rooms length" << endl;
  cout << "Feet: " << endl;
  cin >> lengthFeet;
  cout << "Inches: " << endl;
  cin >> lengthInches;

  // create a feet inches object for length
  FeetInches length;
  length.setFeet(lengthFeet);
  length.setInches(lengthInches);

  // get the rooms width
  // get the rooms length
  cout << "Enter the rooms width" << endl;
  cout << "Feet: " << endl;
  cin >> widthFeet;
  cout << "Inches: " << endl;
  cin >> widthInches;

  // create a feet inches object for width
  FeetInches width;
  width.setFeet(widthFeet);
  width.setInches(widthInches);

  // create a room dimension object for the room
  RoomDimension rd(length, width);

  // get the carpets cost for the square foot
  cout << "Please enter the cost of the carpet per square foot: " << endl;
  cin >> costPerFoot;

  // create a roomcarpet object
  RoomCarpet rc(rd, costPerFoot);

  // display the cost of the carpet
  cout << showpoint << fixed << setprecision(2);
  cout << "The total cost of the carpet will be " << rc.getTotalCost() << endl;
}