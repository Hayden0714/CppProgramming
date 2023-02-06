//get index of largest

int posOfLargest(int values[], int size){

  int indexOfLargest = 0;

  for(int i = 0; i < size; i++){

    if(values[i] > values[indexOfLargest]){
      
      indexOfLargest = i
    }
  }

  return indexOfLargest;
}