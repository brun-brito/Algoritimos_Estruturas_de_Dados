#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha_din_enc.h"

struct no{
    int info;
    struct no* prox;
};

Pilha cria_pilha(){
    return NULL;
}

int pilha_vazia(Pilha plh){
    if(plh == NULL)
        return 0;
    else
        return -1;
}

int push(Pilha *plh, int elem){    
    Pilha N = (Pilha) malloc(sizeof(struct no));
    if(N == NULL)
        return -1;
    N->info = elem;

    N->prox = *plh;
    *plh = N;
    return 0;

}

int pop(Pilha *plh, int *elem){
    if(pilha_vazia(*plh) == 0)
        return -1;

    Pilha aux = *plh;
    *elem = aux->info;
    *plh = aux->prox;      
    free(aux);  
    return 0;
}

int le_topo(Pilha plh, int *elem){
    if(pilha_vazia(plh) == 0)
        return -1;

    *elem = plh->info;
    return 0;
}

void imprime_pilha(Pilha plh){
    printf("Pilha: {");
    for(plh; plh != NULL; plh = plh->prox){
        printf((plh->prox != NULL)? "%d, " : "%d", plh->info);
    }
    printf("}\n");
}