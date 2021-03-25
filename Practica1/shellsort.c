#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 /* ShellSort */
void shellsort(int A[], int n)
{
  int k = trunc(n/2);
  while ( k >= 1 )
  {
    int b = 1;
    while ( b != 0 )
    {
      b=0;
      for (int i = k; i <= n-1; ++i)
      {
        if( A[i-k] > A[i] ){
          int temp = A[i];
          A[i] = A[i-k];
          A[i-k] = temp;
          b = b + 1;
        }
      }
    }
    k = trunc(k/2);
  }
}

/* main */
int main() {
  int A[] = {10,9,8,6,7,5,4,3,2,1,0,1,2,3,4,5,3,5,4,2,6};
  int n = 21;
  shellsort(A,n);
  for (int i = 0; i < n; ++i)
  {
    printf("%d \n",A[i]);
  }
  
return 0;
}