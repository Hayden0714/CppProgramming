//this is the binary search method that we will perform on the array

int binarySearch(int arr[], int item, int ARRAY_SIZE){

  //variables
  bool found = false;
  int first = 0;
  int middle;
  int last = ARRAY_SIZE - 1;
  int comparisons = 0;

  while(!found && first <= last){
    //calculate mid point
    middle = (first + last) /2;
    comparisons++;

    //determine if the value is at the mid point
    if(arr[middle] == item){
      found = true;
    }

    else if(arr[middle] > item){
      last = middle -1;
    }

    else{
      first = middle + 1;
    }
  }
  return comparisons;
}