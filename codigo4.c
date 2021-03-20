#include <stdio.h>

void Funcion(int n){
    int k,i,j = 0;
    i=n;
    while (i>=0)
    {
        for ( k = n; i < k; i-=2, k/=2)
        {
            printf("%d Algoritmos\n", ++j);
        }
        
    }
    
}

int main(void){
    int n;
    scanf("%d", &n);
    Funcion(n);
    return 0;
}