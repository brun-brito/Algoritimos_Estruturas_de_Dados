#include <stdio.h>
#include <stdlib.h>
#include "lista_din_dup_enc_ord.h"

struct node{
    int info;
    struct node* next;
    struct node* pre;
};

List create_list(){
    return NULL;
}

int empty_list(List *lst){
    if ((*lst) == NULL)
        return 0;   
    else
        return -1;   
}

int insert_elem_ord(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));    

    if (N == NULL) 
        return -1; 
    
    List anterior = *lst;
    List atual = *lst;
    
    N->info = elem;

    if(empty_list(lst) == 0){
        N->pre = NULL;
        N->next = NULL;
        *lst = N;
        return 0;
    }else{
        while(atual != NULL && atual->info < elem){
            anterior = atual;
            atual = atual->next;
        }

        if(atual == *lst){ //insere no início
            N->pre = NULL;
            (*lst)->pre = N;
            N->next = (*lst);
            *lst = N;
        }else{
            N->next = anterior->next;
            N->pre = anterior;
            anterior->next = N;
            if(atual != NULL)
                atual->pre = N;
        }
        return 0;
    }
}

void print_list(List lst){   
    List aux = lst;
    while(aux != NULL){
            printf((aux->next != NULL) ? "%d, " : "%d", aux->info);
            aux = aux->next;
        }
    printf("}\n");
}

int remove_elem(List *lst, int elem){
    if(empty_list(lst) == 0)
        return -1; //falha pois a lista está vazia

    List aux = *lst;

    while(aux != NULL && aux->info < elem){
        aux = aux->next;
    }

    if(aux == NULL)
        return -2; //elemento não existe na lista

    if(aux->pre == NULL)
        *lst = aux->next; //remove no início
    else    //remove no meio
        aux->pre->next = aux->next; 

    if(aux->next != NULL) //remove no final
        aux->next->pre = aux->pre;
    
    free(aux);

    return 0;
}

int list_size(List *lst){

    int tam = 0;

    if(lst == NULL)
        return tam; //lista vazia   

    List aux = *lst;

    while(aux != NULL){
        tam ++;
        aux = aux->next;
    }

    return tam;
}

float average_list(List *lst){
    int i = 0;
    List aux = *lst;
    int j = aux->info;
    if (lst == NULL || empty_list(lst) == 0){
        return -1;
    }
    else        
        while(aux->next != NULL){  
            aux = aux->next;   
            i += aux->info;       
        }
        int res = i + j;
        int tam = list_size(lst);
        float avrg = (float)res/tam;

        return avrg;
}

int equal_lists(List *lst1, List *lst2){
    if(empty_list(lst1) == 0 || empty_list(lst2) == 0)
        return -1; //listas vazias

    List aux = *lst1;
    List aux2 = *lst2;

    if(list_size(lst1) == list_size(lst2)){ 
        do{
            if(aux->info == aux2->info){
                aux = aux->next;
                aux2 = aux2->next;
            }else{
                return -2; //elementos diferentes
            }
        }
        while(aux->next != NULL && aux2->next != NULL);
    }else{
        return -3; //listas com tamanhos diferentes
    }
    return 0;
}

int remove_all_occurrences(List *lst, int elem){ 
    if(empty_list(lst) == 0)
        return -1; //lista está vazia

    List aux = *lst;

    while(aux){
        if(aux->info == elem)
            remove_elem(lst, aux->info);
        else
            aux = aux->next;
    }
    return 0;   
}

int remove_biggest_occurrences(List *lst){ 
    if(empty_list(lst) == 0)
        return -1; //lista está vazia

    List aux = *lst;
    int biggest = 0;

    while(aux){
        if(aux->info > biggest)
            biggest = aux->info;
        
        aux = aux->next;    
    }

    remove_all_occurrences(lst, biggest);

    return 0;
}

int mult_of_three(List *lst1, List *lst2){
    
    if(empty_list(lst1) == 0)
        return -1;
    
    List aux = *lst1;

    while(aux){
        if(aux->info % 3 == 0)
            insert_elem_ord(lst2, aux->info);
        
        aux = aux->next;
    }
    return 0;
}
