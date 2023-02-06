#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes

int main(){

  //variables
  int ns; //number of shares
  double sp;  //sale price per share
  double sc;  //sale commission
  double pp;  //purchase price per share
  double pc;  //purchase commission
  double prof;  //profit from a sale

  //get the number of shares
  cout << "How many shares did you buy and then sell? ";
  cin ns;

  //get the purchase price per share
  cout << "What price did you pay for the stock? ";
  cin >> pp;

  //get the purchase commission
  cout << "What was the purchase commission? ";
  cin >> pc;

  //get the sale price per share
  cout << "What was the sale price per share? ";
  cin >> sp;

  //get the sales commission
  cout << "What was the sales commission? ";
  cin >> sc;

  //get the profit or loss
  prof = profit(ns, pp, pc, sp, sc);

  cout << "The profit from this sale of stock is $" << setprecision(2) << fixed << showpoint << prof << endl;

  //Display the result

  return 0;
}

double profit(double ns, double pp, double pc, double sp, double sc){
  return ((ns*sp) -sc) - ((ns*pp) + pc);
}