#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
protected:
  double score;

public:
  GradedActivity(double s = 0.0) : score(s) {}

  void setScore(double s) { score = s; }
  double getScore() const { return score; }
  char getLetterGrade() const
  {
    if (score >= 90)
      return 'A';
    else if (score >= 80)
      return 'B';
    else if (score >= 70)
      return 'C';
    else if (score >= 60)
      return 'D';
    else
      return 'F';
  }
};

#endif
