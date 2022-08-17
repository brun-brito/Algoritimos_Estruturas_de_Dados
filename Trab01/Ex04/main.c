#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_ord_no_cab.h"

int main(){

    List list1, list2;
    int op;

    do{
        system("CLS || clear");

        do{
            printf(" --- LISTAS DINAMICAS ENCADEADAS ORDENADAS COM NO CABECALHO --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar listas\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento\n");
            printf(" 4. Remover elemento\n");
            printf(" 5. Tamanho da lista\n");
            printf(" 6. Media dos elementos\n");
            printf(" 7. Verificar listas iguais\n");
            printf(" 8. Intercalar listas\n");
            printf(" 9. Inverter listas\n");
            printf(" 10. Retornar impares\n");
            printf(" 11. Imprimir Lista\n");
            printf(" 12. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 12))
                printf("\n\n Opcao Invalida! Tente novamente...");            
        } while ((op < 1) || (op > 12));

        switch (op){

        case 1:
            printf("\n1. Inicializar uma lista\n\n");
            list1 = create_list();
            list2 = create_list();           

            printf("Listas 1 e Lista 2 criadas com sucesso. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            int op2;

            do{
                printf("Digite qual lista gostaria de verificar:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op2);
                if(op2 < 1 || op2 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            }while(op2 < 1 || op2 > 2);
            
            if(op2 == 1){
                if(empty_list(&list1) == 0)
                    printf("\nA lista 1 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nA lista 1 contem um ou mais elementos. Aperte qualquer tecla para continuar...\n\n");

                getch();
                break;
            }

            if(op2 == 2){
                if(empty_list(&list2) == 0)
                    printf("\nA lista 2 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nA lista 2 contem um ou mais elementos. Aperte qualquer tecla para continuar...\n\n");

                getch();
                break;
            }     

        case 3:
            printf("\n3. Inserir elemento\n\n");
            int op3, j;

            do{
                printf("Digite em qual lista gostaria de inserir:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op3);
                if(op3 < 1 || op3 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op3 < 1 || op3 > 2);

            printf("\nDigite o elemento a ser inserido: ");  
            scanf("%d", &j);

            if(op3 == 1){
                if(insert_elem_ord(&list1, j) == 0)
                    printf("\nElemento %d inserido na lista 1 com sucesso. Aperte qualquer tecla para continuar...\n\n", j);
                else
                    printf("\nFalha ao inserir elemento %d na lista 1. Novo no nao foi criado. Aperte qualquer tecla para continuar...\n\n", j);
                getch();
                break;
            }

            if(op3 == 2){
                if(insert_elem_ord(&list2, j) == 0)
                    printf("\nElemento %d inserido na lista 2 com sucesso. Aperte qualquer tecla para continuar...\n\n", j);
                else
                    printf("\nFalha ao inserir elemento %d na lista 2. Novo no nao foi criado. Aperte qualquer tecla para continuar...\n\n", j);
                getch();
                break;
            }

        case 4:
            printf("\n4. Remover elemento\n\n");
            int x, op4;

            do{
                printf("\nDigite de qual lista gostaria de remover:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op4);
                if(op4 < 1 || op4 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op4 < 1 || op4 > 2);

            printf("\nDigite o elemento a ser removido: ");                
            scanf("%d", &x);

            if(op4 == 1){
                if (remove_elem_ord(&list1, x) == 0)
                    printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar...\n\n", x);
                else
                    printf("\nFalha ao remover o elemento %d: lista nao criada, vazia ou o elemento nao pertence a lista. Aperte qualquer tecla para continuar...\n\n", x);
                getch();
                break;
            }

            if(op4 == 2){
                if (remove_elem_ord(&list2, x) == 0)
                    printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
                else
                    printf("\nFalha ao remover o elemento %d: lista nao criada, vazia ou o elemento nao pertence a lista. Aperte qualquer tecla para continuar\n", x);
                getch();
                break;
            }            

        case 5:
            printf("\n5. Tamanho da lista\n\n");
            int op5, tam;

            do{
                printf("Digite qual lista gostaria de ter o tamanho:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op5);
                if(op5 < 1 || op5 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op5 < 1 || op5 > 2);

            if(op5 == 1){
                tam = list_size(&list1);
                printf("\nTamanho = %d. Aperte qualquer tecla para continuar...\n\n", tam);    
                getch();
                break;
            }

            if(op5 == 2){
                tam = list_size(&list2);
                printf("\nTamanho = %d. Aperte qualquer tecla para continuar...\n\n", tam);    
                getch();
                break;
            }      

        case 6:
            printf("\n6. Media dos elementos\n\n");
            int op6;
            float avrg;

            do{
                printf("\nDigite qual lista gostaria de ter a media:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op6);
                if(op6 < 1 || op6 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op6 < 1 || op6 > 2);

            if(op6 == 1){
                avrg = average_list(&list1);
                if(avrg == -1)
                    printf("\nErro ao calcular media da lista 1. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nMedia da lista 1 = %.2f. Aperte qualquer tecla para continuar...\n\n", avrg);

                getch();
                break;
            }

            if(op6 == 2){
                avrg = average_list(&list2);
                if(avrg == -1)
                    printf("\nErro ao calcular media da lista 1. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nMedia da lista 1 = %.2f. Aperte qualquer tecla para continuar...\n\n", avrg);

                getch();
                break;
            }

        case 7:
            printf("\n7. Verificar listas iguais\n\n");
            int res7 = equal_lists(&list1, &list2);

            if(res7 == -1)
                printf("\nAlguma das listas esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else if(res7 == -2)
                printf("\nAs listas possuem tamanhos diferentes! Aperte qualquer tecla para continuar...\n\n");
            else if(res7 == -3)
                printf("\nElementos das listas sao diferentes! Aperte qualquer tecla para continuar...\n\n");                
            else 
                printf("\nAs listas 1 e 2 sao iguais! Aperte qualquer tecla para continuar...\n\n");
                    
            getch();
            break;

        case 8:
            printf("\n8. Intercalar listas");
            List intercal = create_list();    

            int res8 = intercal_list(&list1, &list2, &intercal);        

            if(res8 == -1)
                printf("\n\nFalha ao intercalar, alguma das listas esta vazia! Aperte qualquer tecla para continuar...\n\n");
            
            else if(res8 == -2)
                printf("\n\nFalha ao intercalar, as listas possuem tamanhos diferentes! Aperte qualquer tecla para continuar...\n\n");
            
            else
                printf("\n\nLista 1 e Lista 2 interacaladas: {");
                print_list(intercal);
                printf("\nLista impressa com sucesso! Aperte qualquer tecla para continuar...\n\n");
                        
            getch();
            break;

        case 9:
            printf("\n9. Inverter listas\n\n");
            int op9;
            List reverse;

            reverse = create_list();

            do{
                printf("Digite qual lista gostaria de inverter:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op9);
                if(op9 < 1 || op9 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            }while(op9 < 1 || op9 > 2);
             
            if(op9 == 1){                
                if(reverse_list(&list1, &reverse) == -1)
                    printf("\nLista 1 esta vazia! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nLista 1 invertida: {");
                    print_list(reverse);
                    printf("\nAperte qualquer tecla para continuar...\n\n");

                getch();
                break;
            }
           
            if(op9 == 2){                
                if(reverse_list(&list2, &reverse) == -1)
                    printf("\nLista 2 esta vazia! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nCopia da Lista 2 invertida: {");
                    print_list(reverse);
                    printf("\nAperte qualquer tecla para continuar...\n\n");         

                getch();
                break;
            }

        case 10:
            printf("\n10. Retornar impares\n\n");
            int op10;
            
            do{
                printf("Digite qual lista gostaria de obter os impares:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op10);
                if(op10 < 1 || op10 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op10 < 1 || op10 > 2);

            List odd;
            odd = create_list();            

            if(op10 == 1){
                odd_elems_list(&list1, &odd);               
                printf("\nLista com os elementos impares: {");
                print_list(odd);
                printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n");              

                getch();
                break;
            }
            
             if(op10 == 2){
                odd_elems_list(&list2, &odd);               
                printf("\nLista com os elementos impares: {");
                print_list(odd);
                printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n");              

                getch();
                break;
            }          

        case 11:
            printf("\n11. Imprime lista\n\n");

            int op11;

             do{
                printf("\nDigite qual lista gostaria de imprimir:\n");
                printf("1 - Lista 1\n2 - Lista 2\nOpcao: ");
                scanf("%d", &op11);
                if(op11 < 1 || op11 > 2)
                    printf("\nOpcao invalida, digite novamente!\n\n");
            } while(op11 < 1 || op11 > 2);

            if(op11 == 1){
                printf("\nLista 1: {");
                print_list(list1);
                printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n");
                getch();
                break;
            }

            if(op11 == 2){
                printf("\nLista 2: {");
                print_list(list2);
                printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n");
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
