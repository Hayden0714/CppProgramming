#ifndef FINALEXAM_H
#define FINALEXAM_H

#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
private:
  int numQuestions;
  double pointsEach;
  int numMissed;

public:
  FinalExam(int questions, int missed)
  {
    set(questions, missed);
  }

  void set(int questions, int missed)
  {
    numQuestions = questions;
    numMissed = missed;
    pointsEach = 100.0 / numQuestions;
    double numericScore = (numQuestions - missed) * pointsEach;
    setScore(numericScore);
  }

  int getNumQuestions() const { return numQuestions; }
  double getPointsEach() const { return pointsEach; }
  int getNumMissed() const { return numMissed; }
};

#endif
