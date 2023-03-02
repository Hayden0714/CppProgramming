#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
  int yearModel;
  string make;
  int speed;

public:
  // contructor
  Car(int y, string m)
  {
    yearModel = y;
    make = m;
    speed = 0;
  }

  // accelerate funciton
  void accelerate()
  {
    speed += 5;
  }

  // brake function
  void brake()
  {
    speed -= 5;
  }

  // accessor functions
  int getYearMode()
  {
    return yearModel;
  }

  string getMake()
  {
    return make;
  }

  int getSpeed()
  {
    return speed;
  }
};

int main()
{
  int count

      Car porsche(2006, "Porsche");

  cout << "Current Speed: " << porsche.getSpeed() << endl;

  for (count = 0; count < 5; count++)
  {
    porsche.accelerate();
    cout << porsche.getSpeed() << endl;
  }

  for (count = 0; count < 5; count++)
  {
    porsche.brake();
    cout << porsche.getSpeed() << endl;
  }

  return 0;
}