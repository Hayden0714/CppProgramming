//figure out the least amount of food eaten during the week by any one
//monkey

int getLeastAmountEaten(){

  //loop through both arrays to find the lowest amount
  int lowest = 100;
  for(int i = 0; i < 3; i++){

    for(int j = 0; j < 5; j++){
      if(monkeys[i][j] < lowest){
        lowest = monkeys[i][j];
      }
    }
  }

  return lowest;
}