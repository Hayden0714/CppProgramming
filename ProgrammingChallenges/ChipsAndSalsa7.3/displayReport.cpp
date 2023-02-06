//print out all of the information that has been gathered by the program

void displayReport(int lowest, int highest, int total){

  //sales for each type
  for (int i = 0; i < 5; i++){
    cout << endl << "The amount of sales for the " << SALSA_NAMES[i] << " salsa was " << SALSA_SALES[i] << endl;
  }

  //lowest
  cout << endl << "The lowest selling salsa was " << SALSA_NAMES[lowest] << endl;

  //highest
  cout << endl << "The highest selling salsa was " << SALSA_NAMES[highest] << endl;

  //total
  cout << endl << "The total amount of salsa sold was " << total << endl << endl;
}