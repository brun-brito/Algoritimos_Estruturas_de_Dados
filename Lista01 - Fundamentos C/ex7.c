#include <stdio.h>
#include <stdlib.h>

int main()
{       

    /*Para a execucao correta do exercicio eh necessaria a alteracao
    da declaracao int para uma maior precisao, como float ou double 
    (nesse caso double), para que sejam suportados mais bits dentro 
    da variavel e a mesma nao ultrapasse o limite permitido de bits.
    Dessa maneira: */

    double i, v = 1;

    printf("<< Fatorial >>\n");

    for (i = 1; i <= 15; i++)
    {
        v = v * i;
        printf("%.0lf! = %.0lf\n", i, v);
    }

    return 0;
}