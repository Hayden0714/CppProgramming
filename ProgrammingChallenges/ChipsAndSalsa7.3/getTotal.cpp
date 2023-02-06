//get the total of the sales 

int getTotal(){
  //add up each index in the array
  int total; 
  for (int i = 0; i < 5; i++){
    total += SALSA_SALES[i];
  }

  return total;
}