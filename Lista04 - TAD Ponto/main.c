#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

int main()
{ 
    float d, x1, x2, y1, y2;
    Ponto *p, *q;

    printf("Escreva os valores de x1 e y1: ");
    scanf("%f %f", &x1, &x2);
    printf("Escreva os valores de x2 e y2: ");
    scanf("%f %f", &y1, &y2);
    p = gera_pto(x1,x2);
    q = gera_pto(y1,y2);
    d = distancia_pto(p,q);

    printf("A distancia entre os pontos eh de: %.2f\n",d);
 
    libera_pto(p);
    libera_pto(q);

   return 0;
}