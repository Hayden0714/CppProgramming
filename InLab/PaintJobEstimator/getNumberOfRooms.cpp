int getNumberOfRooms(){

  int rooms;

  cout << "Enter the number of rooms to be painted: ";
  cin >> rooms;

  //validate the input
  while(rooms < 1){
    cout << "ERROR: Enter 1 or greater.\n";
    cout << "Enter the number of rooms to be painted: ";
    cin >> rooms;
  }

  return rooms;
}