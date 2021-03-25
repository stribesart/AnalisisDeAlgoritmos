#include <stdio.h>
#include <stdlib.h>
 
 /* Ordenamiento por insercion */
void insertsort(int A[], int n)
{
  for (int i = 0; i <= n-1; ++i)
  {
    int j=i;
    int temp = A[i];
    while ( j > 0 && temp < A[j-1] )
    {
        A[j]=A[j-1];
        --j;
    }
    A[j] = temp;
  }
}

/* main */
int main() {
  int A[] = {10,6,9,7,8};
  int n = 5;
  insertsort(A,n);
  for (int i = 0; i < n; ++i)
  {
    printf("%d \n",A[i]);
  }
  
return 0;
}