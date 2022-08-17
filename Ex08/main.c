#include <stdio.h>
#include <stdlib.h>
#include "prob_polinomio.h"

int main(){

    Poli poli;
    int base, expo;
    int op;

    do{
        system("CLS || clear");

        do{
            printf(" --- POLINOMIOS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar um polinomio\n");
            printf(" 2. Inserir um novo termo no polinomio\n");
            printf(" 3. Imprimir polinomio\n");
            printf(" 4. Eliminar o termo associado a potencia de um termo\n");
            printf(" 5. Reiniciar um polinomio\n");
            printf(" 6. Calcular o valor de P(x) para um valor de x solicitado\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 7));

        switch (op){

        case 1: 
        printf("\n1.Inicializar um polinomio\n\n");
            poli = create_poli();
            printf("Polinomio criado com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
        getch();
        break;         

        case 2: 
            printf("\n2. Inserir um novo termo no polinomio\n\n");
            int option, res2;
            printf("Deseja atribuir uma variavel x ao seu termo?\n1: SIM\n2: NAO\nOpcao: ");
            scanf("%d",&option);

            if(option == 1){
                printf("\nDigite o valor da base: ");
                scanf("%d", &base);
                printf("\nDigite o valor do expoente: ");
                scanf("%d", &expo);

                res2 = insert_term_ord(&poli, base, expo);

                if(res2 == 0)
                    printf("\nTermo %dx^%d inserido com sucesso! Aperte qualquer tecla para continuar...\n\n", base, expo);
                else  
                    printf("\nFalha ao inserir novo termo. Aperte qualquer tecla para continuar...\n\n");

            }else if(option == 2){
                printf("\nDigite o valor do termo: ");
                scanf("%d", &base);
                expo = 0;

                res2 = insert_term_ord(&poli, base, expo);

                 if(res2 == -1)
                    printf("\nFalha ao inserir novo termo. Aperte qualquer tecla para continuar...\n\n");
                else 
                    printf("\nTermo %d inserido com sucesso! Aperte qualquer tecla para continuar...\n\n",base);
            
            }else
                printf("Opcao invalida. Insira somente 1 ou 2.\n\n");
            getch();
            break;
            
        getch();
        break; 

        case 3: 
            printf("\n3. Imprimir polinomio\n\n");
            
            printf("\nP(x) = ");
            print_poli(poli);            
            printf("\nPolinomio impresso com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break; 

        case 4: 
            printf(" 4. Eliminar o termo associado a potencia de um termo\n\n");
                    printf("\nDigite o expoente do termo a ser removido: ");                
            scanf("%d", &expo);

                if (remove_term(&poli, expo) == 0)
                    printf("\nTermo de expoente %d removido com sucesso. Aperte qualquer tecla para continuar\n", expo);
                else
                    printf("\nFalha ao remover termo de expoente %d: polinomio vazio ou o termo nao pertence ao polinomio. Aperte qualquer tecla para continuar\n", expo);            
            
            getch();
            break; 

        case 5: 
            printf("\n5. Reiniciar um polinomio\n\n");
                if(restart_poli(&poli) == 0)
                    printf("Todos os termos de P(x) foram removidos com sucesso! Aperte qualquer tecla para continuar\n\n");
                else
                printf("\nFalha em reiniciar os termos de P(x): polinomio vazio ou nao inicializado. Aperte qualquer tecla para continuar\n");            
            
            getch();
            break; 

        case 6: 
            printf("\nCalcular o valor de P(x) para um valor de x solicitado\n\n");
                printf("\nDigite o valor de x que deseja substituir: ");            
            int x;    
            scanf("%d", &x);
            int resp6 = calculate_poli(poli, x);
                if (resp6 == -1)
                    printf("\nFalha ao calcular P(x): polinomio vazio. Aperte qualquer tecla para continuar\n", expo); 
                else  
                    printf("\nO valor de P(x) eh = %d. Aperte qualquer tecla para continuar\n", resp6);         
            
            getch();
            break; 

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();

        }        
    } while (op != 7);
    
    return 0;
}