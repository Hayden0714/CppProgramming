// this is the header file for the graded activity class object
#ifndef GRADED_ACTIVITY_H
#define GRADED_ACTIVITY_H

#include <iostream>
#include <stdio.h>

class GradedActivity
{
  // members
  int grade;

public:
  GradedActivity(int g)
  {
    grade = g;
  }
  void
  setScore(int score)
  {
    grade = score;
  }

  int getScore()
  {
    return grade;
  }
};

class PassFailExam : public GradedActivity
{
  // members
  int questions;
  int correctQuestions;
  bool passed;

public:
  PassFailExam(int g, int q) : GradedActivity(g)
  {
    correctQuestions = q;
    questions = 10;
    if (q > 6)
    {
      passed = true;
    }
    else
    {
      passed = false;
    }
  }

  int getQuestions()
  {
    return questions;
  }
  bool getPassed()
  {
    return passed;
  }
};

// lab activity class
class LabActivity : public GradedActivity
{
  // members
  int score;

public:
  int getScore()
  {
    return score;
  }
};

// final exam class
class FinalExam : public GradedActivity
{
  // members
  int questions;

public:
  // have to pass a grade to the final exame
  FinalExam(int g) : GradedActivity(g)
  {
    questions = 50;
  }
  int getQuestions()
  {
    return questions;
  }
};

// essay class
class Essay : public GradedActivity
{
  int score;

public:
  // have to set the score and the grade
  Essay(int s, int g) : GradedActivity(g)
  {
    score = s;
  }
  int getScore()
  {
    return score;
  }
};

#endif