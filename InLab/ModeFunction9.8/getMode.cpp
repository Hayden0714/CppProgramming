//get the mode of the array that is being passed in
int getMode(int* array, int size){
  int mode;

  //pointer to reference a dynamically allocated array
  //to hold frequencies of each value
  int* frequencies = nullptr;

  mode = -1;  //mode initialized to -1
  int highest = 0;  //value with higest frequency
  int element = 0;  //hold an element subscript
  int count = 0;  //loop counter

  //dynamically allocate an array to hold the frequencies of each
  //element in the array, when this function ends, frequencies[0] will
  //hold the frequency of the value in array[0] and so forth
  frequencies = makeArray(size);

  //store 0 in all of them
  for(count =0; count < size; count++){
    frequencies[count] = 0;
  }

  //find frequency of each element in array
  for(int count1 = 0; count1 < size; count1++){
    
    for(int count2 = 0; count2 < size; count2++){
      if(*(array+count2) == *(array+count1))
      (*(frequencies+count1))++;
    }
  }

  //find the element with the highest frequency
  highest = *frequencies;
  element = 0;

  //step through the frequencies array and find the highest value
  for(count = 1; count < size; count++){
    if(*(frequencies + count) > highest){
      highest = *(frequencies + count);
      element = count;
    }
  }

  frequencies = nullptr;

  //if there is no mode, then return -1, and if there is a mode, then
  //return the element with the greatest frequency
  if(highest > 1){
    mode = *(array + element);
  }

  return mode;
}