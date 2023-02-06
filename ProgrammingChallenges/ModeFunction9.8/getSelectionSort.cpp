// sort the array

void getSelectionSort(int *arr, int n)
{
  int i, j, t;

  // Sort the numbers using pointers  (Selection sort)
  for (i = 0; i < n; i++)
  {

    for (j = i + 1; j < n; j++)
    {

      if (*(arr + j) < *(arr + i))
      {

        t = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = t;
      }
    }
  }

  // print the numbers
  cout << "The sorted array is as follows" << endl;
  for (i = 0; i < n; i++)
    printf("%d ", *(arr + i));
  cout << endl;
}