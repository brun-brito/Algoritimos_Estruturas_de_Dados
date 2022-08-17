#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_enc_circ.h"

int main(){

    List list;
    int op;

    do{
        system("CLS || clear");
        do{
            printf(" --- LISTAS DINAMICA ENCADEADA CIRCULAR --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento no fim da lista\n");
            printf(" 4. Inserir elemento no incio da lista\n");
            printf(" 5. Inserir em posicao\n");
            printf(" 6. Remover no inicio da lista\n");
            printf(" 7. Remover em posicao\n");
            printf(" 8. Tamanho da lista\n");
            printf(" 9. Maior elemento da lista\n");
            printf(" 10. Remover pares\n");
            printf(" 11. Imprimir Lista\n");
            printf(" 12. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 12))
                printf("\n\n Opcao Invalida! Tente novamente...");
        } while ((op < 1) || (op > 12));

        switch (op){
        case 1:
            printf("\n1. Inicializar lista\n\n");
            list = create_list();
            printf("Lista criada com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            int op2 = empty_list(list);
            if(op2 == -1)
                printf("\nLista nao esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nLista vazia! Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 3:
            printf("\n3. Inserir elemento no fim da lista\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j);
            if(insert_elem_end(&list, j) == -1)
                printf("\nFalha ao inserir elemento %d: lista nao criada. Aperte qualquer tecla para continuar...\n\n", j);
            else
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar...\n\n", j);

            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento no incio da lista\n\n");
            printf("Digite o elemento a ser inserido: ");
            int i;
            scanf("%d", &i);
            if(insert_elem_begin(&list, i) == -1)
                printf("\nFalha ao inserir elemento %d: lista nao criada. Aperte qualquer tecla para continuar...\n\n", i);
            else
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar...\n\n", i);

            getch();
            break;

        case 5:
            printf("\n5. Inserir em posicao\n\n");
            printf("Digite o elemento e a posicao a ser inserido: ");
            int a,b;
            scanf("%d %d", &a, &b);
             if(insert_elem_pos(&list, a, b) == -1)
                printf("\nFalha ao inserir elemento %d: posicao invalida. Aperte qualquer tecla para continuar...\n\n", a);
            else
                printf("\nElemento %d inserido na posicao %d com sucesso. Aperte qualquer tecla para continuar...\n\n", a, b);

            getch();
            break;

        case 6:
            printf("\n6. Remover no inicio da lista\n\n");
            int c;
            if(remove_elem_begin(&list, &c) == -1)
                printf("Falha ao remover elemento %d: lista nao criada ou vazia. Aperte qualquer tecla para continuar...\n\n", c);
            else
                printf("Elemento %d removido com sucesso. Aperte qualquer tecla para continuar...\n\n", c);

            getch();
            break;

        case 7:
            printf("\n7. Remover em posicao\n\n");
            printf("Digite a posicao a ser removido o elemento: ");
            int p, r;
            scanf("%d", &p);
            int res = remove_elem_pos(&list, p, &r);
            if(res == -1)
                printf("\nFalha ao remover elemento da posicao %d: lista nao criada ou vazia. Aperte qualquer tecla para continuar...\n\n", p);
            else if(res == -2)
                printf("\nFalha ao remover elemento da posicao %d: posicao invalida. Aperte qualquer tecla para continuar...\n\n", p);
            else
                printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", r);

            getch();
            break;

        case 8:
            printf("\n8. Tamanho da lista\n\n");
            if(size_list(list) == -1)
                printf("\nLista nao criada. Aperte qualquer tecla para continuar...\n\n");
            else
            printf("\nTamanho da lista = %d. Aperte qualquer tecla para continuar...\n\n", size_list(list));

            getch();
            break;

        case 9:
            printf("\n9. Maior elemento da lista\n\n");
            if(biggest_elem(list) == -1)
                printf("\nLista vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nO maior elemento da lista eh: %d. Aperte qualquer tecla para continuar...\n\n", biggest_elem(list));

            getch();
            break;

        case 10:
            printf("\n10. Remover pares\n\n");
            int res10;
            res10 = remove_even(&list);
            if(res10 == -1)
                printf("\nErro ao remover elementos: lista vazia! Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nElementos pares removidos com sucesso. Aperte qualquer tecla para continuar...\n\n");
                
            getch();
            break;

        case 11:
            printf("\n11. Imprime Lista\n\n");
            print_list(list);
            printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...\n\n");

            getch();
        }
    }while (op != 12);
    return 0;
}
