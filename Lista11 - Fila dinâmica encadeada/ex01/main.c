#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_dois_ponteiros.h"

int main(){

    Fila fila;

    int op;

    do{
        system("cls || clear");
        do{
            printf(" --- FILA DINAMICA ENCADEADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");            
            printf(" 3. Inserir elemento no fim\n");          
            printf(" 4. Remover elemento no inicio\n");   
            printf(" 5. Le o final\n");
            printf(" 6. Imprimir fila\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...");
        }while ((op < 1) || (op > 7));

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
                        printf("Fila criada com sucesso!\n");
                    else
                        printf("Fila nao esta vazia!");

                    printf("\n\nPressione qualquer tecla para continuar ...");
                                    
                    getch();
                    break;

            case 3:
                printf("\n\n 3. Inserir elemento no fim\n\n");          
                int elem;

                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);

                if(insere_fim(fila, elem) == -1)
                    printf("Erro ao inserir elemento na fila!");
                else
                    printf("Elemento inserido com sucesso!");
                
                printf("\n\nPressione qualquer tecla para continuar ...");
                                    
                getch();
                break;

            case 4:
                printf("\n\n 4. Remover elemento no inicio\n\n");   
                int elemento, res4;
                              
                res4 = remove_ini(fila, &elemento);

                if(res4 == -1)
                    printf("Falha ao remover elemento, lista esta vazia!");
                else
                    printf("Elemento excluido: %d", elemento);

                printf("\n\nPressione qualquer tecla para continuar ...");
                                
                getch();
                break;

            case 5:
                printf("\n\n 5. Le o final\n\n");
                int fim;
                if(le_final(fila, &fim) == 0)
                    printf("O valor do fim eh: %d. Aperte qualquer tecla para continuar\n\n",fim);
                else
                    printf("Fila vazia. Aperte qualquer tecla para continuar\n\n");
            getch();
            break;

            case 6:
                printf("\n\n 6. Imprimir fila\n\n");
                imprime_fila(fila);                                
                printf("Fila imrpessa com sucesso!\n");
                printf("\n\nPressione qualquer tecla para continuar ...");
             default:
                printf("Pressione qualquer tecla para FINALIZAR\n\n");
                getch();
        
        }
    } while(op != 7);

    return 0;    
}
