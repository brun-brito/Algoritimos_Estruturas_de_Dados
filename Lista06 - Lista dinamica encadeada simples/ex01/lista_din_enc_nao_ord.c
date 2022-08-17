#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_nao_ord.h"

struct node{
    int info;
    struct node* next;
};

List create_list(){
    return NULL;
}

int empty_list(List lst){
    if (lst == NULL)
        return 0;   
    else
        return -1;   
}

int insert_elem(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));    //aloca um novo nó na lista
    if (N == NULL)
    return -1;

    N->info = elem;     //insere o elemento no novo nó
    N->next = *lst;     //aponta p/ o 1o nó (atual) da lst 
    *lst = N;           //faz a lista apontar pro novo nó
    return 0;
}

int remove_elem(List *lst, int elem){
    if (empty_list(*lst) == 0)
    return -1;

    List aux = *lst;                       //aux recebe o endereço (cabeça) da lista criada 
    if(elem == (*lst)->info){               //se o elemento estiver no campo "info" do nó 
        *lst = aux->next;                   //a lista passa a apontar para o segundo nó da lst (que passa a ser primeiro pós remoção) DESREFERENCIA
        free(aux);                          //aux deixa de existir
        return 0;
    }

    while(aux->next != NULL && aux->next->info != elem) 
        aux = aux->next;                    //como se fosse aux++
    if(aux->next == NULL)                   //se a nextima posicao do que aux apontar nao existir, ERRO
        return -1;

    List aux2 = aux->next;                 //aux2 recebe o elemento a ser removido
    aux->next = aux2->next;                 //aux next vai apontar para o nextimo elemento de aux2 (desreferencia)
    free(aux2);                             //aux2 deixa de existir
    return 0;
}


void print_list(List lst){ 
    printf("Lista = {");   
        for(lst; lst != NULL; lst = lst->next){
            printf((lst->next != NULL) ? "%d, " : "%d", lst->info);
        }
    printf("}\n");
}

int get_elem(List lst, int elem){
    if (empty_list(lst) == 0)
    return -1;

    for(lst; lst != NULL; lst = lst->next){
        if(lst->info == elem){
            return elem;
        }
    }
    return -1;
}