//Hayden Olmstead
//In Lab

//Write a function that takes in mass and velocity and spits out the
//amount of kinetic enery is in the object

#include <iostream>
using namespace std;

//prototypes
double kineticEnergy(double, double);

int main(){

  //variables
  double mass;
  double velocity;

  //get the objects mass
  cout << "Please enter the mass in kilograms: ";
  cin >> mass;

  //get the objects velocity
  cout << "Please enter the velocity in meters per second: ";
  cin >> velocity;

  //display the objects kinetic energy
  cout << "The object's kinetic energy is " << kineticEnergy(mass, velocity) << " joules.\n";

  return 0;
}

double kineticEnergy(double mass, double velocity){
  return 0.5*mass*velocity*velocity;
}