#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    int x;
    int y;
};

int calc_area(struct Ponto p1, struct Ponto p2){
    int res = 0;

    res = (p2.x - p1.x) * (p2.y - p1.y);

    if(res > 0){
      return res;
    } else{
        res = res * (-1);
    }
        return res;
}

int main(){

    int area;
    struct Ponto p1;
    struct Ponto p2;

    printf("Digite x do ponto 1: ");
    scanf("%d", &p1.x);

    printf("Digite y do ponto 1: ");
    scanf("%d", &p1.y);

    printf("\nDigite x do ponto 2: ");
    scanf("%d", &p2.x);

    printf("Digite y do ponto 2: ");
    scanf("%d", &p2.y);

    area = calc_area(p1, p2);

    printf("\nA area do retangulo definido por (%d, %d) e (%d, %d) eh %d.\n", p1.x, p1.y, p2.x, p2.y, area);

    return 0;
}