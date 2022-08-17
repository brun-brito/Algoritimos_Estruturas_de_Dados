#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "TabelaBebidasdin.h"

struct node{
    char name[20];
    int vol;
    float price;
    struct node* next;
};

Tabela create_tabela(){
    return NULL;
}

int empty_tabela(Tabela tbl){
    if(tbl == NULL)
        return 0;
    else
        return -1;
}

int insert_reg(Tabela *tbl, char *name, int vol, float price){
    Tabela N = (Tabela) malloc(sizeof(struct node));
    if (N == NULL)
        return -1;    

    strcpy(N->name, name);
    N->vol = vol;
    N->price = price;
    N->next = *tbl;
    *tbl = N;
    return 0;
}

int remove_last_reg(Tabela *tbl){         //vai remover o ultimo inserido
    if (empty_tabela(*tbl) == 0)
        return -1;

    Tabela aux = *tbl;
    *tbl = aux->next;
    free(aux);
    return 0;
}


void print_tabela(Tabela tbl){ 
    printf("Tabela = {");   
        for(tbl; tbl != NULL; tbl = tbl->next){
            printf((tbl->next != NULL) ? "%s/ %dml/ R$%.2f, " : "%s/ %dml/ R$%.2f", tbl->name, tbl->vol, tbl->price);
        }
    printf("}\n");
}