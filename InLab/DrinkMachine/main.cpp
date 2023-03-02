#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

const int NUM_DRINKS = 5;

struct Drink{
  string name;
  double price;
  int num;
};

int getChoice(Drink []);
void transaction(Drink [], int, double &);

int main(){
  //menu choice
  int choice;

  //drink machine earnings
  double earnings;

  //array of drinks in the machine
  Drink machine[NUM_DRINKS] = {
    {"Cola", 0.75, 20}, {"Root Beer", .75, 20}, {"Lemon-Lime", 0.75, 20},
    {"Grape Soda", 0.8, 20}, {"Cream Soda", 0.8, 20}};
  }

  //set the flaoting point output formatting
  cout << fixed << showpoint << setprecision(2);

  //display the menu and process the users choice
  choice = getChoice(machine);
  while(choice != 5){
    //process transaction
    transaction(machine, choice, earnings);

    //get the next choice
    choice = getChoice(machine);
  }

  //display the machines total earnings
  cout << "Total earnings: $" << earnings << endl;

  return 0;
}