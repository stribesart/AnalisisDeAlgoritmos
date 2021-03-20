#include <stdio.h>

void Funcion(int n){
    int i, j = 0;
    for (i=10; i<n*5; i*=2)
    {
        printf("%d Algoritmo \n", ++j);
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    Funcion(n);
    return 0;
}