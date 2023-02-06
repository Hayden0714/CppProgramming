//get the lowest sales value in the array
int getLowest(){
  
  int lowestIndex = 0;

  for (int i = 0; i < 5; i++){
    if(SALSA_SALES[i] < SALSA_SALES[lowestIndex]){
      lowestIndex = i;
    }
  }

  return lowestIndex;
}