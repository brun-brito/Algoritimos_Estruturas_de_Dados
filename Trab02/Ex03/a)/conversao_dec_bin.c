#include <stdio.h>
#include <stdlib.h>
#include "conversao_dec_bin.h"

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

void imprime_pilha(Pilha plh){
    Pilha p2 = cria_pilha();
    int x,y;
    
    if(pilha_vazia(plh) == 0)
        printf("\n  {Pilha Vazia}\n");
    else{        
        while(plh != NULL){
            printf("%d", plh->info);
            pop(&plh, &x);
            push(&p2, x);
        }
    }
    while(p2 != NULL){
        pop(&p2, &y);
        push(&plh, y);
    }    
}

void converte(int dec){
    Pilha plh1 = cria_pilha();       

    while(dec > 0){                 
        push(&plh1, dec % 2);
        dec = dec/2;    
    }

    if(pilha_vazia(plh1) == 0)
        printf("0 ");
    else
        imprime_pilha(plh1);
}