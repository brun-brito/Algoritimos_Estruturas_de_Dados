#include <stdio.h>
#include <stdlib.h>
#include "fila_circ.h"

struct no{
    int info;
    struct no *prox;
};

Fila cria_fila(){
    return NULL;
}

int fila_vazia(Fila fil){
    if(fil == NULL)
        return 0;
    else
        return -1;
}

int insere_fim(Fila *fil, int elem){
    Fila N = (Fila) malloc(sizeof(struct no));
    if(N == NULL)
        return -1;
    N->info = elem;

    if(fila_vazia(*fil) == 0){
        N->prox = *fil; //aponta N pra NULL
        *fil = N;       //fila aponta pro novo nó    
        N->prox = N;    //nó aponta pra ele mesmo
    
    }else{
        N->prox = (*fil)->prox;
        (*fil)->prox = N;
        *fil = N;
    }
    return 0;
}

int remove_ini(Fila *fil, int *elem){
    if(fila_vazia(*fil) == 0)
        return -1;

    Fila aux = (*fil)->prox;

    if(*fil == (*fil)->prox){       //se tiver so um elem
        *elem = (*fil)->info;
        *fil = NULL;
        free(aux);
    }

    else{
        *elem = aux->info;
        (*fil)->prox = aux->prox;
        free(aux);
    }
    return 0;
}

int le_final(Fila fil, int *elem){
    if(fila_vazia(fil) == 0)
        return -1;

    *elem = fil->info;
    return 0;
}

void imprime_fila(Fila fil){
    Fila aux = fil;
    printf("Fila: {");

    if(fila_vazia(fil) != 0){
        do{
            printf((aux->prox != fil)? "%d, " : "%d", aux->prox->info);
            aux = aux->prox;
        }while(aux != fil);
    }

    printf("}\n");
}




