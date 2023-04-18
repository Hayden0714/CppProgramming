#ifndef TEST_SCORES_H
#define TEST_SCORES_H
#include <stdio.h>
class TestScores
{
private:
  int numScores;
  int *scores;

public:
  TestScores()
  {
    numScores = 0;
    scores = nullptr;
  }

  TestScores(int[], int);

  double getAverage() const;
};

#endif