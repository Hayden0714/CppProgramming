// all of the functions that help make up the drink inventory machine
// program


int getUserInput()
{
  int input = 0;
  cout << "Please select a number: " << endl;
  cin >> input;
  return input;
}

double getDoubleInput(){
  double input = 0;
  cout << "How much would you like to put into the machine? Limit of $1.00" << endl;
  cin >> input;
  while(input < 0 || input > 1){
    cout << "You have to put in an amount between 0 and $1" << endl;
    cout << "How much would you like to put into the machine? Limit of $1.00" << endl;
  cin >> input;
  }
  return input;
}

//show the list of drinks
void showMainMenu(Drink *drinks){
  cout << "\n\nThe drinks available are: " << endl;

  for(int i = 0; i < 5; i++){
    cout << "Enter " << i+1 << " for " << drinks[i].name << endl;
  }
  cout << "Enter 6 to exit the program." << endl;
}

//get the money and calculate the change
double collectMoney(int input, Drink *inventory){
  //have the user select a drink to buy
  double total = 0;
      double change = 0;
      double userInput = getDoubleInput();
      change = userInput - inventory[input-1].cost;
      if(change < 0){
        cout << "You did not put enough change in the machine to make a purchase." << endl;
        return 0;
      }else{
        cout << "You will be returned $" << setprecision(2) << fixed << change << endl;
        return userInput;
      }
}