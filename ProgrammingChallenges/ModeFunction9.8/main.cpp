// Hayden Olmstead
// Mode Function 9.8

// This is pretty much the exact same as the median function that I
// wrote, just swapped out the getMedian function for a getMode function

#include <iostream>
using namespace std;

// prototypes
void getInput(int *arr, int n);
void getMode(int *arr, int n);

#include "getMode.cpp"
#include "getInput.cpp"

int main()
{
    int n; // size of the array
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "The size of the array is " << n << endl;
    int arr[n]; // declare an array of size n
    getInput(arr, n);
    getMode(arr, n);
    return 0;
}