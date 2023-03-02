// functions for the calculate average words program
int countSentences(string filename)
{
  const int SIZE = 500;
  char input[SIZE];
  fstream inputFile;
  int numSentences = 0;

  // open the file in input mode
  inputFile.open(filename, ios::in);
  if (!inputFile)
  {
    cout << "ERROR: Cannot open file.";
    exit(0);
  }

  // read the file contents
  inputFile.getline(input, SIZE);
  while (!inputFile.eof())
  {
    for (int index = 0; input[index] != '\0'; index++)
    {
      if (input[index] == '.')
      {
        numSentences++;
      }
    }
    inputFile.getline(input, SIZE);
  }

  inputFile.close();

  // close the file

  return numSentences;
}

// count the words in the file
int countWords(string filename)
{
  const int SIZE = 500;
  char input[SIZE];
  fstream inputFile;
  int numWords = 0;

  // open the file in input mode
  inputFile.open(filename, ios::in);
  if (!inputFile)
  {
    cout << "ERROR: Cannot open file.";
    exit(0);
  }

  // read the file contents
  inputFile.getline(input, SIZE);
  while (!inputFile.eof())
  {
    int index = 0;
    while (input[index] != '\0')
    {
      while (isspace(input[index]) && input[index] != '\0')
        index++;

      if (input[index] != '\0')
      {
        numWords++;

        while (isspace(input[index]) && input[index] != '\0')
          index++;
      }
    }

    inputFile.getline(input, SIZE);
  }

  inputFile.close();

  return numWords;
}