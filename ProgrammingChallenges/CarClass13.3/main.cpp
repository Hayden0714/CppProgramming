//hayden olmstead
//car class 13.3 programming challenge

#include <iostream>
using namespace std;

//file includes
#include "car.cpp"

int main(){
  //create a car
  Car myCar(2012, "Subaru");

  //accelerate 5 times
  for(int i = 0; i < 5; i++){
    cout << endl;
    myCar.accelerate();
  }

  //brake 5 times
  for(int i = 0; i < 5; i++){
    cout << endl;
    myCar.brake();
  }



  return 0;
}