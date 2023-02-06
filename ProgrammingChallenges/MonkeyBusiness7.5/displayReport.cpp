//print out all of the information required by the problem
#include <iomanip>
void displayReport(int lowest, int highest, int average){

  //average
  cout << endl << "The average amount of food eaten per day by the whole family of monkeys is: " << setprecision(2) << fixed << average << endl;

  //lowest eaten
  cout << "The least amount of food eaten during the week by any one monkey was: " << lowest << endl;

  //most eaten
  cout << "The most amount of food eaten during the week by any one monkey was: " << highest << endl;
}