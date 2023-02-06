//find the most amount of food eaten during the week by any one monkey

int getMostAmountEaten(){

   //loop through both arrays to find the highest amount
  int highest = 0;
  for(int i = 0; i < 3; i++){

    for(int j = 0; j < 5; j++){
      if(monkeys[i][j] > highest){
        highest = monkeys[i][j];
      }
    }
  }

  return highest;
}