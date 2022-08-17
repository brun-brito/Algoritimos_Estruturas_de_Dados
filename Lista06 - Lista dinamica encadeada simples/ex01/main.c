#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_nao_ord.h"

int main()
{
    List list;
    int op;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- LISTAS DINAMICAS ENCADEADAS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento\n");
            printf(" 4. Excluir elemento\n");
            printf(" 5. Imprimir lista\n");
            printf(" 6. Obter elemento\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 7));

        switch (op)
        {
        case 1:
            printf("\n1. Criar lista\n\n");
            list = create_list();
            printf("\nLista criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            if (empty_list(list) == 0){
                printf("\nA lista esta vazia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("\nA lista contem um ou mais elementos. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 3:
            printf("\n3. Inserir elemento ordenado\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j); 
            if (insert_elem(&list, j) == 0){ 
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar\n", j);
            }
            else{
                printf("\nFalha ao inserir elemento %d: lista nao criada ou lista cheia. Aperte qualquer tecla para continuar\n", j);
            }
            getch();
            break;

        case 4:
            printf("\n4.  Excluir elemento\n\n");
            printf("Digite o elemento a ser removido: ");
            int x;
            scanf("%d", &x);
            if (remove_elem(&list, x) == 0){
                printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
            }
            else{
                printf("\nFalha ao remover o elemento %d: lista nao criada, vazia ou o elemento nao pertence a lista. Aperte qualquer tecla para continuar\n", x);
            }
            getch();
            break;

        case 5:
            printf("\n5. Imprimir lista\n\n");
                print_list(list);
                printf("\nLista impressa com sucesso. Aperte qualquer tecla para continuar\n");
            
            getch();
            break;

        case 6:
            printf("\n6. Obter elemento\n");
            printf("\nDigite o elemento: ");
            int y;
            scanf("%d",&y);
            if (get_elem(list, y) == y){
                printf("\nO valor %d esta na lista. Aperte qualquer tecla para continuar\n",y);
            }else{
                printf("\nO valor %d NAO esta na lista. Aperte qualquer tecla para continuar\n",y);
            }            
            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 7);

    return 0;
}

