#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "prob_polinomio.h"

struct node{
    int base;
    int expo;
    struct node *next;
};

Poli create_poli(){
    return NULL;
}

int empty_poli(Poli p){
    if (p == NULL)
        return 0;   
    else
        return -1;   
}

void print_poli(Poli p){    
    if(empty_poli(p) == 0)
        printf("0x^0");
    for(p; p != NULL; p = p->next){
        if(p->expo != 0){
            printf((p->base > 0) ? "+%dx^%d " : "%dx^%d ", p->base, p->expo);
        }else{
            printf((p->base > 0) ? "+%d " : "%d ", p->base);
        }
    }
    printf("\n");
}

int insert_term_ord(Poli *p, int base, int expo){
    Poli N = (Poli) malloc(sizeof(struct node));
    Poli aux = *p;

    if (N == NULL)
        return -1;

    N->base = base;
    N->expo = expo;    

    if(empty_poli(*p) == 0){ //se for vazia
        N->next = *p;   
        *p = N;           
        return 0;
    }

    else if((*p)->next == NULL){     //se tiver um termo em poli 
        if(N->expo > (*p)->expo){ 
            N->next = *p;
            *p = N;
        }
        else{
            (*p)->next = N;
            N->next = NULL;
        }  
        return 0;
    }

    else if(N->expo > aux->expo){ //se for maior que o primeiro
        N->next = aux;
        *p = N;  
        return 0;
    }

    else{                       //se tiver um ou mais termos
        while(aux->next != NULL && aux->next->expo > N->expo)
            aux = aux->next;

        N->next = aux->next;
        aux->next = N;
        return 0;
    }
}

int remove_term(Poli *p, int expo){
    if(empty_poli(*p) == 0)
        return -1;

    Poli aux = *p;                       
    if(expo == (*p)->expo){               
        *p = aux->next;                   
        free(aux);                          
        return 0;
    }

    while(aux->next != NULL && aux->next->expo != expo)
        aux = aux->next;
    if(aux->next == NULL)
        return -1;

    Poli aux2 = aux->next;
    aux->next = aux2->next;
    free(aux2);
    return 0;
}

int restart_poli(Poli *p){
    if(empty_poli(*p) == 0)
        return -1; //lista está vazia

    Poli aux = *p;

    while(aux != NULL){
        if(aux->expo > 0){
            remove_term(p, aux->expo);            
        }aux = aux->next;
    
    }
    return 0;   
}

int calculate_poli(Poli p, int x){
    if(empty_poli(p) == 0)
        return -1;

    int px;
    // int px2 = p->next->base * (pow(x, p->next->expo));
    int resp = 0;
    
    while(p != NULL){
        resp = p->base * (pow(x, p->expo)) + resp;
        p = p->next;
    }
    return resp;
}

//P(x) = 2x^5 
//x = 2 
//P(2) = 2*(2^5) 
//base * (pow(x,expo))
