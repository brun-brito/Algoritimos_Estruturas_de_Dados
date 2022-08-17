#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_contador.h"
#define max 20

struct fila{
    int no[max];
    int ini, cont;      //ini guarda posicao do 1o elem, cont guarda quantidade de elem
};

Fila cria_fila(){
    Fila fil = (Fila) malloc(sizeof(struct fila));

    if (fil != NULL){
        fil->ini = 0;
        fil->cont = 0;
    }
    return fil;    
}

int fila_vazia(Fila fil){
    if(fil->cont == 0)
        return 0;
    return -1;
}

int fila_cheia(Fila fil){
    if(fil->cont == max)
        return 0;
    return -1;
}


int insere_fila(Fila fil, int elem){
    if(fila_cheia(fil) == 0 || fil == NULL)
        return -1;
    
    fil->no[(fil->ini + fil->cont) % max] = elem;   //coloca o elemento na posicao "FIM", com incremento circular
    fil->cont++;
    return 0;
}

int remove_fila(Fila fil, int *elem){
    if(fila_vazia(fil) == 0 || fil == NULL)
        return -1;

    *elem = fil->no[fil->ini];              //elemento recebe o valor removido
    fil->ini = (fil->ini + 1) % max;        //incremento circular
    fil->cont--;                            //decrememta o contador
    return 0;
}

int imprime_fila(Fila fil){
    if(fil == NULL)
        return -1;
    Fila f2 = cria_fila();
    int x;
    while(! fila_vazia(fil) == 0){
        remove_fila(fil, &x);
        printf("%d ",x);
        insere_fila(f2, x);
    }
    while(! fila_vazia(f2) == 0){
        remove_fila(f2, &x);
        insere_fila(fil, x);
    }
    return 0;
}