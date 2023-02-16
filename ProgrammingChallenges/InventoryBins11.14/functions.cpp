//functions file for the inventory bins 11.14 assignment

int getIntInput(){
  int input;
  cout << "Please make a selection: " << endl;
  cin >> input;
  return input;
}

void displayMenu(){
  cout << "\nPlease select from the following: " << endl;
  cout << "1 - Add Parts" << endl;
  cout << "2 - Remove Parts" << endl;
  cout << "3 - Exit the program" << endl;
}

void displayInventory(Bin* inventory, int size){
  //for each bin in the inventory, print the description and the amount
  cout << left << setw(20) << setfill(' ') << "\n\nPart Description" << "Number of Parts" << endl;
  for(int i = 0; i < size; i++){
    
    cout << left << setw(20) << setfill(' ') << inventory[i].description << inventory[i].numParts << endl;
  }
}

void addParts(Bin* inventory, int size){
  int input;
  cout << "Which bin would you like to add parts to?" << endl;
  cin >> input;

  while(input < 0 || input > size){
    cout << "You can only choose betwwen 1 and 10." << endl;
    cout << "Which bin would you like to add parts to?" << endl;
    cin >> input;
  }

  //ask how many parts
  int parts;
  cout << "How many parts would you like to add?" << endl;
  cin >> parts;

  while(parts < 0 || (parts + inventory[input-1].numParts) > 30){
    cout << "You cannot add a negative amount, and the total parts count cannot exceed 30." << endl;
    cout << "How many parts would you like to add?" << endl;
    cin >> parts;
  }

  //add the parts to the inventory
  inventory[input-1].numParts += parts;
}

void removeParts(Bin* inventory, int size){
  int input;
  cout << "Which bin would you like to remove parts from?" << endl;
  cin >> input;

  while(input < 0 || input > size){
    cout << "You can only choose betwwen 1 and 10." << endl;
    cout << "Which bin would you like to remove parts from?" << endl;
    cin >> input;
  }

  //ask how many parts
  int parts;
  cout << "How many parts would you like to remove?" << endl;
  cin >> parts;

  while(parts < 0 || (inventory[input-1].numParts - parts) < 0){
    cout << "You cannot remove a negative amount, and the total parts count cannot be less than 0." << endl;
    cout << "How many parts would you like to add?" << endl;
    cin >> parts;
  }

  //add the parts to the inventory
  inventory[input-1].numParts -= parts;
}

