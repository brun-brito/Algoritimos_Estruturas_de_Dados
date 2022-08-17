#include <stdio.h>
#include <stdlib.h>
#include "listaNO.h"
#define max 20

struct Lista{
    int no[max];
    int Fim;
};

Lista cria_lista(){
    Lista l;
    l = (Lista) malloc(sizeof(struct Lista));

    if(l != NULL)
        l->Fim = 0; //indicando uma lista vazia
        return l;
}

int lista_vazia(Lista l){ //recebe o endereco
    if (l->Fim == 0)
    return 0;   //vazia
    else
    return -1;   //nao vazia
}

int lista_cheia(Lista l){
    if (l->Fim == max)
    return 0;   //cheia
    else
    return -1;   //nao cheia
}

int insere_elem(Lista l, int elem){
    if (l == NULL|| lista_cheia(l) == 0)
    return -1;

    l->no[l->Fim] = elem;   //insere
    l->Fim++;               //desloca Fim
    return 0;
}

int remove_elem(Lista l, int elem){
    if (l == NULL || lista_vazia(l) == 0)
    return -1;

    int i, aux = 0;
    while (aux < l->Fim && l->no[aux] != elem){ //percorre ate o fim da lista ou ate achar o elemento
        aux++;
    }
    if (aux == l->Fim) //chegou no fim sem achar o elem
    return -1;

    for (i = aux + 1; i < l->Fim; i++) //deslocmento à esquerda do sucessor até Fim
    l->no[i-1] = l->no[i]; //sobrepõe o elemento retirado

    l->Fim--;
    return 0;
}

int obtem_valor_elem(Lista l, int elem){
    if (l == NULL || lista_vazia(l) == 0)
    return -1;
    int i;
    for(i = 0; i < max; i++){
        if(l->no[i] == elem){
            return elem;
        }
        else{
            return -1;
        }
    }
}

int imprime_lista(Lista l){
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    }else{
        int i;
        for(i = 0; i < l->Fim; i++){
            printf("Lista[%d] = %d\n", i, l->no[i]);
        }
    }
    return 0;
}

int insere_ordenado(Lista l, int elem){
    if(l == NULL || lista_cheia(l) == 0)
    return -1;
    int j,i = 0;
    while(i < l->Fim - 1 && l->no[i] < elem)
    

}