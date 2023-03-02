//functions for the password verifier
void displayResult(char str[]){
  //determine if password is valid
  if(isValid(str)){
    cout << "The password is valid.";

  }else{
    cout << "The password is invalid.";

    //determine why it is
    if(!hasLength(str)){
      cout << "It should be at least " << MIN << " characters long";
    }

    if(!hasLower(str)){
      cout << "It should contain at least one lowercase letter.";
    }

    if(!hasUpper(str)){
      cout << "It should contain at least one uppercase letter.";
    }

    if(!hasDigit(str)){
      cout << "It should have at least one digit.";
    }
  }
}

//write this function 3 different ways
//the way it is
//char* str
//char* str[]
//change up the input parameter and try to get the function to work
bool isValid(char str[]){
  bool status = false;

  //determine if the password meets the requirements
  if(hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)){
    status = true;
  }
  

  return status;
}

bool hasLength(char str[]){
  //write it if you feel like it
}

bool hasUpper(char str[]){
  //write it if you feel like it
}

bool hasLower(char str[]){
  //write it if you feel like it
}

bool hasDigit(char str[]){
  //write it if you feel like it
}