#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_enc_circ.h"

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

int insert_elem_end(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1;

    N->info = elem; 

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

int insert_elem_begin(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1;

    N->info = elem;
    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;
    }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
    }
    return 0;
}

int insert_elem_pos(List *lst, int elem, int pos){
    List aux = *lst;
    int j = 1;  //"posicao[0]" = 1

    if(empty_list(*lst) == 0)
        insert_elem_begin(lst, elem);
 
    for(j; j < pos; j++){
        aux = aux->next;
    }
    List N = (List) malloc(sizeof(struct node)); 
    if(N == NULL){
        return -1;
    }

    if(pos == size_list(*lst) + 1){
        insert_elem_end(lst, elem);

    }else if(pos > size_list(*lst) + 1 || pos < 1){
        return -1; //posicao invalida

    }else{   
        N->info = elem;
        N->next = aux->next;
        aux->next = N;
    }

    return 0;
}

int remove_elem_begin(List *lst, int *elem){
    if(empty_list(*lst) == 0)
        return -1;
    
    List aux = (*lst)->next;
    *elem = aux->info; //retorna o valor a ser removido
    if(size_list(*lst) == 1)
        *lst = NULL;   //1 nó na lista
    else{
        (*lst)->next = aux->next;
        free(aux);
    }
    return 0;
}

int remove_elem_pos(List *lst, int pos, int *elem){
    List aux = (*lst)->next;
    List aux2 = *lst;
    int j = 1;  //"posicao[0]" = 1

    if(empty_list(*lst) == 0)
        return -1;  //lista vazia
    
    else if(pos > size_list(*lst) || pos < 1){
        return -2;  //posicao invalida
    }

    else if(pos == 1){
        return remove_elem_begin(lst, elem);    
    }
    
    for(j; j < pos; j++){
        aux = aux->next;
        aux2 = aux2->next;
    }

    if(aux == *lst){
        *lst = aux2;
    }
    
    *elem = aux->info;
    aux2->next = aux->next;
    free(aux);   

    return 0;
}

int size_list(List lst){
    if(lst == NULL)
        return -1;
    if(empty_list(lst) == 0)
        return 0;
    List aux = lst->next;
    List last = lst;
    int j = 1; 
    while(aux != last){
        aux = aux->next;
        j++;
    }
    return j;
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

    if(size_list(*lst) == 1 && (*lst)->info == elem){   //lista so tem um elemento
        *lst = NULL;
        // printf("\nTo saindo aqui 0!!\n");
        return 0;
    
    }else if(aux->info == elem){    //elem = primeiro da lista
        (*lst)->next = aux->next;
        free(aux);
        // printf("\nTo saindo aqui 1!!\n");
        return 0; 

    }else if(last->info == elem){   //elem = último da lista
        while(aux->next != last)
            aux = aux->next;
        *lst = aux;
        (*lst)->next = aux2;
        free(last);
        // printf("\nTo saindo aqui 2!!\n");
        return 0; 
               
    }else{
        while(aux->next != last){
            aux = aux->next;
            if(aux->info == elem){
                aux2->next = aux->next;
                free(aux);
                // printf("\nTo saindo aqui 3!!\n");
                return 0;
            }else{
                aux2 = aux2->next;                
            }            
        }return -2;  //elemento nao esta na lista
    
    }
}

int remove_even(List *lst){
    List aux;
    List last;
    List aux2;
    int even = 0;
    
    if(empty_list(*lst) == 0)
        return -1; //lista vazia

    aux = (*lst)->next;
    last = *lst;  

    while(aux != last){
        if(aux->info % 2 == 0){
            even = aux->info;
            aux = aux->next;
            remove_elem(&(*lst), even);
        }
        else{
        aux = aux->next;
        }
    }
    aux2 = *lst;

    if(last->info % 2 == 0){
        while(aux2->next != last)
            aux2 = aux2->next;
            
        aux2->next = last->next;
        *lst = aux2;
        free(last);        
    }

    return 0;
}

int biggest_elem(List lst){  
    if(empty_list(lst) == 0)
        return -1;

    int x;
    List aux = lst->next;   
    
    while(aux != lst){    
        if(aux->info > aux->next->info){
            x = aux->info;
        }             
        aux = aux->next;     
    }       

        if(aux->info > x){
            x = aux->info;
        }

    return x;
}

void print_list(List lst){
    List last = lst;
    if(empty_list(lst) == 0){
        printf("Lista: {}");
    }
    else{
        printf("Lista: {");    
        do{
            printf((lst->next != last ) ? "%d, " : "%d", lst->next->info);
            lst = lst->next;
        }while(lst != last);
        printf("}");
    }    
}
