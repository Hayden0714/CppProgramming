//get the average amount of food eaten on each day

double getAverageFoodEaten(){
  //loop through each day, figure out how much food was eaten, store in
  //the average array, and move to the next day

  //loop through each day, adding to the total for each day and each
  //monkey, then divide by 5 to see the daily average
  double average = 0;
  int total = 0;

  //go through each column, adding them up
  for (int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      total += monkeys[j][i];
      cout << "monkey number: " << i << " and day number " << j << "and total is " << total << endl;
    }
  }

  //divide the total by 5 to get the average
  average = (double)total / 5;

  return average;
  }
