#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listas_recursivas.h"

struct node{
    int info;
    struct node* next;
};

List create_list(){        
    return NULL;    
}

int empty_list(List lst){
    if(lst == NULL)
        return 0;   
    else
        return -1;   
}

int insert_elem_ord(List *lst, int elem){  
    int R;  
    if (empty_list(*lst) == 0 || elem <= (*lst)->info){
        List N = (List) malloc(sizeof(struct node));  
        if(N == NULL)        
            return -1;    

        N->info = elem;  
        N->next = *lst;
        *lst = N; 
        return 0;
    }
    else{
        R = insert_elem_ord(&(*lst)->next, elem);
        return R; 
    }
}

int remove_elem(List *lst, int elem){
    int R;
    if (empty_list(*lst) == 0 || elem < (*lst)->info)
        return -1;
        
    List aux = *lst;
    if(elem == (*lst)->info){
        *lst = (*lst)->next;
        free(aux);
        return 0;
    }
    else{
        R = remove_elem(&(*lst)->next, elem);
        return R;
    }


}


void print_list(List lst){        
    List aux = lst->next;

    printf("Lista = %d -> {",lst->info);   
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