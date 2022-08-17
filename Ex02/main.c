#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_est_ord.h"


int main(){

    List list1, list2, list3;
    int op;

    do
    {
        system("CLS || clear");
        do
        {
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar uma lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento ordenado\n");
            printf(" 4. Remover um elementon");
            printf(" 5. Remover Impares\n");
            printf(" 6. Menor elemento\n");
            printf(" 7. Ordenar lista\n");
            printf(" 8. Tamanho da lista\n");
            printf(" 9. Concatena lista ordenada\n");
            printf(" 10. Imprimir Lista\n");
            printf(" 11. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 11))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 11));

        switch (op)
        {
        case 1:
            printf("\n1. Inicializar uma lista\n\n");
                list1 = create_list();
                list2 = create_list();
                list3 = create_list();

                if(list1 == NULL || list2 == NULL || list3 == NULL){
                    printf("\nErro ao criar listas. Aperte qualquer tecla para continuar... \n\n");
                }else{
                    printf("\nLista 1, Lista 2 e Lista 3 criadas com sucesso. Aperte qualquer tecla para continuar...\n\n");
                }
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
                int option;

                do{
                    printf("Digite qual lista gostaria de verificar:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option);
                    if((option < 1) || (option > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option < 1) || (option > 3));
            
                if(option == 1){
                    if(empty_list(list1) == 0){
                        printf("\nLista 1 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 1 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option == 2){
                    if(empty_list(list2) == 0){
                        printf("\nLista 2 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 2 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option == 3){
                    if(empty_list(list3) == 0){
                        printf("\nLista 3 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 3 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }            

        case 3:
            printf("\n\n. Inserir elemento\n");
                int option2;

                do{
                    printf("Digite qual lista gostaria de inserir:\n");
                    printf("1 - Lista 1, 2 - Lista 2: ");
                    scanf("%d", &option2);
                    if((option2 < 1) || (option2 > 2))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option2 < 1) || (option2 > 3));

                printf("Digite o nro a ser inserido: ");
                    int z;           
                    scanf("%d", &z);

                if(option2 == 1){                
                    if(insert_elem_ord(list1, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

                if(option2 == 2){                
                    if(insert_elem_ord(list2, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

                if(option2 == 3){                
                    if(insert_elem_ord(list3, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

        case 4:
            printf("\n4. Remover um elemento\n\n");
            printf("Digite o elemento a ser removido: ");
            int elem, option3;

                do{
                    printf("Digite de qual lista gostaria de Remover elemento:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option3);
                    if((option3 < 1) || (option3 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");                    
                } while((option3 < 1) || (option3 > 3));

                printf("Digite o elemento a ser removido: ");                
                scanf("%d", &elem);

                if(option3 == 1){
                    int r = remove_elem(list1, elem);
                    if(r == -1){
                        printf("\nErro ao remover! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r == -2){
                        printf("Erro ao remover! Elemento nao existe na lista 1.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                getch();
                break;
                } 
        

                if(option3 == 2){
                    int r1 = remove_elem(list2, elem);
                    if(r1 == -1){
                        printf("\nErro ao remover! Lista 2 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r1 == -2){
                        printf("Erro ao remover! Elemento nao existe na lista 2.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                getch();
                break; 
                }    

                if(option3 == 3){
                    int r2 = remove_elem(list3, elem);
                    if(r2 == -1){
                        printf("\nErro ao remover! Lista 3 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r2 == -2){
                        printf("Erro ao remover! Elemento nao existe na lista 3.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                getch();
                break; 
                }

        case 5:
            printf("\n5. Remover Impares\n\n");
            int option4;

                do{
                    printf("Digite qual lista gostaria de remover os impares:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option4);
                    if((option4 < 1) || (option4 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option4 < 1) || (option4 > 3));

                if(option4 == 1){
                    int ro = remove_odd(list1);
                    if(ro == -1){
                        printf("\nErro ao remover! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro == -2){
                        printf("Erro ao remover! Nao existe impares na lista 1.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

                 if(option4 == 2){
                    int ro1 = remove_odd(list2);
                    if(ro1 == -1){
                        printf("\nErro ao remover! Lista 2 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro1 == -2){
                        printf("Erro ao remover! Nao existe impares na lista 2.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

                if(option4 == 3){
                    int ro2 = remove_odd(list3);
                    if(ro2 == -1){
                        printf("\nErro ao remover! Lista 3 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro2 == -2){
                        printf("Erro ao remover! Nao existe impares na lista 3.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

        case 6:
            printf("\n6. Menor elemento\n\n");
            int option5;

                do{
                    printf("Digite qual lista gostaria de verificar:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option5);
                    if((option5 < 1) || (option5 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option5 < 1) || (option5 > 3));

                if(option5 == 1){
                    int me = smallest_elem(list1);
                    if(me == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("Menor elemento da lista 1 eh: %d.\n", me);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }

                if(option5 == 2){
                    int me1 = smallest_elem(list2);
                    if(me1 == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("Menor elemento da lista 1 eh: %d.\n", me1);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }

                if(option5 == 3){
                    int me2 = smallest_elem(list3);
                    if(me2 == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("Menor elemento da lista 1 eh: %d.\n", me2);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }

        case 7:
            printf("\n\n7. Ordenar lista\n\n");
                int option6;

                do{
                    printf("Digite qual lista gostaria de ordenar:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option6);
                    if((option6 < 1) || (option6 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option6 < 1) || (option6 > 3));
            
                if(option6 == 1){
                    if(order_list(list1) == 0){
                        printf("\nLista 1 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 1 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

                if(option6 == 2){
                    if(order_list(list2) == 0){
                        printf("\nLista 2 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 2 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

                if(option6 == 3){
                    if(order_list(list3) == 0){
                        printf("\nLista 3 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 3 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

        case 8:
            printf("\n8. Tamanho da lista\n\n");
              
            getch();
            break;

            case 9:
                printf("\n\n9. Concatenar lista 1 e lista 2\n\n");
                    int conc = concat_list_ord(list1, list2, list3);

                if(conc == -1)
                    printf("Erro ao concatenar listas. Espaco insuficiente ou lista alguma vazia");
                else
                    printf("Lista 1 e Lista 2 concatenadas com sucesso.");

                getch();
                break;                

            case 10:
                printf("\n\n10. Imprimir lista\n\n");
                    int option10;

                do{
                    printf("Digite qual lista gostaria de imprimir:\n");
                    printf("1 - Lista 1, 2 - Lista 2 ou 3 - Lista 3: ");
                    scanf("%d", &option10);
                    if((option10 < 1) || (option10 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option10 < 1) || (option10 > 3));

                if(option10 == 1)
                    print_list(list1);
            
                if(option10 == 2)
                    print_list(list2);

                if(option10 == 3)
                    print_list(list3);

                getch();
                break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 11);

    return 0;
}
