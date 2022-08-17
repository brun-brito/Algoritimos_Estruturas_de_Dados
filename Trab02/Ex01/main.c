#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha_est_seq.h"

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
            printf(" 1. Criar Pilha\n");
            printf(" 2. Verificar Pilha vazia\n");
            printf(" 3. Verificar Pilha cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Excluir elemento do topo\n");
            printf(" 6. Ler o topo\n");
            printf(" 7. Imprimir Pilha\n");
            printf(" 8. Imprimir Reverso\n");
            printf(" 9. Liberar Pilha\n");
            printf(" 10. Palindromo\n");
            printf(" 11. Elimina um elemento\n");
            printf(" 12. Pares e impares\n");
            printf(" 13. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 13))
                printf("\n\n Opcao Invalida! Tente novamente...");
        }while ((op < 1) || (op > 13));

        switch (op)
        {
        case 1:
            printf("\n1. Criar Pilha\n\n");
            pilha = cria_pilha();
            if (pilha == NULL){
                printf("Erro ao criar Pilha. Aperte qualquer tecla para continuar\n\n");
            }
            else{
                printf("Pilha criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            }
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
            printf("\n3. Verificar Pilha cheia\n\n");
            if (pilha_cheia(pilha) == 0){
                printf("A Pilha esta cheia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A Pilha nao esta cheia. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento\n\n");
            int j;
            scanf("%d", &j); 
            if (push(pilha, j) == 0) 
                printf("Elemento %d inserido com sucesso. Aperte qualquer tecla para continuar\n", j);
            else
                printf("Falha ao inserir elemento %d: Pilha nao criada ou Pilha cheia. Aperte qualquer tecla para continuar\n", j);
            getch();
            break;

        case 5:
            printf("\n5. Excluir elemento\n\n");
            int x;
            if(pop(pilha, &x) == 0){
                printf("Elemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
            }
            else{
                printf("Falha ao remover o elemento: Pilha nao criada ou vazia. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 6:
            printf("\n6. Ler o topo\n\n");
            int topo;
            if(le_topo(pilha, &topo) == -1)
                printf("Pilha nao criada ou vazia. Aperte qualquer tecla para continuar\n\n");
            else
                printf("O valor do topo eh: %d. Aperte qualquer tecla para continuar\n\n",topo);
            getch();
            break;

        case 7:
            printf("\n7. Imprimir Pilha\n\n");
            if(imprime_pilha(pilha) == -1)
                printf("Pilha nao inicializada. Aperte qualquer tecla para continuar\n\n");
            else{
                printf("\nPilha impressa com sucesso. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 8:
            printf("\n8. Imprimir Reverso\n\n");
            if(imprime_reverso(pilha) == -1)
                printf("Pilha nao inicializada. Aperte qualquer tecla para continuar\n\n");
            else{
                printf("\nPilha Reversa impressa com sucesso. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 9:
            printf("\n9. Liberar Pilha\n\n");
            if(libera_pilha(pilha) == -1)
                printf("Pilha nao inicializada ou vazia. Aperte qualquer tecla para continuar\n\n");
            else{
                printf("\nPilha liberada com sucesso. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 10:
            printf("\n10. Palindromo\n\n");
            printf("Digite a palavra a verificar: ");
                char palindromo[100];
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

        case 11:
            printf("\n11. Elimina um elemento\n\n");
                printf("Digite o elemento a remover: ");
                int a;
                scanf("%d", &a);    
                int resp11 = elimina_elem(pilha, a);
                if(resp11 == -1)
                    printf("Pilha nao inicializada ou vazia. Aperte qualquer tecla para continuar\n\n");
                else if(resp11 == -2)
                    printf("Elemento nao esta na pilha. Aperte qualquer tecla para continuar\n\n");
                else
                    printf("\nElemento eliminado com sucesso. Aperte qualquer tecla para continuar\n");
            getch();
            break;

        case 12:
            printf("\n12. Pares e impares\n\n");
                int res10 = par_e_impar(pilha);
                if(res10 == -1)
                    printf("\nFalha, pilha esta vazia! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nPares e impares separados com sucesso! Aperte qualquer tecla para continuar...\n\n");
                
            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 13);

    return 0;
}

