#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct Ponto{
    float x, y;
};

Ponto *gera_pto(float x, float y){
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    if (p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void set_pto(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float get_pto(Ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void libera_pto(Ponto *p){
     free(p);
}

float distancia_pto(Ponto *p1, Ponto *p2){
    float dx = p1->x - p2->x; // diferença entre os valores de x
    float dy = p1->y - p2->y; // diferença entre os valores de y
    return sqrt(pow(dx, 2) + pow(dy, 2));
}
