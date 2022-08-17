#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_desperdicio.h"
#define max 20

struct fila{
    int no[max];
    int ini, fim;
};

Fila cria_fila(){
    Fila fil = (Fila) malloc(sizeof(struct fila));

    if(fil != NULL){
        fil->ini = 0;
        fil->fim = 0;
    }
    return fil;
}

int fila_vazia(Fila fil){
    if(fil->fim == fil->ini)
        return 0;
    else    
        return -1;
}

int fila_cheia(Fila fil){
    if(fil->ini == (fil->fim + 1) % max)    //conta para saber se a fila esta cheia
        return 0;
    else    
        return -1;
}

int insere_fim(Fila fil, int elem){
    if(fila_cheia(fil) == 0 || fil == NULL)
        return -1;
    
    fil->no[fil->fim] = elem;           //elemento no fim
    fil->fim = (fil->fim + 1) % max;    //incremento circular
    return 0;
}

int remove_ini(Fila fil, int *elem){
    if(fila_vazia(fil) == 0 || fil == NULL)
        return -1;
    
    *elem = fil->no[fil->ini];
    fil->ini = (fil->ini + 1) % max;    //incremento circular
    return 0;
}

int le_final(Fila fil, int *elem){
    if(fila_vazia(fil) == 0 || fil == NULL)
        return -1;

    *elem = fil->no[fil->fim - 1];
    return 0;
}

int imprime_fila(Fila fil){
    int cont = 0, i;
    if(fil == NULL)
        return -1;  //fila nao criada

    for(i = fil->ini; i < fil->fim; i++){
        printf("Fila[%d] = %d\n", cont, fil->no[i]);
        cont++;
    }
    return 0;
}
