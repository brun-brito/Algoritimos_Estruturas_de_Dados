#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "TabelaBebidasdin.h"

int main()
{
    Tabela tabela;
    int op;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- TABELA BEBIDAS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar tabela\n");
            printf(" 2. Inserir registro\n");
            printf(" 3. Excluir ultimo registro\n");
            printf(" 4. Imprimir tabela\n");
            printf(" 5. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 5))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 5));

        switch (op)
        {
        case 1:
            printf("\n1. Criar tabela\n\n");
            tabela = create_tabela();
            printf("\nTabela criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            getch();
            break;

        case 2:
            printf("\n3. Inserir registro\n\n");
            char nm[30];
            int vl;
            float pr;
            printf("Digite o nome do registro a ser inserido: ");            
            scanf("%s", &nm); 
            printf("Digite o volume (ml) do registro a ser inserido: ");            
            scanf("%d", &vl);
            printf("Digite o preco do registro a ser inserido: R$");            
            scanf("%f", &pr);
            if (insert_reg(&tabela, nm, vl, pr) == 0){ 
                printf("\nRegistro inserido com sucesso. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("\nFalha ao inserir registro: tabela nao criada ou tabela cheia. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;
        case 3:
            printf("\n4. Excluir ultimo registro\n\n");
            if (remove_last_reg(&tabela) == -1){
                printf("\nFalha ao remover o registro: tabela vazia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("\nRegistro removido com sucesso. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        case 4:
            printf("\n5. Imprimir tabela\n\n");
            if(empty_tabela(tabela) == 0)
                printf("Tabela vazia. Aperte qualquer tecla para continuar\n");
            else{
            print_tabela(tabela);
            printf("\nTabela impressa com sucesso. Aperte qualquer tecla para continuar\n");
            }
            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 5);

    return 0;
}

