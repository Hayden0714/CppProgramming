//procedure class for cpp programming challenge 13.4

class Procedure {
  string name;
  string date;
  string practitioner;
  double charge;

  Procedure(string n, string d, string p, double c){
    name = n;
    date = d;
    practitioner = p;
    charge = c;
  }

  //getters
  string getName(){
    return name;
  }

  string getDate(){
    return date;
  }

  string getPractitioner(){
    return practitioner;
  }

  string getCharge(){
    return charge;
  }

  //setters
  void setName(string n){
    name = n;
  }

  void setDate(string d){
    date = d;
  }

  void setPractitioner(string p){
    practitioner = p;
  }

  void setCharge(double c){
    charge = c;
  }

  //print all information of a procedure
  void printProcedure(){
    cout << "Procedure Name: " << name << endl;
    cout << "Date of Procedure: " << date << endl;
    cout << "Practitioner who performed procedure: " << practitioner << endl;
    cout << "Charge for the procedure: " << charge << endl;
  }
}