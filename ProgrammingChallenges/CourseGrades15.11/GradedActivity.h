// this is the header file for the graded activity class object
#ifndef GRADED_ACTIVITY_H
#define GRADED_ACTIVITY_H

class GradedActivity
{
  // members
  int gradedScore;

public:
  void setScore(int score)
  {
    gradedScore = score;
  }

  int getScore()
  {
    return gradedScore;
  }
};

class PassFailExam : public GradedActivity
{
  // members
  int questions = 10;

public:
  int getQuestions()
  {
    return questions;
  }
};

// lab activity class
class LabActivity : public GradedActivity
{
  // members

public:
};

// final exam class
class FinalExam : public GradedActivity
{
  // members
  int questions = 50;

public:
  int getQuestions()
  {
    return questions;
  }
};

// essay class
class Essay : public GradedActivity
{

public:
};

#endif