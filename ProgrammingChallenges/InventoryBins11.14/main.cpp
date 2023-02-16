//hayden olmstead
//inventory bins 11.14

#include <iostream>
#include <iomanip>
using namespace std;

//constants
int NUM_BINS = 10;

//structs
struct Bin {
  string description;
  int numParts;
};

//prototypes
void displayInventory(Bin *bins, int);
void addParts(Bin *bins, int);
void removeParts(Bin *bins, int);
int getIntInput();
void displayMenu();

//file includes
#include "functions.cpp"

int main(){
  //variables
  bool running = true;
  int input = 0;
  Bin inventory[10] = {{"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7}, {"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};

  //while loop, that lets user quit program or upate a bin, the user can
  //then add or remove parts from a bin, then they program prints out
  //the updated inventory
  while(running){
    
    //display the inventory
    displayInventory(inventory, NUM_BINS);
    
    //display menu
    displayMenu();
    
    //ask the user if they want to add, remove, or exit the program
    input = getIntInput();

    if(input == 1){
      //add part
      addParts(inventory, NUM_BINS);
    }else if(input == 2){
      //remove part
      removeParts(inventory, NUM_BINS);
    }else if(input == 3){
      //exit the program
      running = false;
    }else{
      cout << "That is not a valid input, please try again." << endl;
    }
  }

  cout << "Thank you for using the program!" << endl;


  return 0;
}