// functions

int getChoice(Drink m[])
{
  // users choice
  int choice;

  // display a list of drinks perceded by a number
  for (int i = 0; i < NUM_DRINKS; i++)
  {
    cout << (i + 1) << ") " << m[i].name << "\t\t";
    cout << m[i].price << endl;
  }

  // display the last item, which is to leave the machine
  cout << (NUM_DRINKS + 1) << ") Leave the drink machine\n\n";

  cout << "Choose one: ";
  cin >> choice;

  while (choice < 1 || choice > 6)
  {
    cout << "Bad choice, Choose one: ";
    cin >> choice;
  }

  return choice - 1;
}