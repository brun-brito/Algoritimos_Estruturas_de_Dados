#include <stdio.h>
#include <stdlib.h>
#include "listaO.h"
#define max 20

struct Lista{
    int no[max];
    int Fim;
};

Lista cria_lista(){
    Lista l;
    l = (Lista) malloc(sizeof(struct Lista));

    if(l != NULL)
        l->Fim = 0; //indicando uma lista vazia
        return l;
}

int lista_vazia(Lista l){ //recebe o endereco
    if (l->Fim == 0)
    return 0;   //vazia
    else
    return -1;   //nao vazia
}

int lista_cheia(Lista l){
    if (l->Fim == max)
    return 0;   //cheia
    else
    return -1;   //nao cheia
}

int insere_ordenado(Lista l, int elem){
        if(l == NULL || lista_cheia(l) == 0)
        return -1;

        if(lista_vazia == 0 || elem >= l->no[l->Fim-1]){    //se a lista estiver vazia ou o elemento for maior 
        l->no[l->Fim] = elem;                               //que o ultimo da lista, insere o elem na posição Fim
        }

        else{
            int j,i = 0;
            while(i < l->Fim && elem >= l->no[i])    //comparações para deslocar: ENQUANTO i < fim (corre a lista) 
                i++;                                 //E elem FOR maior que o nó, CONTINUE
            
            for(j = l->Fim; j > i; j--)
                l->no[j] = l->no[j-1];           //a posição j recebe a posição j-1 (antecessor), deslocando  
                                                //os números maiores que o elem para a direita
            l->no[i] = elem;                    
        
        }
        l->Fim++;      
        
        return 0;
    }



int remove_ordenado(Lista l, int elem){
    if (l == NULL || lista_vazia(l) == 0 || elem < l->no[0] || elem > l->no[l->Fim-1]) //casos bases|| mnr 1º|| mai últm 
    return -1;

    int j,i = 0;
    while(i < l->Fim && elem > l->no[i])           //percorre do início ao fim da lst, até achar o elem ou um nó maior 
        i++;

    if(i == l->Fim || elem < l->no[i])            //se i for igual ao fim = percorreu td e nao achou
        return -1;                               //ou o elemento for menor que a primeira posicao = ERRO

    for(j = i + 1; j < l->Fim; i++)             //Desloca a esqueda do sucessor ate o fim da lst
        l->no[j-1] = l->no[j];

    l->Fim--;                                  //decrementa

    return 0;
}

int obtem_valor_elem(Lista l, int elem){
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    }else{
        int i;
        for(i = 0; i < l->Fim; i++){
            if(l->no[i] == elem){
                return elem;
            }
            else{
                return -1;
            }
         }
    }
}

int imprime_lista(Lista l){
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    }else{
        int i;
        for(i = 0; i < l->Fim; i++){
            printf("Lista[%d] = %d\n", i, l->no[i]);
        }
    }
    return 0;
}
