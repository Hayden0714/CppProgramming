double getPaintPrice(){

  double price;

  //get price per gallon
  cout << "Enter the price of the paint, per gallon: ";
  cin >> price;

  while(price < 10.0){
    cout << "ERROR: Price must be 10 or greater.\n";
    cout << "Enter the price of the paint, per gallon: ";
    cin >> price;
  }
  
  return price;
}