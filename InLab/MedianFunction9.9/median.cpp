double median(int* arr, int num){
  double med;

  if(num % 2 == 0){
    int mid1 = num /2, mid2 = (num / 2) - 1;
    med = ((*(arr + mid1) + *(arr + mid2)) / 2.0);
  }else{
    med = *(arr + (num / 2));
  }

  return med;
}