// hayden olmstead
// programming challenge 11.11

#include <iostream>
using namespace std;

// constants
enum budget
{
  HOUSING = 500,
  UTILITIES = 150,
  HOUSEHOLD_EXPENSES = 65,
  TRANSPORTATION = 50,
  FOOD = 250,
  MEDICAL = 30,
  INSURANCE = 100,
  ENTERTAINMENT = 150,
  CLOTHING = 75,
  MISCELLANEOUS = 50
};

const int totalBudget = 1420;

// monthly budget struct
struct MonthlyBudget
{
  float housing, utilities, household_expenses, transportation, food, medical, insurance, entertainment, clothing, miscellaneous;
};

// prototypes
MonthlyBudget getUserInput(MonthlyBudget);
void printReport(MonthlyBudget);

// file includes
#include "functions.cpp"

int main()
{
  // variables
  MonthlyBudget mb;
  // ask the user to fill out what they spent this month
  mb = getUserInput(mb);

  // compare what the user spent with what the budget is and report it to
  // the screen
  printReport(mb);

  return 0;
}