//get the input from the user to fill out the 2d array

#include <string>

void getInput(){

  //days of the week
  string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

  //for loop for the rows(monkeys)
  for (int i = 0; i < 3; i++){

    //for loop for the columns (days)
    for (int j = 0; j < 5; j++){

      //ask the user for the input of that cell in the array
      int food = 0;
      cout << "Please enter the food eaten in pounds for Monkey " << i + 1 << " on " << days[j] << ": ";
      cin >> food;

      while(food < 0){
        cout << "ERROR: Please enter a positive number for the amount of food eaten.";
        cout << "Please enter the food eaten in pounds for Monkey " << i + 1 << " on " << days[j] << ": ";
        cin >> food;
      }

      monkeys[i][j] = food;
    }
  }
}