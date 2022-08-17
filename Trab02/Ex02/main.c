#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha_din_enc.h"

int main(){

    Pilha pilha;
    char palindromo[100];
    int op;

    do{
        system("CLS || clear");
        do{
            printf(" --- PILHA DINAMICA ENCADEADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Inserir elemento\n");
            printf(" 4. Excluir ultimo elemento inserido\n");
            printf(" 5. Ler o topo\n");
            printf(" 6. Imprimir pilha\n");
            printf(" 7. Imprimir reversa\n");
            printf(" 8. Liberar pilha\n");
            printf(" 9. Verifica se eh palindromo\n");
            printf(" 10. Exclui ocorrencias de um elemento na pilha\n");
            printf(" 11. Separa pares e impares da pilha\n");
            printf(" 12. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 12))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
        }while ((op < 1) || (op > 12));

        switch (op){

        case 1:
            printf("\n1. Criar Pilha\n\n");
            pilha = cria_pilha();
            printf("Pilha criada com sucesso. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 2:
            printf("\n2. Verificar pilha vazia\n\n");
            if (pilha_vazia(pilha) == 0){
                printf("A Pilha esta vazia. Aperte qualquer tecla para continuar...\n\n");
            }
            else{
                printf("A Pilha contem um ou mais elementos. Aperte qualquer tecla para continuar...\n\n");
            }
            getch();
            break;

        case 3:
            printf("\n3. Inserir elemento\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j); 
            if (push(&pilha, j) == 0){ 
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar...\n\n", j);
            }
            else{
                printf("\nFalha ao inserir elemento %d: elemento nao alocado. Aperte qualquer tecla para continuar...\n\n", j);
            }
            getch();
            break;

        case 4:
            printf("\n4. Excluir ultimo elemento inserido\n\n");
            int x;
            if (pop(&pilha, &x) == 0)
                printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar...\n\n", x);
            else
                printf("\nFalha ao remover o topo: pilha vazia. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 5:
            printf("\n5. Ler o topo\n\n");
            int topo;
            if(le_topo(pilha, &topo) == -1)
                printf("Pilha vazia. Aperte qualquer tecla para continuar\n\n");
            else
                printf("O valor do topo eh: %d. Aperte qualquer tecla para continuar\n\n",topo);
            getch();
            break;

        case 6:
            printf("\n6. Imprimir pilha\n\n");
            printf("Pilha: \n");
            imprime_pilha(pilha);
            printf("\nPilha impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 7:
            printf("\n7. Imprimir pilha reversa\n\n");
            printf("Pilha reversa: \n");
            imprime_reverso(pilha);
            printf("\nPilha impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 8:
            printf("\n8. Liberar pilha\n\n");
            int res8;

            res8 = liberar_pilha(&pilha);

            if(res8 == -1)
                printf("Pilha ja esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Pilha liberada com sucesso! Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 9:
            printf("\n9. Verifica se eh palindromo\n\n");
            printf("Digite a palavra a verificar: ");
                scanf("%s", palindromo);
                int res9;
                res9 = verifica_palindromo(palindromo); 
                if(res9 == -1)
                    printf("\nA palavra NAO eh um palindromo.");
                else
                    printf("\nA palavra EH um palindromo.");                
                printf(" Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 10:
            printf("\n10. Exclui ocorrencias de um elemento na pilha\n\n");
            int res10, e;

            printf("Digite o elemento a ser excluido da pilha: ");
            scanf("%d", &e);

            res10 = exclui_ocorrencias_elem(&pilha, e);

            if(res10 == -1)
                printf("\n\nFalha! pilha esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else if(res10 == -2)
                printf("\n\nFalha! Nao existe esse elemento na pilha. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\n\nElemento excluido com sucesso! Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 11:
            printf("\n11. Separa pares e impares da pilha\n\n");
            
            if(par_e_impar(&pilha) == -1)
                printf("\nFalha! A Pilha esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nPares e impares separados com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;


        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }
    } while (op != 12);

    return 0;
}

