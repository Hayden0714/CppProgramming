// get median function for the array
#include <iostream>
#include <iomanip>

void getMode(int *arr, int n)
{
  int j;          // contains position of middle element
  double median;  // as mentioned median should be of Double  datatype
  if (n % 2 != 0) // if size of the array is odd then middle element is the median
  {
    /*
    let us say elements are 1 2 3 4 5
                     index  0 1 2 3 4 (0-based indexing)
                     so middle element is on index 2 i.e. element 3
                     so n/2 = 5/2
                            = 2 (element on 2th index is our middle element is n is odd)
  */
    j = n / 2;
    median = *(arr + j);
  }
  else // if size of the array is even then mean of two middle elements is the median
  {
    int middle1, middle2;
    j = n / 2;
    /*
      let say elements are 1 3 5 7 9 11
                     index 0 1 2 3 4 5
                     so middle elements are at index 2 and 3
                     so n/2 = 6/2
                            = 3
                so j =3 that's why middle elemnents are  jth and (j-1)th i.e. 3 and 2 in index
                */

    middle1 = *(arr + j);                     // second middle element
    middle2 = *(arr + j - 1);                 // first middle element
    median = ((middle1 + middle2) * 1.0) / 2; // multiply by 1.0 to convert int to double
  }
  cout << "The median of the array is " << median << endl;
}