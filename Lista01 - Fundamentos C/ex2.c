#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

//Dxy = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2))      

printf("<< Distancia >>\n");

float x1 = 0,x2,y1 = 0,y2,Dxy;

printf("Entre com a coordenada x: \n");     
scanf("%f", &x2);      

printf("Entre com a coordenada y: \n");
scanf("%f", &y2);

Dxy = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

printf("A distancia entre os pontos (%.0f,%.0f) e (%.0f,%.0f) eh %.1f\n",x2,y2,x1,y1, Dxy);

return 0;      
}