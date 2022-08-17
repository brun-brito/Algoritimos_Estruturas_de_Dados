#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha_est_seq.h"
#define max 20

struct pilha{
    int no[max];
    int topo;
};

Pilha cria_pilha(){
    Pilha plh;
    plh = (Pilha) malloc(sizeof(struct pilha));

    if(plh != NULL)
        plh->topo = -1; //indicando uma lista vazia
    return plh;
}

int pilha_vazia(Pilha plh){
    if(plh->topo == -1)
        return 0;
    else
        return -1;
}

int pilha_cheia(Pilha plh){
    if(plh->topo == max-1)
        return 0;   //pilha cheia
    else
        return -1;
}

int push(Pilha plh, int elem){
    if(pilha_cheia(plh) == 0 || plh == NULL)
        return -1;
    
    plh->topo++;                //topo sai de -1
    plh->no[plh->topo] = elem;  //insere na posicao topo
    return 0;

}

int pop(Pilha plh, int *elem){
    if(pilha_vazia(plh) == 0 || plh == NULL)
        return -1;
    
    *elem = plh->no[plh->topo];
    plh->topo--;
    return 0;
}

int le_topo(Pilha plh, int *elem){
    if(pilha_vazia(plh) == 0 || plh == NULL)
        return -1;

    *elem = plh->no[plh->topo];
    return 0;
}

int imprime_pilha(Pilha plh){
    int i;
    if(plh == NULL)
        return -1;  //pilha nao criada
    
    else{
        for(i = 0; i <= plh->topo; i++){
            printf("Pilha[%d] = %d\n", i, plh->no[i]);
        }
        return 0;
    }
}