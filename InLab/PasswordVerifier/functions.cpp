

// write this function 3 different ways
// the way it is
// char* str
// char* str[]
// change up the input parameter and try to get the function to work

bool hasSpecial(char str[])
{
  bool answer = false;
  // write it if you feel like it
  for (int i = 0; i < strlen(str); i++)
  {
    if (!isalpha(str[i]))
    {
      answer = true;
    }
  }
  return answer;
}

bool hasLength(char str[])
{
  // write it if you feel like it
  if (strlen(str) >= 8)
  {
    return true;
  }
  return false;
}

bool hasUpper(char str[])
{
  bool answer = false;
  // write it if you feel like it
  for (int i = 0; i < strlen(str); i++)
  {
    if (isupper(str[i]))
    {
      answer = true;
    }
  }

  return answer;
}

bool hasLower(char str[])
{
  // write it if you feel like it
  bool answer = false;
  // write it if you feel like it
  for (int i = 0; i < strlen(str); i++)
  {
    if (islower(str[i]))
    {
      answer = true;
    }
  }

  return answer;
}

bool hasDigit(char str[])
{
  // write it if you feel like it
  bool answer = false;
  // write it if you feel like it
  for (int i = 0; i < strlen(str); i++)
  {
    if (isdigit(str[i]))
    {
      answer = true;
    }
  }

  return answer;
}

bool isValid(char str[])
{
  bool status = false;

  // determine if the password meets the requirements
  if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str) && hasSpecial(str))
  {
    status = true;
  }

  return status;
}

// functions for the password verifier
void displayResult(char str[])
{
  // determine if password is valid
  if (isValid(str))
  {
    cout << "The password is valid.";
  }
  else
  {
    cout << "The password is invalid.";

    // determine why it is
    if (!hasLength(str))
    {
      cout << "It should be at least " << MIN << " characters long";
    }

    if (!hasLower(str))
    {
      cout << "It should contain at least one lowercase letter.";
    }

    if (!hasUpper(str))
    {
      cout << "It should contain at least one uppercase letter.";
    }

    if (!hasDigit(str))
    {
      cout << "It should have at least one digit.";
    }

    if (!hasSpecial(str))
    {
      cout << "It should have at least one special character.";
    }
  }
}