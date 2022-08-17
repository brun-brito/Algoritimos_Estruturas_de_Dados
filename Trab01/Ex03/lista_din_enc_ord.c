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

int insert_elem_begin(List *lst, int elem){
    List N = (List) malloc (sizeof(struct node));

    if(N == NULL)
        return -1; //falha ao criar novo no
    
    N->info = elem;
    N->next = *lst;
    *lst = N;
}

int remove_elem(List *lst, int elem){
    if (lst == NULL || empty_list(*lst) == 0)
        return -1;

    List aux = *lst;                       
    if(elem == (*lst)->info){               
        *lst = aux->next;                   
        free(aux);                          
        return 0;
    }

    while(aux->next != NULL && aux->next->info != elem)
    aux = aux->next;
    if(aux->next == NULL)
        return -1;

    List aux2 = aux->next;
    aux->next = aux2->next;
    free(aux2);
    return 0;
}

void print_list(List lst){    
        for(lst; lst != NULL; lst = lst->next){
            printf((lst->next != NULL) ? "%d, " : "%d", lst->info);
        }
    printf("}\n");
}
    
int list_size(List *lst){
    int j = 0;
    List aux = *lst;        
    if(lst == NULL)
        return -1;
    if (empty_list(*lst) == 0)
        return 0;    
    else
        while(aux != NULL ){
            aux = aux->next;
            j++;
        }
    return j;
}

float average_list(List *lst){        
    int i = 0;
    List aux = *lst;
    int j = aux->info;
    if (lst == NULL || empty_list(*lst) == 0){
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

    if(empty_list(*lst1) == 0 || empty_list(*lst2) == 0)
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

int intercal_list(List *lst1, List *lst2, List *lst3){
    if(empty_list(*lst1) == 0 || empty_list(*lst2) == 0)
        return -1; //falha ao intercalar pois uma das listas esta vazia

    if(list_size(lst1) != list_size(lst2))
        return -2; //falha ao intercalar pois as listas tem tamanho diferente    

    List aux = *lst1;
    List aux2 = *lst2;

    while(aux && aux2){
        insert_elem_begin(lst3, aux->info);
        insert_elem_begin(lst3, aux2->info);

        aux = aux->next;
        aux2 = aux2->next;
    }

    return 0;
}

int reverse_list(List *lst, List *lst2){
    List aux = *lst;

    if(empty_list(*lst) == 0)
        return -1; //lista vazia

    while(aux){
        insert_elem_begin(lst2, aux->info);
        aux = aux->next;
    }

    return 0;
}

void odd_elems_list(List *lst, List *impar){
    List aux = *lst;

    while(aux){
        if(aux->info > 0){
            if(aux->info % 2 != 0)
                insert_elem_ord(impar, aux->info);
        }
        aux = aux->next;
    }
}