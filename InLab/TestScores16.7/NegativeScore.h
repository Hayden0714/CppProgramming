#ifndef NEGATIVE_SCORE_H
#define NEGATIVE_SCORE_H

class NegativeScore
{
private:
  int score;

public:
  NegativeScore(int s)
  {
    score = s;
  }

  int getScore() const
  {
    return score;
  }
};
#endif