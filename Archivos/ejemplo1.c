// ejemplo1.c: Muestra un fichero dos veces.
#include <stdio.h>

int main()
{
   char cadena1[2048];
   int n =0;
   printf("ingrese un n \n");
   scanf("%d", &n);
   FILE *fichero = fopen("/home/set/Documents/numeros10millones.txt", "r");
   
   // fputc(fgetc(fichero), stdout);
   // while(!feof(fichero)) fgets(cadena1, 10, fichero);
   fread(cadena1, 1, n, fichero);

   fclose(fichero);
   // getchar();
   puts(cadena1);
   return 0;
}