#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prob_josephus.h"

struct node{
    struct node *next;
    char name[];    
};

List creat_list(){
    return NULL;
}

int empty_list(List lst){
    if(lst == NULL)
        return 0;
    else
        return -1;
}

int insert_soldier_end(List *lst, char *name){
    List N = malloc (sizeof(struct node));

    if(N == NULL)
        return -1; //erro ao alocar novo nó

    strcpy(N->name, name);

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;      
    }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
        *lst = N;
    }
    return 0;         
}

int insert_mortos(List *lst, char * name){
    List N = malloc (sizeof(struct node));    

    if(N == NULL)
        return -1; //falha ao alocar novo nó 

    strcpy(N->name, name);

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;
        return 0; 
    }   

     if(list_size(*lst) == 1){
        (*lst)->next = N;
        N->next = *lst;
     }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
    }

    return 0; //soldado morto inserido na lista de mortos
}

int remove_soldier(List *soldados, List *mortos){    
    List aux = (*soldados)->next;
    List aux2 = *soldados;
    List last = *soldados;
    int j = 1, sorteado;  //"posicao[0]" = 1
    char removido[20];

    sorteado = sort_number(*soldados);

    if(sorteado == 0)
        return -5; //numero sorteado foi 0

    if(empty_list(*soldados) == 0)
        return -1;  //lista vazia

    if(list_size(*soldados) == 1)
        return 10;

    if(sorteado == 1){ //se for o primeiro
        strcpy(removido, aux->name);
        insert_mortos(mortos, removido);        
        (*soldados)->next = aux->next;
        free(aux);
        return 0;
    }

    if(sorteado == list_size(*soldados)){//se for o ultimo

        for(j; j < sorteado; j++){
            aux = aux->next;
            aux2 = aux2->next;
    }

        strcpy(removido, (*soldados)->name);
        insert_mortos(mortos, removido);        
        aux->next = (*soldados)->next;
        *soldados = aux;
        free(last);
        return 0;
    }

    for(j; j <= sorteado; j++){
        aux = aux->next;
        aux2 = aux2->next;
    }

    aux2->next = aux->next;
    strcpy(removido, aux->name);
    insert_mortos(mortos, removido);
    free(aux);

    return 0;
}

int number_soldier(List lst){
    if(empty_list(lst) == 0)
        return -1;
    
    List aux = lst->next;
    List last = lst;
    int j = 1;

    if(list_size(lst) == 1){
        return j;
    }

    while(aux->next != last){
        aux = aux->next;
        j++;
    }j++;

    return j;
}

int sort_number(List lst){
    int sorteio, tam;      
  
    if(empty_list(lst) == 0)
        return -1;
   
    tam = list_size(lst);

    sorteio = (rand() % tam);

    while(sorteio == 0)
        sorteio = (rand() % tam);    

    return sorteio;
}


int list_size(List lst){
    int size = 0;

    if(lst == NULL)
        return size;

    size = 1;

    List aux = lst->next;
    List last = lst;

    while(aux != last){        
        aux = aux->next;
        size++;
    }
    return size;
}

void print_list(List lst){
    List last = lst;
    if(empty_list(lst) == 0){
        printf(": {");
    }
    else{
        printf(": {");    
        do{
            printf((lst->next != last ) ? "%s, " : "%s", lst->next->name);
            lst = lst->next;
        }while(lst != last);        
    }
       
}