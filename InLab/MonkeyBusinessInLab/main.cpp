//Hayden Olmstead
//Monkey Business 7.5

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//constants
const int NUM_DAYS = 5;
const int NUM_MONKEYS = 3;

//functino prototypes
void getFoodEaten(double[][NUM_DAYS]);
void displayAverageDaily(double[][NUM_DAYS]);
void displayLeastEaten(double[][NUM_DAYS]);
void displayMostEaten(double[][NUM_DAYS]);

//main
int main(){
  //array to hold the monkey data
  double food[NUM_MONKEYS][NUM_DAYS];

  //get the amount eaten
  getFoodEaten(food);

  //dispay the average amount eaten daily by each monkey
  displayAverageDaily(food);

  //display the least amount eaten in a day by any one monkey
  displayLeastEaten(food);

  //display the most eaten in a day by any one monkey
  displayMostEaten(food);


  return 0;
}