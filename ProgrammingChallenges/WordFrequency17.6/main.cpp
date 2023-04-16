#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

// prototype for the lower case function
void toLowerCase(string &);

int main()
{
  // base variables
  ifstream input_file;
  map<string, int> word_frequencies;

  // open the file
  input_file.open("message.txt");

  // read from the file, for every word that you come across, increment
  // that word in its individual map instnace
  string word;
  while (input_file >> word)
  {
    toLowerCase(word);
    word_frequencies[word]++;
  }

  input_file.close();

  // display the results on the screen
  for (auto &pair : word_frequencies)
  {
    cout << pair.first << ": " << pair.second << endl;
  }

  return 0;
}

void toLowerCase(string &word)
{
  for (auto &c : word)
  {
    c = tolower(c);
  }
}