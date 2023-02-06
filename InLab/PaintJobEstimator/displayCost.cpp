void displayCost(int gallons, double paintPrice, double hours){

  double totalPaintCost;
  double totalLabor;
  double totalCharges;

  //calculate the total cost
  totalPaintCost = gallons * paintPrice;

  //calculate labor
  totalLabor = hours*HOURLY_RATE;

  //calculate total cost
  totalCharges = totalPaintCost + totalLabor;

  //display the charges for the job
  cout << fixed << showpoint << setprecision(2);
  cout << "\nESTIMATED CHARGES\n";
  cout << "---------------------\n";
  cout << "Gallons of paint: " << gallons << endl;
  cout << "Price per gallon: $" << paintPrice << endl;
  cout << "Paint cost: $" << totalPaintCost << endl;
  cout << "Hours of labor: " << totalLabor << endl;
  cout << "Total Charges: $" << totalCharges << endl;

}