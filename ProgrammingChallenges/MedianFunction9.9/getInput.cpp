// get the input for the array
#include <iostream>
#include <iomanip>

void getInput(int *arr, int n)
{
    cout << "Enter the values of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    cout << "The elements of the array are -\n";
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    cout << endl; // to print next line
}