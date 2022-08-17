#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_din_enc_circ.h"

int main(){

    Fila fila;
    int op;

    do{
        system("cls || clear");
        do{
            printf(" --- FILA DINAMICA ENCADEADA CIRCULAR --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");            
            printf(" 3. Inserir elemento\n");          
            printf(" 4. Remover elemento do inicio\n");   
            printf(" 5. Imprimir fila\n");
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {
                printf("\n\n Opcao invalida! Tente novamente...\n\n");               
            }
        } while((op < 1) || (op > 6));

        switch(op){

            case 1:
                printf("\n\n 1. Criar fila\n\n");
                fila = criar_fila();                
                    printf("Fila criada com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");

                getch();
                break;

            case 2:
                printf("\n\n 2. Verificar fila vazia\n\n");            
                    if(fila_vazia(fila) == 0)                
                        printf("Fila esta vazia.\n");
                    else
                        printf("Fila nao esta vazia!");

                    printf("\n\nPressione qualquer tecla para continuar ...");
                                    
                    getch();
                    break;

            case 3:
                printf("\n\n 3. Inserir elemento\n\n");          
                int elem;

                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);

                if(insere_fila(&fila, elem) == -1)
                    printf("Erro ao inserir elemento na fila!");
                else
                    printf("Elemento inserido com sucesso!");
                
                printf("\n\nPressione qualquer tecla para continuar ...");
                                    
                getch();
                break;

            case 4:
                printf("\n\n 4. Remover elemento do inicio\n\n");   
                int elemento, res4;
                              
                res4 = remove_fila(&fila, &elemento);

                if(res4 == -1)
                    printf("Falha ao remover elemento, fila esta vazia!");
                else
                    printf("Elemento removido: %d", elemento);

                printf("\n\nPressione qualquer tecla para continuar ...");
                                
                getch();
                break;

            case 5:
                printf("\n\n 5. Imprimir fila\n\n");
                    imprime_fila(fila);            
                    printf("Fila imrpessa com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                                
                getch();
                break;
        
             default:
                printf("Pressione qualquer tecla para FINALIZAR\n\n");
                getch();
        
        }
    } while(op != 6);

    return 0;    
}
