//main
#include <iostream>
#include "CRYPTOroman.h"
using namespace std;

int main(){
  CRYPTOromanType roman;
  string romanString;

  cout << "Enter a CRYPTO roman number: ";
  cin >> romanString;
  cout << endl;

  roman.setRoman(romanString);

  cout << "The equivalent of the CRYPTO Roman numeral " << romanString << " is ";
  roman.printPositiveInteger();
  cout << endl;

  return 0;
}