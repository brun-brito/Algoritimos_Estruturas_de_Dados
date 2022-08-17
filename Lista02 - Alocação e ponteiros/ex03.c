#include <stdio.h>
#include <stdlib.h>

int main (){

    double v[10] = {1,2,3,4,5,6,7,8,9,10};


    for (int i = 0; i <= 9; i++){
        printf("na posicao[%d] o conteudo do vetor eh: %.0lf\n", i, *(v+i) );
    }

return 0;
}