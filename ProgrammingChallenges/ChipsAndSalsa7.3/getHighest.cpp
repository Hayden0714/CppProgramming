//get the highest of the sales in the array
int getHighest(){
  
  int highestIndex = 0;

  for (int i = 0; i < 5; i++){
    if(SALSA_SALES[i] > SALSA_SALES[highestIndex]){
      highestIndex = i;
    }
  }

  return highestIndex;
}