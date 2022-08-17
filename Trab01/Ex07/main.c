#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "prob_josephus.h"

int main (){

    int op;  

    do{
        system("CLS || clear");

        do{
            printf(" --- PROBLEMA DE JOSEPHUS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar pelotao\n");
            printf(" 2. Inserir um novo soldado no pelotao\n");
            printf(" 3. Remover um soldado aleatorio do pelotao\n");
            printf(" 4. Imprimir nome do(s) soldados do pelotao\n");
            printf(" 5. Imprimir nome do(s) soldados eliminados\n");            
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 6))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 6));

        switch (op){
            
        case 1: 
            printf("\n\n1 . Criar pelotao \n\n");
            List soldados, mortos;
            soldados = creat_list();
            mortos = creat_list();

            printf("Pelotao cridado com sucesso! Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 2:
            printf("\n\n2. Inserir um novo soldado no pelotao\n\n");
            char nome[150];
            int res2;
            printf("Digite seu nome: ");
            scanf("%s",nome);
            

            res2 = insert_soldier_end(&soldados, nome);

            if(res2 == 0)
                printf("\nSoldado %s inserido no pelotao com sucesso. Aperte qualquer tecla para continuar...\n\n",nome);
            else
                printf("\nFalha ao inserir soldado! Aperte qualquer tecla para continuar...\n\n");


            getch();
            break;

        case 3:
            printf("\n\n3. Remover um soldado aleatorio do pelotao\n\n");
            
            int res3, sorteado, pos;

            res3 = remove_soldier(&soldados, &mortos);

            if(res3 == -1){
                printf("\nFalha ao remover soldado, o pelotao esta vazio! Aperte qualquer tecla para continuar...\n\n");
            }else if(res3 == -5){
                printf("\nTente excluir novamente! Nro sorteado foi o ZERO. Aperte qualquer tecla para continuar...\n\n");            
            }else if(res3 == 10){
                printf("\nSo ha um soldado no pelotao! Ele eh o sobrevivente. Imprima a lista para ver o seu nome.\n");
                printf("Aperte qualquer tecla para continuar...\n\n");
            }else{
                printf("\nSoldado removido com sucesso! Aperte qualquer tecla para continuar\n\n");
            }

            getch();
            break;

        case 4:
            printf("\n\n4. Imprimir nome do(s) soldados do pelotao\n");

            printf("\nPelotao");
            print_list(soldados);
            printf("}\n");

            printf("\nPelotao impresso com sucesso! Aperte qualquer para continuar...\n\n");           

            getch();
            break;

        case 5:
            printf("\n\n5. Imprimir nome do(s) soldados eliminados\n");

            printf("\nEliminados");
            print_list(mortos);
            printf("}\n");

            printf("\nEliminados impresso com sucesso! Aperte qualquer para continuar...\n\n");  

            getch();
            break;

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }

    } while(op != 6);

    return 0;
}