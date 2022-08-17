#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "outras_funcoes.h"

struct node{
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

int insert_elem_begin(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1;
    N->info = elem;

    if(empty_list(*lst) == 0){
    N->next = N;
    *lst = N;
    }
    
    N->next = (*lst)->next;
    (*lst)->next = N;
    return 0;    
}

int remove_elem_end(List *lst, int *elem){
    if(empty_list(*lst) == 0)
        return -1;

    if((*lst)->next == *lst){
        *elem = (*lst)->info;
        *lst = NULL;
        return 0;
    }

    List aux = (*lst)->next;
    List last = *lst;
    
    *elem = (*lst)->info;

    while(aux->next != *lst)
        aux = aux->next;

    *lst = aux;
    (*lst)->next = last->next;
    free(last);
    return 0;
}

int remove_elem(List *lst, int elem){
    List aux;
    List last;
    List aux2;

    if(empty_list(*lst) == 0)
        return -1;

    aux = (*lst)->next;
    last = *lst;
    aux2 = aux;

    if((*lst)->next == *lst && (*lst)->info == elem){   //lista so tem um elemento
        *lst = NULL;
        return 0;
    
    }else if(aux->info == elem){    //elem = primeiro da lista
        (*lst)->next = aux->next;
        free(aux);
        return 0; 

    }else if(last->info == elem){   //elem = último da lista
        while(aux->next != last)
            aux = aux->next;
        *lst = aux;
        (*lst)->next = aux2;
        free(last);
        return 0; 
               
    }else{
        while(aux->next != last){
            aux = aux->next;
            if(aux->info == elem){
                aux2->next = aux->next;
                free(aux);
                return 0;
            }else{
                aux2 = aux2->next;                
            }            
        }return -2;  //elemento nao esta na lista
    
    }
}

int get_elem(List lst, int elem){
    if(empty_list(lst) == 0)
        return -1;

    List last = lst;
    do{
        if(lst->info == elem)
            return elem;
        lst = lst->next;
    }while(lst != last);

    return -1;  //elemento nao pertence a lista

}

void print_list(List lst){
    List last = lst;
    printf("Lista: {");
    do{
        printf((lst->next != last) ? "%d, " : "%d", lst->next->info);
        lst = lst->next;
    }while(lst != last);
    printf("}\n");
}
