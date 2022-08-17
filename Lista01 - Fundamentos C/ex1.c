#include <stdio.h>
#include <stdlib.h>  

int main (){  

float a,b,c,d;

printf("<< Loteria >>\n");

printf("Bolao jogador 1 R$: "); 
scanf("%f", &a);

printf("Bolao jogador 2 R$: ");  
scanf("%f", &b); 

printf("Bolao jogador 3 R$: ");
scanf("%f", &c); //valores bolao  

printf("Informe o valor do premio: ");  
scanf("%f",&d); //valor premio    

printf("Jogador 1 recebera R$: %.1f\n", (a/10) * d);   
printf("Jogador 2 recebera R$: %.1f\n", (b/10) * d);
printf("Jogador 3 recebera R$: %.1f\n", (c/10) * d);  


return 0;      
}