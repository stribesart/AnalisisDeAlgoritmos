#include <stdio.h>

void Funcion(int n){
    int l,k,i,j = 0;
    for ( i = 0; i < n*5; i+=2)
    {
        for ( l = 0; l < 2*n; l++)
        {        
            for ( k = l; k < n; k++)
            {
                printf("%d Algoritmo \n", ++j);
            }
            
        }
        
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    Funcion(n);
    return 0;
}