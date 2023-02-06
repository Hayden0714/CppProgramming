#include <iostream>
using namespace std;

// prototypes
void getInput(int *arr, int n);
void getSelectionSort(int *arr, int n);
void getMedian(int *arr, int n);

#include "getMedian.cpp"
#include "getSelectionSort.cpp"
#include "getInput.cpp"

int main()
{
    int n; // size of the array
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "The size of the array is " << n << endl;
    int arr[n]; // declare an array of size n
    getInput(arr, n);
    getSelectionSort(arr, n);
    getMedian(arr, n);
    return 0;
}