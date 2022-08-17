#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_est_seq.h"
#define max 20

struct pilha{
    int no[max];
    int topo;
};

Pilha cria_pilha(){
    Pilha plh;
    plh = (Pilha) malloc(sizeof(struct pilha));

    if(plh != NULL)
        plh->topo = -1; //indicando uma lista vazia
    return plh;
}

int pilha_vazia(Pilha plh){
    if(plh->topo == -1)
        return 0;
    else
        return -1;
}

int pilha_cheia(Pilha plh){
    if(plh->topo == max-1)
        return 0;   //pilha cheia
    else
        return -1;
}

int push(Pilha plh, int elem){
    if(plh == NULL || pilha_cheia(plh) == 0)
        return -1;
    
    plh->topo++;                //topo sai de -1
    plh->no[plh->topo] = elem;  //insere na posicao topo
    return 0;
}

int pop(Pilha plh, int *elem){
    if(plh == NULL || pilha_vazia(plh) == 0)
        return -1;
    
    *elem = plh->no[plh->topo];
    plh->topo--;
    return 0;
}

int le_topo(Pilha plh, int *elem){
    if(plh == NULL || pilha_vazia(plh) == 0)
        return -1;

    *elem = plh->no[plh->topo];
    return 0;
}

int imprime_pilha(Pilha plh){
    if(plh == NULL)
        return -1;  
    
    if(pilha_vazia(plh) == 0){
        printf("Pilha: {}");
        return 0;
    }    
    Pilha p2 = cria_pilha();
    
    while(plh->topo >= 0){
        printf("Pilha[%d] = %d\n",plh->topo, plh->no[plh->topo]);
        push(p2, plh->no[plh->topo]);
        plh->topo--;
    }

    while(p2->topo >= 0){
        push(plh, p2->no[p2->topo]);
        p2->topo--;
    }
    return 0;
}

int imprime_reverso(Pilha plh){
    int i;
    if(plh == NULL)
        return -1;  
    
    if(pilha_vazia(plh) == 0){
        printf("Pilha: {}");
        return 0;
    }    
    Pilha p2 = cria_pilha();

    while(plh->topo >= 0){
        push(p2, plh->no[plh->topo]);
        plh->topo--;
    }
    while(p2->topo >= 0){
        printf("Pilha[%d] = %d\n", p2->topo, p2->no[p2->topo]);
        push(plh, p2->no[p2->topo]);
        p2->topo--;
    }
    return 0;
}

int libera_pilha(Pilha plh){
    if(plh == NULL || pilha_vazia(plh) == 0)
        return -1;

    while(plh->topo >= 0)
        plh->topo--;
    return 0;
}

int elimina_elem(Pilha plh, int elem){
    if(plh == NULL || pilha_vazia(plh) == 0)
        return -1;

    Pilha plh2 = cria_pilha();
    
    while(plh->topo >= 0){
        if(plh->no[plh->topo] == elem)    
            plh->topo--;               
        else{
            push(plh2, plh->no[plh->topo]); 
            plh->topo--;
        }        
    }
    if(pilha_vazia(plh2) == 0)
        return -2;

    while(plh2->topo >= 0){
        push(plh, plh2->no[plh2->topo]);
        plh2->topo--;
    }
    return 0;
}

int par_e_impar(Pilha plh){
    if(plh == NULL || pilha_vazia(plh) == 0)
        return -1; 

    Pilha par, impar, pfim;

    par = cria_pilha();
    impar = cria_pilha();
    pfim = cria_pilha();

    while((plh)->topo >= 0){
        if((plh)->no[(plh)->topo] % 2 == 0)
            push(par, (plh)->no[(plh)->topo]);
        else 
            push(impar, (plh)->no[(plh)->topo]);
        
        push(pfim, (plh)->no[(plh)->topo]);
        (plh)->topo--;
    }    
    printf("\nPares: \n");
    imprime_pilha((par));

    printf("\nImpares: \n");
    imprime_pilha((impar));
    
    while(pfim->topo >= 0){
        push(plh, pfim->no[pfim->topo]);
        pfim->topo--;
    }
    return 0;    
}

int verifica_palindromo(char* palavra){
    int tam,met,x, i = 0;
    tam = strlen(palavra);
    met = tam/2;
    Pilha p2 = cria_pilha();
    while(i < met){
        push(p2, palavra[i]);
        i++;
    }
    if(tam % 2 != 0)
        i++;
    
    while(p2->topo >= 0){
        pop(p2, &x);
        if(x == palavra[i])
            i++;
        else
            return -1;
    }
    return 0;

}