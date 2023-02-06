double getWallSquareFeet(){

  double wallArea;

  cout << "Enter the area of wall space in square feet: ";
  cin >> wallArea;

  while(wallArea < 0){
    cout << "ERROR: Wall area must be a non-negative number.\n";
    cout << "Enter the area of wall space in square feet: ";
    cin >> wallArea;
  }

  return wallArea;
}