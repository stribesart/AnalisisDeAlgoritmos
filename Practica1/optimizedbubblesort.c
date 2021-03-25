#include <stdio.h>
#include <stdlib.h>
 
 /* Bubblesort Optimizado   */
void bubbleSort(int A[], int n)
{
  int cambios = 1;
  int i = 0;
  while ( i <= n-2 && cambios != 0)
  {
    cambios = 0;
    for (int j = 0; j <= ((n-2)-i); ++j)
    {
      if (A[j] < A[j+1])
      {
        int aux = A[j];
        A[j] = A[j+1];
        A[j+1] = aux;
        cambios = 1;
      }
    }
    i = i + 1;
  }
}

/* main */
int main() {
  int A[] = {10,9,6,8,7};
  int n = 5;
  bubbleSort(A,n);
  for (int i = 0; i < n; ++i)
  {
    printf("%d \n",A[i]);
  }
  
return 0;
}