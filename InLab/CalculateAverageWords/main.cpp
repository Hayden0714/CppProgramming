#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <fstream>

using namespace std;

#include "functions.cpp"

// prototypes
int countSentences(string);
int countWords(string);

int main()
{
  int sentences;
  int words;
  double average;

  // get the number of sentences in the file
  sentences = countSentences("text.txt");

  // get number of words
  words = countWords("text.txt");

  // calc avergae
  average = static_cast<double>(words) / sentences;

  // dispaly
  cout << "The file ontaints " << words << " words, and " << sentences << " sentences.\n";
  cout << "There is an average of " << setprecision(1) << fixed << average << " words per sentence.\n";

  return 0;
}