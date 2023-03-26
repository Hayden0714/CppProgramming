#include <iostream>
#include "CourseGrades.h"

int main()
{
  GradedActivity lab(85);               // lab scores 85
  PassFailExam passFailExam(10, 3, 70); // 10 questions, 3 incorrect answers, 70% passing score
  Essay essay(25, 20, 15, 10);          // grammar, spelling, length, and content
  FinalExam finalExam(50, 10);          // 50 questions, 10 incorrect answers

  CourseGrades courseGrades;
  courseGrades.setLab(&lab);
  courseGrades.setPassFailExam(&passFailExam);
  courseGrades.setEssay(&essay);
  courseGrades.setFinalExam(&finalExam);

  courseGrades.print();

  return 0;
}
