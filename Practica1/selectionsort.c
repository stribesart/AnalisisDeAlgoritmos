#include <stdio.h>
#include <stdlib.h>
 
 /* SelectionSort */
void selectionsort(int A[], int n)
{
  for (int k = 0; k <= n-2; ++k)
  {
    int p = k;
    for (int i = k+1; i <= n-1; ++i)
    {
      if ( A[i] < A[p] )
      {
        p = i;
      }
    }
  int temp = A[p];
  A[p] = A[k];
  A[k] = temp;  
  }
}

/* main */
int main() {
  int A[] = {10,6,9,7,8};
  int n = 5;
  selectionsort(A,n);
  for (int i = 0; i < n; ++i)
  {
    printf("%d \n",A[i]);
  }
  
return 0;
}