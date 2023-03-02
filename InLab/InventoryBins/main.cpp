#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

const int NUM_BINS = 10;

struct InventoryBin
{
  string description;
  int num;
};

void selectBin(InventoryBin &[], int);
void addParts(InventoryBin &, int);
void removeParts(InventoryBin &, int);

int main()
{
  int choice;

  // bin array

  do
  {
    // display each bin in a menu

    // get the users choice of bin

    // validate the users choice

    // process the choice
  } while (choice != 0);

  return 0;
}