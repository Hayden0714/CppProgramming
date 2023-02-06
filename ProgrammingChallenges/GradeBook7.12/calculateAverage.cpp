//calculate the students grade
void calcGrade(double testScores[], char& grade, double& average){
  double sum = 0.0;

  //calcaulte the sum of the scores
  for(int i = 0;i < SCORES; i++){
    sum += testScores[i];
  }
    //calcaulte the average
    average = sum / SCORES;

    //determine the letter grade
    if(average >= 90){
      grade = 'A';
    }else if(average >= 80){
      grade = 'B';
    }else if(average >= 70){
      grade = 'C';
    }else if(average >=60){
      grade = 'D';
    }else{
      grade = 'F';
    }
  
}