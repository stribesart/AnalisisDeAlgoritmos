#include <stdio.h>

void Funcion(int n){
    int k,i,j = 0;
    for ( i = 1; i < 4*n; i*=2)
    {        
        for ( k = i; k < 5*n; k+=3)
        {
            printf("%d Algoritmo \n", ++j);
        }        
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    Funcion(n);
    return 0;
}