#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha_din_enc.h"

int main()
{
    Pilha pilha;
    int op;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- PILHA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Inserir elemento\n");
            printf(" 4. Remover o topo\n");
            printf(" 5. Ler o topo\n");
            printf(" 6. Imprimir Pilha\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...");
        }while ((op < 1) || (op > 7));

        switch (op)
        {
        case 1:
            printf("\n1. Criar Pilha\n\n");
                pilha = cria_pilha();
                printf("Pilha criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            getch();
            break;

        case 2:
            printf("\n2. Verificar Pilha vazia\n\n");
            if (pilha_vazia(pilha) == 0){
                printf("A Pilha esta vazia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A Pilha contem um ou mais elementos. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 3:
            printf("\n3. Inserir elemento\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j); 
            if (push(&pilha, j) == 0){ 
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar\n", j);
            }
            else{
                printf("\nFalha ao inserir elemento %d: elemento nao alocado. Aperte qualquer tecla para continuar\n", j);
            }
            getch();
            break;

        case 4:
            printf("\n4. Excluir o topo\n\n");
            int x;
            if (pop(&pilha, &x) == 0)
                printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
            else
                printf("\nFalha ao remover o topo: pilha vazia. Aperte qualquer tecla para continuar\n");
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
            printf("\n6. Imprimir Pilha\n\n");
                imprime_pilha(pilha);
                printf("\nPilha impressa com sucesso. Aperte qualquer tecla para continuar\n");
            getch();
            break;


        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 7);

    return 0;
}

