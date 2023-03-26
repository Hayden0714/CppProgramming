// header file for the course grades class object
#ifndef COURSE_GRADE_H
#define COURSE_GRADE_H

#include "GradedActivity.h"

class CourseGrade
{
  // member array of graded activity pointers
  GradedActivity *grades[4];

  // constructor

  // member functions

  // setlab
  void setLab(LabActivity &lab)
  {
    grades[0] = &lab;
  }

  // set essay
  void setEssay(Essay &essay)
  {
    grades[1] = &essay;
  }

  // setpassfailexam
  void setPassFail(PassFailExam &passFail)
  {
    grades[2] = &passFail;
  }

  // setfinalexam
  void setFinalExam(FinalExam &finalExam)
  {
    grades[3] = &finalExam;
  }

  // print all scores for the course grades
};

#endif