#include <stdio.h>
#include <stdlib.h>

void calculo(int *x, int *y, int CONSTANTE){
    int x1, y1;   
    //y1 = *y * CONSTANTE;
    //x1 = *x * CONSTANTE;
    printf("Resultado: (%d,%d) * %d = (%d,%d)\n", *x, *y, CONSTANTE, *x * CONSTANTE, *y * CONSTANTE);
}

int main(){

    const int CONSTANTE;
    int x, y;

    printf("Digite o ponto -> (x,y): ");
    scanf("%d,%d", &x, &y);

    printf("Digite a constante: ");
    scanf("%d", &CONSTANTE);

    calculo(&x, &y, CONSTANTE);

  //  printf("%d", x);
    
    return 0;
}