//function that searches an array using a linear search

int linearSearch(int *arr, int item, int ARRAY_SIZE){

  //declare variables
  int comparisons = 0;

  //search for the values
  for(int i = 0; i < ARRAY_SIZE; i++){
    if(arr[i] == item){
      //keep track of how many comparisons are made
      comparisons++;
      break;
    }else{
      comparisons++;
    }
  }
  return comparisons;
}