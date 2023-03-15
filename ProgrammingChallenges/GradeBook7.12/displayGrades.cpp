// display the data

void displayData(string name, double testScores[], double average, string grade)
{
  // display the students name
  cout << "\nName: " << name << endl;

  // display the students scores
  for (int i = 0; i < SCORES; i++)
  {
    cout << "Test " << (i + 1) << ": " << testScores[i] << endl;
  }

  // display the average score
  cout << "Average: " << average << endl;

  // display the letter grade
  cout << "Degree of Geek: " << grade << endl;
}