#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaNO.h"

int main()
{
    Lista lista;
    int op;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Excluir elemento\n");
            printf(" 6. Imprimir lista\n");
            printf(" 7. Obter elemento\n");
            printf(" 8. SAIR\n");
            // printf(" 8. Inserir elemento ordenado\n");
            // printf(" 9. Excluir elemento ordenado\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 8))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 8));

        switch (op)
        {
        case 1:
            printf("\n1. Criar lista\n\n");
            lista = cria_lista();
            if (lista == NULL){
                printf("Erro ao criar lista.\n");
            }
            else{
                printf("Lista criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            if (lista_vazia(lista) == 0){
                printf("A lista esta vazia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A lista contem um ou mais elementos. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 3:
            printf("\n3. Verificar lista cheia\n\n");
            if (lista_cheia(lista) == 0){
                printf("A lista esta cheia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A lista nao esta cheia. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j); // usuario escolhe o elem a inserir
            if (insere_elem(lista, j) == 0){ // se tiver como inserir, sucesso
                printf("Elemento %d inserido com sucesso. Aperte qualquer tecla para continuar\n", j);
            }
            else{ // se nao, falha
                printf("Falha ao inserir elemento %d: lista nao criada ou lista cheia. Aperte qualquer tecla para continuar\n", j);
            }
            getch();
            break;

        case 5:
            printf("\n5. Excluir elemento\n\n");
            printf("Digite o elemento a ser removido: ");
            int x;
            scanf("%d", &x);
            if (remove_elem(lista, x) == 0){
                printf("Elemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
            }
            else{
                printf("Falha ao remover o elemento %d: lista nao criada, vazia ou o elemento nao pertence a lista. Aperte qualquer tecla para continuar\n", x);
            }
            getch();
            break;

        case 6:
            printf("\n6. Imprimir lista\n\n");
            if (imprime_lista(lista) == 0){
                printf("Lista impressa com sucesso. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("Falha ao imprimir lista: lista nao criada ou vazia. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 7:
            printf("\n7. Obter elemento\n");
            printf("\nDigite o elemento: ");
            int y;
            scanf("%d",&y);
            if (obtem_valor_elem(lista, y) == y){
                printf("O valor %d esta na lista. Aperte qualquer tecla para continuar\n",y);
            }else{
                printf("O valor %d NAO esta na lista. Aperte qualquer tecla para continuar\n",y);
            }            
            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 8);

    return 0;
}

