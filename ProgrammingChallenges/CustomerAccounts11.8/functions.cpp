// file that holds all of the functions for the customer accounts program

#include <iomanip>

// get input from the user
int getUserInput()
{
  int input;
  cout << "Please make a selection by choosing a number: " << endl;
  cin >> input;
  return input;
}

// get string input from the user
string getStringInput()
{
  string input;
  cout << "Please enter a string: " << endl;
  cin >> input;
  return input;
}

// show the main menu
void showMainMenu()
{
  cout << "\nHere are your options: " << endl;
  cout << "1 - Enter new data." << endl;
  cout << "2 - Edit existing data." << endl;
  cout << "3 - Display current data." << endl;
  cout << "4 - Search for a customer." << endl;
  cout << "5 - Exit the program." << endl;
}

// display data for a single customer
void displaySingleCustomerData(Customer c)
{
  cout << "Name: " << c.name << endl;
  cout << "Address: " << c.address << endl;
  cout << "City, State, and Zip: " << c.cityStateZip << endl;
  cout << "Phone Number: " << c.phoneNumber << endl;
  cout << "Account Balance: $" << c.balance << endl;
  cout << "Date of Last Payment: " << c.lastPayment << endl;
}

// enter new data
void enterNewData(Customer *arr, int size, int index)
{
  // temp customer
  Customer temp;
  // ask the user to fill out each section for the new entry
  if (index > 9)
  {
    // array is full
    cout << "Sorry there is no more room for new data." << endl;
  }
  else
  {
    cout << "Please enter the name of the customer: " << endl;
    getline(cin, temp.name);

    while (temp.name == "")
    {
      cout << "Please enter the name of the customer: " << endl;
      getline(cin, temp.name);
    }

    cout << "Please enter the address of the customer: " << endl;
    getline(cin, temp.address);
    while (temp.address == "")
    {
      cout << "Please enter the address of the customer: " << endl;
      getline(cin, temp.address);
    }

    cout << "Please enter the City, State, and Zip Code of the customer: " << endl;
    getline(cin, temp.cityStateZip);
    while (temp.cityStateZip == "")
    {
      cout << "Please enter the City, State, and Zip Code of the customer: " << endl;
      getline(cin, temp.cityStateZip);
    }

    cout << "Please enter the Phone Number of the customer: " << endl;
    getline(cin, temp.phoneNumber);
    while (temp.phoneNumber == "")
    {
      cout << "Please enter the Phone Number of the customer: " << endl;
      getline(cin, temp.phoneNumber);
    }

    cout << "Please enter the balance of the account (must be positive): " << endl;
    cin >> temp.balance;

    while ((temp.balance < 0) || (to_string(temp.balance) == ""))
    {
      cout << "Please enter a positive number." << endl;
      cout << "Please enter the balance of the account: " << endl;
      cin >> temp.balance;
    }

    cout << "Please enter the date of the last payment for the account: " << endl;
    getline(cin, temp.lastPayment);
    while (temp.lastPayment == "")
    {
      cout << "Please enter the date of the last payment for the account: " << endl;
      getline(cin, temp.lastPayment);
    }

    // add the temp customer to the array
    arr[index] = temp;

    // say the data back to the customer
    cout << "\nYou have entered: " << endl;
    displaySingleCustomerData(temp);
  }
}

// edit existing data
void editData(Customer *arr, int size)
{

  // have the user select what number in the array they want to
  cout << "Please select a number between 1 - 10" << endl;
  int input = getUserInput();

  // go to that index in the array, and display that customer info
  displaySingleCustomerData(arr[input - 1]);

  // ask the user what piece of information they want to change
  cout << "\nWhat field would you like to change?" << endl;
  cout << "1 - Name" << endl;
  cout << "2 - Address" << endl;
  cout << "3 - City, State, and Zip" << endl;
  cout << "4 - Phone Number" << endl;
  cout << "5 - Account Balance" << endl;
  cout << "6 - Date of Last Payement" << endl;
  int fieldInput;
  cin >> fieldInput;

  // switch case to determine what the user wants to input
  switch (fieldInput)
  {
  case 1:
    cout << "Please enter the name of the customer: " << endl;
    getline(cin, arr[input].name);

    while (arr[input].name == "")
    {
      cout << "Please enter the name of the customer: " << endl;
      getline(cin, arr[input].name);
    }
    break;
  case 2:
    cout << "Please enter the address of the customer: " << endl;
    getline(cin, arr[input].address);
    while (arr[input].address == "")
    {
      cout << "Please enter the address of the customer: " << endl;
      getline(cin, arr[input].address);
    }
    break;
  case 3:
    cout << "Please enter the City, State, and Zip Code of the customer: " << endl;
    getline(cin, arr[input].cityStateZip);
    while (arr[input].cityStateZip == "")
    {
      cout << "Please enter the City, State, and Zip Code of the customer: " << endl;
      getline(cin, arr[input].cityStateZip);
    }
    break;
  case 4:
    cout << "Please enter the Phone Number of the customer: " << endl;
    getline(cin, arr[input].phoneNumber);
    while (arr[input].phoneNumber == "")
    {
      cout << "Please enter the Phone Number of the customer: " << endl;
      getline(cin, arr[input].phoneNumber);
    }
    break;
  case 5:
    cout << "Please enter the balance of the account (must be positive): " << endl;
    cin >> arr[input].balance;

    while ((arr[input].balance < 0) || (to_string(arr[input].balance) == ""))
    {
      cout << "Please enter a positive number." << endl;
      cout << "Please enter the balance of the account: " << endl;
      cin >> arr[input].balance;
    }
    break;
  case 6:
    cout << "Please enter the date of the last payment for the account: " << endl;
    getline(cin, arr[input].lastPayment);
    while (arr[input].lastPayment == "")
    {
      cout << "Please enter the date of the last payment for the account: " << endl;
      getline(cin, arr[input].lastPayment);
    }
    break;
  default:
    break;
  }
}

// search through the array for matching account with the name that is
// entered
void searchData(Customer *arr, int size, string name)
{
  Customer tempCustomers[10];
  int index = 0;
  // loop through the array searching for matches to what was entered
  for (int i = 0; i < size; i++)
  {
    string s1 = arr[i].name;
    if (s1.find(name) != string::npos)
    {
      tempCustomers[index] = arr[i];
      index++;
    }
  }

  cout << "Searching for " << name << "..." << endl;

  // print all of the matches, if none then say that
  if (index > 0)
  {
    cout << "There are " << index << " matches:" << endl;
    for (int i = 0; i < index; i++)
    {
      cout << endl;
      displaySingleCustomerData(arr[i + 1]);
      cout << endl;
    }
  }
  else
  {
    cout << "There were no matches." << endl;
  }
}

// display all of the data in the array
void displayData(Customer arr[], int index)
{
  for (int i = 0; i < index; i++)
  {
    cout << endl;
    displaySingleCustomerData(arr[i + 1]);
    cout << endl;
  }
}