//find the index of the smallest element

int posOfSmallest(int values[], int size){

  int indexOfSmallest = 0;

  for(int i = 0; i < size; i++){

    if(values[i] < values[indexOfSmallest]){
      
      indexOfSmallest = i;
    }
  }

  return indexOfSmallest;
}