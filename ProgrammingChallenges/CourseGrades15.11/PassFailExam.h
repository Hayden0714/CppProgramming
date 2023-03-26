#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H

#include "GradedActivity.h"

class PassFailExam : public GradedActivity
{
private:
  int numQuestions;
  double pointsEach;
  int numMissed;
  double minPassing;

public:
  PassFailExam(int questions, int missed, double minPass)
  {
    minPassing = minPass;
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
  double getMinPassing() const { return minPassing; }
  char getLetterGrade() const
  {
    if (score >= minPassing)
      return 'P';
    else
      return 'F';
  }
};

#endif
