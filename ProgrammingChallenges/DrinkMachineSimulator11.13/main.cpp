// hayden olmstead
// 11.13 drinking machine simulator

#include <iostream>
#include <cstring>
using namespace std;

// constants

// prototypes
int getUserInput();
void showMainMenu();

// drink inventory struct
struct Drink
{
  string name;
  double cost;
  int numInMachine
};

// file includes
#include "functions.cpp"

int main()
{

  // variables
  bool running = true;
  int input = 0;
  Drink inventory[5] = { {"Cola", 0.75, 20},
                         {"Root Beer", 0.75, 20},
                         {"Lemon-Lime", 0.75, 20},
                         {"Grape Soda", 0.80, 20},
                         {"Cream Soda", 0.80, 20} }

  // show the menu, let the user buy a drink or exit the program
  while (running)
  {
    showMainMenu();
    input = getUserInput();

    switch (input)
    {
    case 1:
      // the user wants to buy a drink
      break;
    case 2:
      // the user wants to exit the program

      // display a report of how much money the machine made

      // set running to false and exit
      break;
    default:
      break;
    }
  }

  return 0;
}