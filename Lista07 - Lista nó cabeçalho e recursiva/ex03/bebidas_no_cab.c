#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "bebidas_no_cab.h"

struct node{
    char name[20];
    int vol;
    float price;
    struct node* next;
};

Tabela create_tabela(){
    Tabela header = (Tabela) malloc(sizeof(struct node));
    if(header != NULL)    
        header->next = NULL;
    return header;
}

int empty_tabela(Tabela tbl){
    if(tbl->next == NULL)
        return 0;
    else
        return -1;
}

int insert_reg(Tabela tbl, char *name, int vol, float price){
    Tabela N = (Tabela) malloc(sizeof(struct node));
    if (N == NULL)
        return -1;    

    strcpy(N->name, name);
    N->vol = vol;
    N->price = price;
    N->next = tbl->next;
    tbl->next = N;
    return 0;
}

int remove_last_reg(Tabela tbl){         //vai remover o ultimo inserido
    if (empty_tabela(tbl) == 0)
        return -1;

    Tabela aux = tbl->next;
    tbl->next = aux->next;
    free(aux);
    return 0;
}


void print_tabela(Tabela tbl){
    Tabela aux = tbl->next;
    printf("Tabela = {");   
        for(aux; aux != NULL; aux = aux->next){
            printf((aux->next != NULL) ? "%s/ %dml/ R$%.2f, " : "%s/ %dml/ R$%.2f", aux->name, aux->vol, aux->price);
        }
    printf("}\n");
}