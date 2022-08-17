#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

/*ConversBinDec = 
Para converter um número binário para o número decimal equivalente basta multiplicar
cada dígito pela potência de 2 relativa à posição por ele ocupada e somar os resultados. 
Assim por exemplo o número binário 1 0 1 equivale ao número 5 no sistema decimal*/
  
     int w, x, y, z, dec; //são os bits
     int a, b, c, d; // (bit * potência) do binario / vai do mais significante para o menos (esq. pra dir.)

     printf("== Conversor de numeros binarios ==\n");
     printf("Digite o 1o. bit: ");
     scanf("%d",&w);
     printf("Digite o 2o. bit: ");
     scanf("%d",&x);
     printf("Digite o 3o. bit: ");
     scanf("%d",&y);
     printf("Digite o 4o. bit: ");
     scanf("%d",&z);

     a = w * pow (2,3); // w * 2^3
     b = x * pow (2,2); 
     c = y * pow (2,1); 
     d = z * pow (2,0); 
     dec = a + b + c + d; 

     printf("O numero binario %d%d%d%d corresponde ao numero decimal %d\n", w,x,y,z, dec);
    
    return 0;
}
    