#include <stdio.h>
#include <stdlib.h>
#include "lista_est_ord.h"
#define max 10

struct list{
    int node[max];
    int end;
};

List create_list(){
    List lst;
    lst = (List) malloc (sizeof(struct list));

    if(lst != NULL){
        lst->end = 0;
    }
    return lst;
}

int empty_list(List lst){
    if(lst->end == 0)
    return 0;
    else
    return -1;
}

int full_list(List lst){
    if(lst->end == max)
    return 0;
    else
    return -1;
}

int insert_elem_ord(List lst, int elem){
    if(lst == NULL || full_list(lst) == 0)
        return -1;
    if(empty_list(lst) == 0 || elem >= lst->node[lst->end-1])     
        lst->node[lst->end] = elem;                            
    else{                         
        int j,i = 0;
        while(i < lst->end && elem >= lst->node[i])    
            i++;        
        for(j = lst->end; j > i; j--)
            lst->node[j] = lst->node[j-1];            
            lst->node[i] = elem;                    
    }
    lst->end++;              
    return 0;
}

int remove_elem(List lst, int elem){
    int i, aux = 0;
    if(lst == NULL || empty_list(lst) == 0)
        return -1;
    else
        while(aux < lst->end && lst->node[aux] != elem)
        aux++;

    if(aux == lst->end && lst->node[aux] != elem)
        return -2;

    for(i = aux + 1; i < lst->end; i++)
        lst->node[i-1] = lst->node[i];

    lst->end--;
    return 0;
}

int remove_odd(List lst){
    int i = 0, fim = lst->end;
    if(lst == NULL || empty_list(lst) == 0)
        return -1; // lista nao foi criada ou esta vazia
    
    while(i < lst->end){
        if(lst->node[i] % 2 != 0)
            remove_elem(lst, lst->node[i]);
        else
            i++;
    }
    

    if(fim == lst->end) // nao foi removido nenhum elemento
        return -2;

    return 0;
}

int print_list(List lst){
    if(lst == NULL)
        return -1;
    int i;
    if(empty_list(lst) == 0)
        printf("{ }");
    for(i = 0; i < lst->end; i++)
        printf("%d ", lst->node[i]);   
    return 0;
}

int smallest_elem(List lst){  
    int i, aux;
    if(lst == NULL || empty_list(lst) == 0)
        return -1;
    else
        aux = lst->node[0];
        for(i = 0; i < lst->end; i++)
        if(lst->node[i] < aux)
            aux = lst->node[i];
    return aux;        
}

int order_list(List lst){
    int i, j, aux;
    if(lst == NULL || empty_list(lst) == 0)
        return -1;
    else
        for(j = 0; j < lst->end; j++){       //le a posicao
            for(i = 0; i < lst->end; i++){         //le o conteudo
                if(lst->node[i] > lst->node[i+1]){
                aux = lst->node[i];
                lst->node[i] = lst->node[i+1];
                lst->node[i+1] = aux;
                }
            }
        }
    return 0;
}

int size_list(List lst){
    int i, aux = 0;
    if(lst == NULL)
        return -1;   
    else
        return lst->end; 
}

int concat_list_ord(List lst1, List lst2, List lst3){   
        
    int x = size_list(lst1);
    int y = size_list(lst2);
    int res = x + y;
    int i = 0;

    if(res > max)   
        return -1;

    for (i; i < lst1->end; i++)
        insert_elem_ord(lst3, lst1->node[i]);    

    for (i; i < lst2->end; i++)
        insert_elem_ord(lst3, lst2->node[i]); 

  return 0;
}