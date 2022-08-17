#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "no_cab_nao_ord.h"

struct node{
    int info;
    struct node* next;
};

List create_list(){
    List header;
    header = (List) malloc(sizeof(struct node));

    if(header != NULL)
        header->next = NULL;        
    return header;    
}

int empty_list(List lst){
    if (lst->next == NULL)
        return 0;   
    else
        return -1;   
}

int insert_elem(List lst, int elem){    //insere sempre no inicio. ex: inserir 1,2,3 = L -> {3,2,1}
    List N = (List) malloc(sizeof(struct node));    
    if (N == NULL)
    return -1;

    N->info = elem;    

    N->next = lst->next;      
    lst->next = N;           
    return 0;
}

int remove_elem(List lst, int elem){
    if (empty_list(lst) == 0)
    return -1;

    List aux = lst->next;
    List aux2 = lst;

    while(aux->next != NULL && aux->info != elem){
        aux = aux->next;
        aux2 = aux2->next;
    }
    
    aux2->next = aux->next;
    free(aux);

    return 0;
}


void print_list(List lst){ 
    List aux = lst->next;
    printf("Lista = {");   
        for(aux; aux != NULL; aux = aux->next){
            printf((aux->next != NULL) ? "%d, " : "%d", aux->info);
        }
    printf("}\n");
}

int get_elem(List lst, int elem){
    if (empty_list(lst) == 0)
    return -1;

    List aux = lst->next;

    for(aux; aux != NULL; aux = aux->next){
        if(aux->info == elem){
            return elem;
        }
    }
    return -1;
}