//7.12 Hayden Olmstead
//Grade Book Problem

#include <iostream>
#include <iomanip>
using namespace std;

//global constats
const int STUDENTS = 5;
const int SCORES = 4;

//prototypes
void inputData(string&, double[]);
void calcGrade(double[], char&, double&);
void displayData(string, double[], double, char);

#include "displayGrades.cpp"
#include "getInput.cpp"
#include "calculateAverage.cpp"

//main
int main(){
  string names[STUDENTS];
  char grades[STUDENTS];
  double averages[STUDENTS];
  double student1[SCORES];
  double student2[SCORES];
  double student3[SCORES];
  double student4[SCORES];
  double student5[SCORES];

  //get student 1's data and calculate a grade
  cout << "Enter the data for Student 1. \n";
  inputData(names[0], student1);
  calcGrade(student1, grades[0], averages[0]);

  //get student 1's data and calculate a grade
  cout << "Enter the data for Student 2. \n";
  cin.ignore();
  inputData(names[1], student2);
  calcGrade(student2, grades[1], averages[1]);

  //get student 1's data and calculate a grade
  cout << "Enter the data for Student 3. \n";
  cin.ignore();
  inputData(names[2], student3);
  calcGrade(student3, grades[2], averages[2]);

  //get student 1's data and calculate a grade
  cout << "Enter the data for Student 4. \n";
  cin.ignore();
  inputData(names[3], student4);
  calcGrade(student4, grades[3], averages[3]);

  //get student 1's data and calculate a grade
  cout << "Enter the data for Student 5. \n";
  cin.ignore();
  inputData(names[4], student5);
  calcGrade(student5, grades[4], averages[4]);

  //display the data
  displayData(names[0], student1, averages[0], grades[0]);

  displayData(names[1], student2, averages[1], grades[1]);

  displayData(names[2], student3, averages[2], grades[2]);

  displayData(names[3], student4, averages[3], grades[3]);

  displayData(names[4], student5, averages[4], grades[4]);

}