// all of the functions needed for the monthly budget program 11.11
#include <iomanip>

void printLine(float budget, float spent)
{
  // print each line that we need in print report
  float difference = budget - spent;

  if (difference > 0)
  {
    cout << "You were under budget in this category by $" << difference << endl;
  }
  else
  {
    float num = 0 - difference;
    cout << "You were over budget in this category by $" << num << endl;
  };
  cout << endl;
}

MonthlyBudget getUserInput(MonthlyBudget mb)
{

  cout << "Please enter the amount spent on Housing: " << endl;
  cin >> mb.housing;

  cout << "Please enter the amount spent on Utilities: " << endl;
  cin >> mb.utilities;

  cout << "Please enter the amount spent on Household Expenses: " << endl;
  cin >> mb.household_expenses;

  cout << "Please enter the amount spent on Transportation: " << endl;
  cin >> mb.transportation;

  cout << "Please enter the amount spent on Food: " << endl;
  cin >> mb.food;

  cout << "Please enter the amount spent on Medical: " << endl;
  cin >> mb.medical;

  cout << "Please enter the amount spent on Insurance: " << endl;
  cin >> mb.insurance;

  cout << "Please enter the amount spent on Entertainment: " << endl;
  cin >> mb.entertainment;

  cout << "Please enter the amount spent on Clothing: " << endl;
  cin >> mb.clothing;

  cout << "Please enter the amount spent on Miscellaneous: " << endl;
  cin >> mb.miscellaneous;

  return mb;
}

// go through each part of the budget, compare it to the
void printReport(MonthlyBudget mb)
{
  // go through each line comparing the numbers
  cout << "\nFor the Housing budget: " << endl;
  printLine(HOUSING, mb.housing);

  cout << "For the Utilities budget: " << endl;
  printLine(UTILITIES, mb.utilities);

  cout << "For the Household Expenses budget: " << endl;
  printLine(HOUSEHOLD_EXPENSES, mb.household_expenses);

  cout << "For the Transportation budget: " << endl;
  printLine(TRANSPORTATION, mb.transportation);

  cout << "For the Food budget: " << endl;
  printLine(FOOD, mb.food);

  cout << "For the Medical budget: " << endl;
  printLine(MEDICAL, mb.medical);

  cout << "For the Insurance budget: " << endl;
  printLine(INSURANCE, mb.insurance);

  cout << "For the Entertainment budget: " << endl;
  printLine(ENTERTAINMENT, mb.entertainment);

  cout << "For the Clothing budget: " << endl;
  printLine(CLOTHING, mb.clothing);

  cout << "For the Miscellaneous budget: " << endl;
  printLine(MISCELLANEOUS, mb.miscellaneous);
}