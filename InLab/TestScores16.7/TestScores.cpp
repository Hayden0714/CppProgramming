#include "TestScores.h"
#include "NegativeScore.h"

// constructor
TestScores::TestScores(int scoreArray[], int size)
{

  // assign numscores
  numScores = size;
  // allocate memory
  scores = new int[size];

  // copy the array
  for (int index = 0; index < size; index++)
  {
    if (scoreArray[index] < 0)
    {
      throw NegativeScore(scoreArray[index]);
    }
    else
    {
      scores[index] = scoreArray[index];
    }
  }
}

// get average function
double TestScores::getAverage() const
{
  int total = 0;

  for (int index = 0; index < numScores; index++)
  {
    total += scores[index];
  }

  return static_cast<double>(total) / numScores;
}