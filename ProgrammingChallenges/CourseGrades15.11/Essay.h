#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity
{
private:
  int grammarPoints;
  int spellingPoints;
  int lengthPoints;
  int contentPoints;

public:
  Essay(int grammar, int spelling, int length, int content)
  {
    grammarPoints = grammar;
    spellingPoints = spelling;
    lengthPoints = length;
    contentPoints = content;

    double totalScore = grammarPoints + spellingPoints + lengthPoints + contentPoints;
    setScore(totalScore);
  }

  void setGrammarPoints(int points) { grammarPoints = points; }
  int getGrammarPoints() const { return grammarPoints; }

  void setSpellingPoints(int points) { spellingPoints = points; }
  int getSpellingPoints() const { return spellingPoints; }

  void setLengthPoints(int points) { lengthPoints = points; }
  int getLengthPoints() const { return lengthPoints; }

  void setContentPoints(int points) { contentPoints = points; }
  int getContentPoints() const { return contentPoints; }
};

#endif
