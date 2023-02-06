//Chips and Salsa 7.3
//Hayden Olmstead

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//prototypes
int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

#include "getTotal.cpp"
#include "posOfLargest.cpp"
#include "posOfSmallest.cpp"

int main(){
  //array of salsa types
  const string SALSA_TYPES[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

  //constant number of amount of salsa types
  const int NUM_TYPES = 5;

  //array of sales of each salsa type
  int sales[NUM_TYPES];

  //total number of jars sold
  int totalJarsSold;

  //subscript of the salsa that sold the most
  int hiSalesProduct;

  //subscript of the salsa that sold the least
  int loSalesProduct;

  //get the number jars sold of each type of salsa
  for(int type = 0; type < NUM_TYPES; type++){
    //get the number of jars sold
    cout << "How many jars of " << SALSA_TYPES[type] << " salsa were sold: " endl;
    cin >> sales[i];

    while(sales[type] < 0){
      cout << "ERROR: Please enter a positive number for jars sold."
      cout << "How many jars of " << SALSA_TYPES[type] << " salsa were sold: " endl;
      cin >> sales[type];
    }
  }

  //get total sales and high and low selling products
  totalJarsSold = getTotal(sales, NUM_TYPES);
  hiSalesProduct = posOfLargest(sales, NUM_TYPES);
  loSalesProduct = posOfSmallest(sales, NUM_TYPES);

  //display the sales report header
  cout << endl << endl;
  cout << "   Salsa Sales Report \n\n";
  cout << "Name     Jars Sold \n";
  cout << "----------------------------------\n";

  //display the name and jars sold of each type
  for(int salsaType = 0; salsaType < NUM_TYPES; salsaType++){
    cout << types[salsaType] << setw(21) << sales[salsaType] << endl;
  }

  //display the total sales, highest seller, and lowest seller
  cout << "\nTotal Sales: " << setw(15) << totalJarsSold << endl;
  cout << "High Seller: " << types[hiSalesProduct] << endl;
  cout << "Low Seller: " << types[loSalesProduct] << endl;

  return 0;
}