// calculate the students grade
void calcGrade(double testScores[], string &grade, double &average)
{
  double sum = 0.0;

  // calcaulte the sum of the scores
  for (int i = 0; i < SCORES; i++)
  {
    sum += testScores[i];
  }
  // calcaulte the average
  average = sum / SCORES;

  // determine the letter grade
  if (average >= 95)
  {
    grade = "Superkalifragilistic Superfly Geek";
  }
  else
  {
    grade = "not smart";
  }
}