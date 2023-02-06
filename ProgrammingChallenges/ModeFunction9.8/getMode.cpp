// get median function for the array
#include <iostream>
// #include <iomanip>

// function to get the mode of an array
void getMode(int *arr, int n)
{
  int frequency[n];

  // loop through the frequency array
  for (int i = 0; i < n; i++)
  {

    // loop through the original array
    for (int j = 0; j < n; j++)
    {

      if (arr[i] == arr[j])
      {
        frequency[i]++;
      }
    }
  }

  for (int i = 0; i < n; i++)
    printf("%d ", frequency[i]);
}
