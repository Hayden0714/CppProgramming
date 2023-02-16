// hayden olmstead
// 11.13 drinking machine simulator

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

// constants

// drink inventory struct
struct Drink
{
  string name;
  double cost;
  int numInMachine;
};

// prototypes
int getUserInput();
void showMainMenu();
void showDrinks(Drink *drinks);
double getDoubleInput();
double collectMoney(int, Drink *drinks);


// file includes
#include "functions.cpp"

int main()
{

  // variables
  bool running = true;
  int input = 0;
  double total = 0;

  Drink inventory[5] = { {"Cola", 0.75, 20},
                         {"Root Beer", 0.75, 20},
                         {"Lemon-Lime", 0.75, 20},
                         {"Grape Soda", 0.80, 20},
                         {"Cream Soda", 0.80, 20} };

  // show the menu, let the user buy a drink or exit the program
  while (running)
  {
    showMainMenu(inventory);
    input = getUserInput();

    
    if(input != 6)
    {
      if(inventory[input-1].numInMachine < 1){
      cout << "Sorry but we are all out of that drink." << endl;
      }else{
      total += collectMoney(input, inventory);
      }
    }else{
      //print how much money was put into the vending machine
      cout << "This vending machine made: $" << setprecision(2) << fixed << total;

      //exit the program
      running = false;
    }
  }

  cout << "\nThank you for using the vending machine!" << endl;

  return 0;
}