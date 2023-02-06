//get the input from the user

void inputData(string& name, double testScores[]){
  //get each name
  cout << "Student's name: ";
  getline(cin, name);

  //get the test scores
  for(int score = 0; score < SCORES; score++){
    cout << "Test score " << (score + 1) << ": ";
    cin >> testScores[score];

    while(score > 100 || score < 0){
      cout << "ERROR: Please enter a number between 0 and 100.";
      cout << "Test score " << (score + 1) << ": ";
      cin >> testScores[score];
    }
  }
}