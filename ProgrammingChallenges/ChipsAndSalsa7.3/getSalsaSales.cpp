//get all of the sales for the salsa

void getSalsaSales(){
  //ask the user for the sales on all 5 salsas
  for(int i = 0; i < 5; i++){
    
    //ask for the number
    int sales;
    cout << "Please enter the amount of sales for the " << SALSA_NAMES[i] << " salsa: ";
    cin >> sales;

    while(sales < 0){
      
      cout << "ERROR: Please enter only positive numbers." << endl;
      cout << "Please enter the amount of sales for the " << SALSA_NAMES[i] << " salsa: ";
      cin >> sales;
    }
    
    SALSA_SALES[i] = sales;
  }
}