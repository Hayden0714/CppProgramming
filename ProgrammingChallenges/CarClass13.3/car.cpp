//this is my car class that is used in 13.3
class Car {
  public:
    int year;
    string make;
    int speed;

    Car(int x, string y){
      year = x;
      make = y;
      speed = 0;
    }

    //getters
    int getYear(){
      return year;
    }

    string getMake(){
      return make;
    }

    int getSpeed(){
      return speed;
    }

    //setters
    void setYear(int y){
      year = y;
    }

    void setMake(string s){
      make = s;
    }

    void setSpeed(int s){
      speed = s;
    }

    //accelerate and braking functions
    void accelerate(){
      cout << "Accelerating..." << endl;
      speed += 5;
      cout << "The car is now going " << speed << "mph." << endl;
    }

    void brake(){
      cout << "Braking..." << endl;
      speed -= 5;
      cout << "The car is now going " << speed << "mph." << endl;
    }
    
};