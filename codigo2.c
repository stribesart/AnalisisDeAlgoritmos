#include <stdio.h>

void Funcion(int n){
    int k,i,j = 0;
    for ( k = n; k > 1; k/=2)
    {
        if (k<(n/2))
        {
            for ( i = 0; i < n; i+=2)
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