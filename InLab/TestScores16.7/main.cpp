// test scores 17.6 i think
// hayden olmstead

#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"
using namespace std;

const int NUM_SCORES = 5;

int main()
{
  try
  {
    // create an array of valid scores
    int myScores[NUM_SCORES] = {1, 2, 3, 4, 5};

    // create a testscores object
    TestScores myTestScores(myScores, NUM_SCORES);

    // display the average
    cout << "The average score is " << myTestScores.getAverage() << endl;

    // test a bad array
    int badScores[NUM_SCORES] = {-1, 2, 3, 4, 5};

    TestScores badTestScores(badScores, NUM_SCORES);

    cout << "The average is " << badTestScores.getAverage() << endl;
  }
  catch (NegativeScore e)
  {
    cout << "An invalid score was found. The invalid score is " << e.getScore() << endl;
  }

  return 0;
}