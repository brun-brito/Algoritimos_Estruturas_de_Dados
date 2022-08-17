#include <stdio.h>
#include <stdlib.h>

int main (){

    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40;
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o conteúdo inicial é lixo;

    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

    printf("endereco de a: %d\n", &a);
    printf("endereco de a: %d\n", p);

    printf("\nescreva o conteudo de p: ");
    scanf("%d", p);
    printf("o novo valor de a eh: %d\n", a);


return 0;
}