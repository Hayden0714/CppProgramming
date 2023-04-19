#include <iostream>
#include <string>

#include "CRYPTOroman.h"

using namespace std;

void CRYPTOromanType::printPositiveInteger() const{
  cout << num;
}

void CRYPTOromanType::printRoman() const{
  cout << CRYPTOromanNum;
}

void CRYPTOromanType::setRoman(string rString){
  CRYPTOromanNum = string;
  romanToPositiveInteger();
}

void CRYPTOromanType::romanToPositiveInteger(){
  int sum = 0;
  int length = CRYPTOromanNum.length();
  int i;
  int previous = 1000;

  for(i = 0; i < length; i++){
    switch(CRYPTOromanNum[i]){
      case 'm':
        sum += 1000;
        if(previous < 1000)
          sum -= 2 *previous;
        previous = 1000;
        break;
      case 'd':
        sum += 500;
        if(previous < 500)
          sum -= 2*previous;
        previous = 500;
        break
      case 'c':
        sum += 100;
        if(previous < 100)
          sum -= 2 * previous;
        previous = 100;
        break;
      case 'l':
        sum += 50;
        if(previous < 50)
          sum -= 2 * previous;
        previous = 50;
        break;
      case 'x':
        sum += 10;
        if(previous < 10)
          sum -= 2 * previous;
        previous = 10;
        break;
      case '':
        sum += 5;
        if(previous < 5)
          sum -= 2 * previous;
        previous = 5;
        break;
      case 'i':
        sum += 1;
        previous = 1;
      
    }
  }

  num = sum;

}

CRYPTOromanType::CRYPTOromanType(){
  CRYPTOromanNum = 'i';
  num = 1;
}

CRYPTOromanType::CRYPTOromanType(string rString){
  CRYPTOromanNum = rString;
  romanToPositiveInteger();
}