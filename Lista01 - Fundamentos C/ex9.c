#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[100];

    int i;

    printf ("digite a palavra: ");

    gets(nome);

    for (i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] >= 97 && nome [i] <= 122)
        {
            nome [i] = nome [i] - 32;
        }
    }
    
    printf ("%s", nome);
    
    return 0;


}