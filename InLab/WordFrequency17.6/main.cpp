#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main(){
  //variables
  string filename, input;

  //file objects
  ifstream file;

  //map to hold the words and their frequencies
  map<string, int> words;

  //get name of file
  cout << "Enter a filename: ";
  getline(cin, filename);

  //open the file
  file.open(filename);

  //while not at the end of the file
  while(file >> input){
    if(words.count(input))
      words[input]++;
    else
      words.emplace(make_pair(input, 1));
  }

  //close the file
  file.close();

  //display the word frequency
  cout << "\nWord Frequency: ";
  cout << "\n---------------" << endl;
  for(auto element : words){
    cout << element.first << ": " << element.second << endl;
  }

  return 0;
}