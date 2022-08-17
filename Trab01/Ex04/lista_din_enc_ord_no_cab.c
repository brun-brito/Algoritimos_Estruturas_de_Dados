#include <stdlib.h>
#include <stdio.h>
#include "lista_din_enc_ord_no_cab.h"

struct node{
    int info;
    struct node *next;
};

List create_list(){
    List header;
    header = (List) malloc(sizeof(struct node));
    if(header != NULL){
        header->next = NULL;
        header->info = 0;
    }
    return header;
}

int empty_list(List *lst){
    if((*lst)->next == NULL)
        return 0;
    else
        return -1;
}

int insert_elem_ord(List *lst, int elem){    
    List N = (List) malloc(sizeof(struct node));  
    if(N == NULL)
        return -1;

    N->info = elem;
    
    List aux = *lst;    

    while (aux->next != NULL && aux->next->info < elem)
        aux = aux->next;

    N->next = aux->next;
    aux->next = N;

    (*lst)->info++;

    return 0;
}

int insert_elem_begin(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1; //erro ao criar novo nó
    
    N->info = elem;

    N->next = (*lst)->next;
    (*lst)->next = N;

    (*lst)->info++;

    return 0;
}

int remove_elem_ord(List *lst, int elem){
    if(empty_list(lst) == 0)
        return -1;
    
    List aux = *lst;
    while(aux->next != NULL && aux->next->info < elem)
        aux = aux->next;
    
    if(aux->next == NULL && aux->next->info > elem)
        return -2;  //elemento nao esta na lista

    List aux2 = aux->next;
    aux->next = aux2->next;
    free(aux2);

    (*lst)->info--;

    return 0;
}

int list_size(List *lst){
    return (*lst)->info;
}

float average_list(List *lst){
    int i = 0;
    List aux = *lst;

    if (aux->next == NULL)
        return -1;    
    else
        while(aux->next != NULL){          
            aux = aux->next;   
            i += aux->info;       
        }

        int tam = list_size(lst);
        float avrg = (float)i/tam;

    return avrg;
}

void print_list(List lst){    
        while(lst->next != NULL){
            lst = lst->next;
            printf((lst->next != NULL) ? "%d, " : "%d", lst->info);
        }
        printf("}\n");
}

int equal_lists(List *lst1, List *lst2){
    List aux = *lst1;
    List aux2 = *lst2;

    aux = aux->next;
    aux2 = aux2->next;

    if(empty_list(lst1) == 0 || empty_list(lst2) == 0)
        return -1; //pelo menos alguma lista está vazia

    if(list_size(lst1) != list_size(lst2))
        return -2; //listas possuem tamanhos diferentes    
    
    while(aux && aux2){
        if(aux->info == aux2->info){      
            aux = aux->next;
            aux2 = aux2->next;
        }else{
            return -3; //listas nao sao iguais
        }              
    }
    return 0; //listas sao iguais
}

int intercal_list(List *lst1, List *lst2, List *lst3){
    if(empty_list(lst1) == 0 || empty_list(lst2) == 0)
        return -1; //alguma lista está vazia

    if(list_size(lst1) != list_size(lst2))
        return -2; //listas com tamanhos diferentes

    List aux = (*lst1)->next;
    List aux2 = (*lst2)->next;
    
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

    if(empty_list(lst) == 0)
        return -1; //falha pois lista esta vazia

    aux = aux->next;

    while(aux){
        insert_elem_begin(lst2, aux->info);
        aux = aux->next;
    }

    return 0;
}

void odd_elems_list(List *lst, List *odd){
    List aux = *lst;

    aux = aux->next;

    while(aux){
        if(aux->info > 0){
            if(aux->info % 2 != 0)
                insert_elem_ord(odd, aux->info);
        }
        aux = aux->next;
    }    
}