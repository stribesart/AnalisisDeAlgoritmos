// ejemplo1.c: Muestra un fichero dos veces.
#include <stdio.h>

int main()
{
   char cadena1[32];
   FILE *fichero = fopen("numeros5unidades.txt", "r");

   while(!feof(fichero)) fgets(cadena1, 10, fichero);
   
   fclose(fichero);
   puts(cadena1);
   return 0;
}