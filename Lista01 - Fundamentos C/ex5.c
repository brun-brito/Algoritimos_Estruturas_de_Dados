#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, i, j, c = 0; //n = numero linhas, j = colunas

    printf ("Escreva um numero de linhas para o seu triangulo de floyd: ");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i ; j++)   
        {        
            c = c + 1;
            printf ("%d ", c);
        }   
        
        printf ("\n");
    }
    



    
    return 0;
}