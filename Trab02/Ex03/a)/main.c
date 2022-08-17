#include <stdio.h>
#include <stdlib.h>
#include "conversao_dec_bin.h"

int main(){
    Pilha pilha;
    int dec;

    printf("\n\n\nDigite o numero decimal a converter para binario: ");
    scanf("%d", &dec);

    printf("\nO numero %d(dec) corresponde ao numero ", dec);
    converte(dec);
    printf(" em binario\n\n");

    return 0;
}