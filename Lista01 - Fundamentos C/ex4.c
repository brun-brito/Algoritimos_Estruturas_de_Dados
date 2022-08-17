#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    // IMC = M/(H^2)

    float m, h, imc;

    printf ("Escreva a sua massa (kg): ");
    scanf ("%f", &m);
    printf ("Escreva a sua altura (m): ");
    scanf ("%f", &h);
    
    imc = m / (h * h);

    printf ("O seu indice de massa corporal eh igual a %.2f\n", imc);

    if (imc < 18.5)
    {
        printf ("Classificacao: Magreza\n");
    }
    
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf ("Classificacao: Normal\n");
    } 

    else if (imc >= 25 && imc <= 29.9)
    {
        printf ("Classificacao: Sobrepeso\n");
    }
    
    else if (imc >= 30 && imc <= 34.9)
     {
         printf("Classificacao: Obesidade Grau I.\n");
     }
     
     else if (imc >= 35 && imc <= 39.9)
     {
         printf("Classificacao: Obesidade Grau II (severa).\n");
     }
     
     else if (imc >= 40)
     {
         printf("Classificacao: Obesidade Grau III (morbida).\n");
     }
    
    

    return 0;
}