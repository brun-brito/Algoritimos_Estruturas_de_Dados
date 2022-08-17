#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "din_dupla_enc_ord.h"

struct node{
    struct node *pre;
    int info;
    struct node *next;
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

int insert_elem_ord(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1;
    N->info = elem;

    if(empty_list(*lst) == 0){          //se tiver vazia
        N->pre = NULL;        
        N->next = *lst;
        *lst = N;
        return 0;
    }

    List aux = *lst;
    List aux2 = *lst;

    while(aux != NULL && aux->info <= elem){
        aux2 = aux;
        aux = aux->next;
    }

    if(aux == *lst){ //insere no início
        N->pre = NULL;
        (*lst)->pre = N;
        N->next = (*lst);
        *lst = N;
    }else{
        N->next = aux2->next;
        N->pre = aux2;
        aux2->next = N;
        if(aux != NULL)
            aux->pre = N;
    }
    return 0;
    
}

int remove_elem(List *lst, int elem){
    if(empty_list(*lst) == 0)
        return -1;

    List aux = *lst;

    while(aux->next != NULL && aux->info < elem){
        aux = aux->next;
    }

    if(aux->next == NULL && aux->info != elem)
        return -1; //elemento não existe na lista

    if(aux->pre == NULL)
        *lst = aux->next; //remove no início da lista
    else    //remove no meio da lista
        aux->pre->next = aux->next; 

    if(aux->next != NULL) //remove no final
        aux->next->pre = aux->pre;
    
    free(aux);

    return 0;
}


int get_elem(List lst, int elem){
    if(empty_list(lst) == 0)
        return -1;

    do{
        if(lst->info == elem)
            return elem;
        lst = lst->next;
    }while(lst != NULL);

    return -1;  //elemento nao pertence a lista

}

void print_list(List lst){   
    printf("Lista: {");
    while(lst != NULL){
            printf((lst->next != NULL) ? "%d, " : "%d", lst->info);
            lst = lst->next;
        }
    printf("}\n");
}
