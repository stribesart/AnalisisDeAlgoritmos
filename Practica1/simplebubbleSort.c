#include <stdio.h>
#include <stdlib.h>
 
 /* Bubblesort   */
void bubbleSort(int A[], int n)
{
  for (int i = 0; i < n-2; ++i)
  {
    for (int j = 0; j <= ((n-2)-i); ++j)
    {
      if(A[j]>A[j+1]){
        int aux = A[j];
        A[j] = A[j+1];
        A[j+1] = aux;
      }
    }
  }
}

/* main */
int main() {
  int A[] = {1,5,4,3,2};
  int n;

  printf("Ingresa el numero de numeros: \n");
  scanf("%d", &n);
    printf("antes de ordenamiento:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", A[i]);
  }
  
  bubbleSort(A,n);
  printf("Lista Ordenada: \n");
  for (int i = 0; i < n; ++i)
  {
    printf("%d \n",A[i]);
  }
  
return 0;
}