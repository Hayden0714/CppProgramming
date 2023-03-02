#include <iostream>
#include <fstream>
using namespace std;

// constants
const int SIZE = 12;

// divisino structure
struct Division
{
  char divName[SIZE];
  int quarter;
  double sales;
};

int main()
{
  // file stream object
  // adding ios::binary avoids translating new line characters, but is
  // still same as ios::in in this case
  fstream file("corp.dat", ios::out | ios::binary);

  // division structure for each division
  Division east, west, north, south;

  // loop counter for each quarter
  int qtr;

  // assign the division names to the division structure variables
  strcpy_s(east.divName, "East");
  strcpy_s(west.divName, "West");
  strcpy_s(north.divName, "North");
  strcpy_s(south.divName, "South");

  cout << "Enter the quarterly sales for the East Division:\n";
  for (qtr = 1; qtr <= 4; qtr++)
  {
    east.quarter = qtr;
    cout << "\tQuarter " << qtr << ": ";
    cin >> east.sales;
    file.write(reinterpret_cast_cast<char *>(&east), sizeof(east));
  }
  cout << "Enter the quarterly sales for the West Division:\n";
  for (qtr = 1; qtr <= 4; qtr++)
  {
    west.quarter = qtr;
    cout << "\tQuarter " << qtr << ": ";
    cin >> west.sales;
    file.write(reinterpret_cast_cast<char *>(&west), sizeof(west));
  }

  cout << "Enter the quarterly sales for the South Division:\n";
  for (qtr = 1; qtr <= 4; qtr++)
  {
    south.quarter = qtr;
    cout << "\tQuarter " << qtr << ": ";
    cin >> south.sales;
    file.write(reinterpret_cast_cast<char *>(&south), sizeof(south));
  }
  cout << "Enter the quarterly sales for the North Division:\n";
  for (qtr = 1; qtr <= 4; qtr++)
  {
    north.quarter = qtr;
    cout << "\tQuarter " << qtr << ": ";
    cin >> north.sales;
    file.write(reinterpret_cast_cast<char *>(&north), sizeof(north));
  }
}