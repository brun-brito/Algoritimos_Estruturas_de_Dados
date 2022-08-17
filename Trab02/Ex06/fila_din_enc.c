#include <stdio.h>
#include <stdlib.h>
#include "fila_din_enc.h"

struct no{
    int info;
    struct no *prox;
};

struct fila{
    struct no *ini;
    struct no *fim;
};

Fila criar_fila(){
    Fila fil;
    fil = (Fila) malloc (sizeof (struct fila));

    if(fil != NULL){
        fil->ini = NULL;
        fil->fim = NULL;
    }
    return fil;
}

int fila_vazia(Fila fil){
    if(fil->ini == NULL)
        return 0;
    else 
        return -1;
}

int insere_fila(Fila fil, int elem){
    No N;
    N = (No) malloc (sizeof (struct no));

    if(N == NULL)
        return -1; //erro ao alocar no

    N->info = elem;
    N->prox = NULL;

    if(fil->ini == NULL)
        fil->ini = N; 
    else
        fil->fim->prox = N;

    fil->fim = N;

    return 0;
}

int remove_fila(Fila fil, int *elem){
    if(fil->ini == NULL)
        return -1; //fila vazia

    No aux = fil->ini;
    *elem = aux->info;

    if(fil->ini->prox == NULL){
        fil->ini = NULL;
        fil->fim = NULL;
        free(aux);
        return 0;
    }else{
        fil->ini = aux->prox;
        free(aux);
        return 0;
    }
}

void imprime_fila(Fila fil){
    No aux = fil->ini;

    printf("Fila: {");
    for(aux; aux != NULL; aux = aux->prox)
        printf((aux->prox != NULL) ? "%d, " : "%d", aux->info);
    
    printf("}\n");
}
