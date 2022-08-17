#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{       

    /* S = (pow ( (n1 - M), 2) ) / N - 1
    n = notas, M = media, N = numero de alunos*/

    printf ("<< Média e desvio-padrão >>\n\n");

    float S, M, n1, n2, n3, n4, n5;

    printf ("Digite o valor 1: ");
    scanf ("%f", &n1);
    
    printf ("Digite o valor 2: ");
    scanf ("%f", &n2);
    
    printf ("Digite o valor 3: ");
    scanf ("%f", &n3);
    
    printf ("Digite o valor 4: ");
    scanf ("%f", &n4);
    
    printf ("Digite o valor 5: ");
    scanf ("%f", &n5);

    M = (n1 + n2 + n3 + n4 + n5) / 5;
    S = sqrt((pow ( n1 - M, 2) + pow ( n2 - M, 2) + 
    pow ( n3 - M, 2) + pow ( n4 - M, 2) +
    pow ( n5 - M, 2)) / 5 - 1);

    printf ("A media eh %.0f e o desvio-padrão é %f", M, S);



    return 0;
}