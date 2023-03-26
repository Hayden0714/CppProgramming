#include <iostream>
#include "GradedActivity.h"
#include "PassFailExam.h"
#include "Essay.h"
#include "FinalExam.h"

class CourseGrades
{
private:
  GradedActivity *grades[4];

public:
  void setLab(GradedActivity *lab)
  {
    grades[0] = lab;
  }

  void setPassFailExam(PassFailExam *exam)
  {
    grades[1] = exam;
  }

  void setEssay(Essay *essay)
  {
    grades[2] = essay;
  }

  void setFinalExam(FinalExam *finalExam)
  {
    grades[3] = finalExam;
  }

  void print()
  {

    std::cout << "Lab Activity score: " << grades[0]->getScore() << " Grade: " << grades[0]->getLetterGrade() << std::endl;
    std::cout << "Pass Fail Exam score: " << grades[1]->getScore() << " Grade: " << grades[1]->getLetterGrade() << std::endl;
    std::cout << "Essay score: " << grades[2]->getScore() << " Grade: " << grades[2]->getLetterGrade() << std::endl;
    std::cout << "Final Exam score: " << grades[3]->getScore() << " Grade: " << grades[3]->getLetterGrade() << std::endl;
  }
};
