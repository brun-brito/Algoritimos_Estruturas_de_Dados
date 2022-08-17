#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_ord.h"

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

int insert_elem_ord(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    List aux = *lst;

    if (N == NULL)
        return -1;

    N->info = elem;

    if(empty_list(*lst) == 0 || elem <= (*lst)->info){
        N->next = *lst;      
        *lst = N;           
        return 0;
    }else {
        List aux = *lst;
        while(aux->next != NULL && aux->next->info < elem)
            aux = aux->next;

        N->next = aux->next;
        aux->next = N;
        return 0;
    }
}

int remove_elem(List *lst, int elem){
    if (elem < (*lst)->info || empty_list(*lst) == 0)
        return -1;

    List aux = *lst;                       
    if(elem == (*lst)->info){               
        *lst = aux->next;                   
        free(aux);                          
        return 0;
    }

    while(aux->next != NULL && aux->next->info < elem)
        aux = aux->next;
    if(aux->next == NULL || aux->next->info > elem)
        return -1;

    List aux2 = aux->next;
    aux->next = aux2->next;
    free(aux2);
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