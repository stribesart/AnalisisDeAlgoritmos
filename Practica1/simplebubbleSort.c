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

void numeros(n){
  char cadena1[4096];
   FILE *fichero = fopen("/home/set/Documents/numeros10millones.txt", "r");
   
   // fputc(fgetc(fichero), stdout);
   // while(!feof(fichero)) fgets(cadena1, 10, fichero);
   fread(cadena1, 1, n, fichero);

   fclose(fichero);
   // getchar();
  //  puts(cadena1);
}

/* main */
int main() {
  int A[] = {};
  int n;

  printf("Ingresa el numero de numeros: \n");
  scanf("%d", &n);
  numeros(n);
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