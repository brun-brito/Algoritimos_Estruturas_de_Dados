#include <stdio.h>
#include <stdlib.h>
#include "conversao_dec_oct.h"

int main(){
    Pilha pilha;
    int dec;

    printf("\n\n\nDigite o numero decimal a converter para Octal: ");
    scanf("%d", &dec);

    printf("\nO numero %d(dec) corresponde ao numero ", dec);
    converte(dec);
    printf(" em octal\n\n");

    return 0;
}