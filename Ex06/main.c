#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_dup_enc_ord.h"

int main(){

    List lst1, lst2;
    int op;

    do{
        system("CLS || clear");
        do{
            printf(" --- LISTA DINAMICA DUPLAMENTE ENCADEADA ORDENADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar listas\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento ordenado\n");
            printf(" 4. Remover elemento\n");
            printf(" 5. Tamanho da lista\n");
            printf(" 6. Media dos elementos\n");
            printf(" 7. Verificar listas iguais\n");
            printf(" 8. Remover um elemento e todas as suas ocorrencias\n");
            printf(" 9. Remover o maior elemento e todas as suas ocorrencias\n");
            printf(" 10. Multiplos de 3\n");
            printf(" 11. Imprimir Lista\n");
            printf(" 12. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 12))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
            
        } while ((op < 1) || (op > 12));

        switch (op){

            case 1:
                printf("\n1. Inicializar uma lista\n\n");
                lst1 = create_list();
                lst2 = create_list();
                printf("\nListas criadas com sucesso. Aperte qualquer tecla para continuar...\n\n");
                
                getch();
                break;

            case 2:
                printf("\n2. Verificar lista vazia\n\n");
                int op2;

                do{
                    printf("\nDigite qual lista gostaria de verificar se esta vazia:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op2);
                    if(op2 < 1 || op2 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op2 < 1 || op2 > 2);

                if(op2 == 1){
                    if(empty_list(&lst1) == 0)
                        printf("\nLista 1 esta vazia! Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nLista 1 não esta vazia! Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }

                if(op2 == 2){
                    if(empty_list(&lst2) == 0)
                        printf("\nLista 2 esta vazia! Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nLista 2 não esta vazia! Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }              

            case 3:
                printf("\n3. Inserir elemento ordenado\n\n");

                int op3, z;

                do{
                    printf("\nDigite em qual lista gostaria de inserir o elemento:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op3);
                    if(op3 < 1 || op3 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op3 < 1 || op3 > 2);

                printf("\nDigite o elemento a ser inserido: ");                           
                scanf("%d", &z);

                if(op3 == 1){
                    if(insert_elem_ord(&lst1, z) == 0)
                        printf("\nElemento inserido com sucesso na Lista 1! Aperte qualquer tecla para continuar...\n\n");                     
                    else
                        printf("\nErro ao inserir elemento na Lista 1! Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }

                if(op3 == 2){
                    if(insert_elem_ord(&lst2, z) == 0)
                        printf("\nElemento inserido com sucesso na Lista 2! Aperte qualquer tecla para continuar...\n\n");                     
                    else
                        printf("\nErro ao inserir elemento na Lista 2! Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }

            case 4:
                printf("\n4. Remover elemento\n\n");
                int op4, y;

                do{
                    printf("\nDigite em qual lista gostaria de remover o elemento:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op4);
                    if(op4 < 1 || op4 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op4 < 1 || op4 > 2);

                printf("\nDigite o elemento a ser removido: ");                           
                scanf("%d", &y);

                if(op4 == 1){
                    if(remove_elem(&lst1, y) == 0)
                        printf("\nElemento removido com sucesso da Lista 1. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nFalha ao remover elemento Lista 1. Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }

                if(op4 == 2){
                    if(remove_elem(&lst2, y) == 0)
                        printf("\nElemento removido com sucesso da Lista 2. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nFalha ao remover elemento Lista 2. Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }
                

            case 5:
                printf("\n5. Tamanho da lista\n\n");
                int op5, tam;

                do{
                    printf("\nDigite em qual lista gostaria de saber o tamanho:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op5);
                    if(op5 < 1 || op5 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op5 < 1 || op5 > 2);

                if(op5 == 1){
                    tam = list_size(&lst1);                    
                    printf("\nTamanho Lista 1: %d. Aperte qualquer tecla para continuar...\n\n", tam);                    

                    getch();
                    break;
                }

                if(op5 == 2){
                    tam = list_size(&lst2);                    
                    printf("\nTamanho Lista 2: %d. Aperte qualquer tecla para continuar...\n\n", tam);                    

                    getch();
                    break;
                }

            case 6:
                printf("\n6. Media dos elementos\n\n");
                int op6, res6;
                
                do{
                    printf("\nDigite em qual lista gostaria de obter a media:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op6);
                    if(op6 < 1 || op6 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op6 < 1 || op6 > 2);

                if(op6 == 1){
                    res6 = average_list(&lst1);
                    if(res6 == -1)
                        printf("\nFalha pois a Lista 1 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\n A media da Lista 1 eh: %.2f. Aperte qualquer tecla para continuar...\n\n", res6);

                    getch();
                    break;
                }

                if(op6 == 2){
                    res6 = average_list(&lst2);
                    if(res6 == -1)
                        printf("\nFalha pois a Lista 2 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\n A media da Lista 2 eh: %.2f. Aperte qualquer tecla para continuar...\n\n", res6);

                    getch();
                    break;
                }

            case 7:
                printf("\n7. Verificar listas iguais\n\n");
                int res7;

                res7 = equal_lists(&lst1, &lst2);

                if(res7 == -1)
                    printf("\nFalha! Alguma das Listas esta vazia. Aperte qualquer tecla para continuar...\n\n");
                else if(res7 == -2)
                    printf("\nFalha! As Listas possuem elementos diferentes. Aperte qualquer tecla para continuar...\n\n");
                else if(res7 == -3)
                    printf("\nFalha! As Listas possuem tamanhos diferentes. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nAs Listas 1 e Lista 2 sao iguais. Aperte qualquer tecla para continuar...\n\n");
                
                getch();
                break;

            case 8:
                printf("\n8. Remover um elemento e todas as suas ocorrencias\n\n");
                int op8, oc;
                
                do{
                    printf("\nDigite em qual lista gostaria de remover os elementos iguais:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op8);
                    if(op8 < 1 || op8 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op8 < 1 || op8 > 2);

                printf("\nDigite o nro que gostaria de remover e todas as suas ocorrencias: ");
                scanf("%d", &oc);

                if(op8 == 1){
                    if(remove_all_occurrences(&lst1, oc) == -1)
                        printf("\nFalha ao remover todos os elementos %d da Lista 1 pois esta vazia. Aperte qualquer tecla para continuar...\n\n", oc);
                    else
                        printf("\nSucesso ao remover todos os elementos %d da Lista 1. Aperte qualquer tecla para continuar...\n\n", oc);

                    getch();
                    break;
                }

                if(op8 == 2){
                    if(remove_all_occurrences(&lst2, oc) == -1)
                        printf("\nFalha ao remover todos os elementos %d da Lista 2 pois esta vazia. Aperte qualquer tecla para continuar...\n\n", oc);
                    else
                        printf("\nSucesso ao remover todos os elementos %d da Lista 2. Aperte qualquer tecla para continuar...\n\n", oc);

                    getch();
                    break;
                }

            case 9:
                printf("\n9. Remover o maior elemento e todas as suas ocorrencias\n\n");
                int op9;

                do{
                    printf("\nDigite em qual lista gostaria de remover o maior elemento e todas as suas ocorrencias:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op9);
                    if(op9 < 1 || op9 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op9 < 1 || op9 > 2);

                if(op9 == 1){
                    if(remove_biggest_occurrences(&lst1) == -1)
                        printf("\nFalha ao remover pois a Lista 1 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nElementos removidos com sucesso da Lista 1. Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                } 

                if(op9 == 2){
                    if(remove_biggest_occurrences(&lst2) == -1)
                        printf("\nFalha ao remover pois a Lista 2 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    else
                        printf("\nElementos removidos com sucesso da Lista 2. Aperte qualquer tecla para continuar...\n\n");

                    getch();
                    break;
                }

            case 10:
                printf("\n10. Multiplos de 3\n\n");
                int op10;
                List lstMult = create_list();

                do{
                    printf("\nDigite de qual lista gostaria de obter os multiplos de 3:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op10);
                    if(op10 < 1 || op10 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op10 < 1 || op10 > 2);

                if(op10 == 1){
                    if(mult_of_three(&lst1, &lstMult) == -1){
                        printf("\nFalha ao obter multiplos de 3, Lista 1 esta vazia. Aperter qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nMultiplos de 3 da Lista 1: {");
                        print_list(lstMult);
                        printf("\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
                    }

                    getch();
                    break;
                }

                if(op10 == 2){
                    if(mult_of_three(&lst2, &lstMult) == -1){
                        printf("\nFalha ao obter multiplos de 3, Lista 2 esta vazia. Aperter qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nMultiplos de 3 da Lista 2: {");
                        print_list(lstMult);
                        printf("\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
                    }

                    getch();
                    break;
                }

            case 11:
                printf("\n11. Imprime Lista\n\n");
                int op11;

                do{
                    printf("\nDigite qual lista gostaria de imprimir:\n");
                    printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                    scanf("%d", &op11);
                    if(op11 < 1 || op11 > 2)
                        printf("\nOpcao invalida! Digite novamente ...!\n");
                }while (op11 < 1 || op11 > 2);

                if(op11 == 1){
                    printf("\nLista 1: {");
                    print_list(lst1);
                    printf("\nLista 1 impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
                    
                    getch();
                    break;
                }

                if(op11 == 2){
                    printf("\nLista 2: {");
                    print_list(lst1);
                    printf("\nLista 2 impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
                    
                    getch();
                    break;
                }

            default:
                printf("\n\n Pressione qualquer tecla para FINALIZAR...");
                getch();
        }
    } while (op != 12);

    return 0;
}