#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct individuo {
    int codigo_genetico[10]; // valores binarios aleatorios
    float aptidao_abs;// pontencial de cada individuo (0.0 <= aptidao <= 10.0)
    float aptidao_relativa; // deve ser calculada em tempo de execução...
};

struct Populacao {
    struct individuo *pop; // um vetor de N individuos
    int tamanho; // tamanho N da população (N = 100)
};

typedef struct Populacao populacao;

int main(){

    populacao p; //cria uma variavel dentro de populacao (typedef)
    
    printf("Quantos individuos voce quer alocar: ");
    scanf("%d", &p.tamanho);
    
    p.pop = (struct individuo*)malloc(p.tamanho * sizeof(struct individuo));
    
    if (p.pop == NULL)
    {
        printf("Erro ao alocar memoria\n");
        return -1;
    }

    for (int i = 0; i < p.tamanho; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", p.pop[i].codigo_genetico[j] = ((rand() % 2) == 0) ? 1:0);
        }
        printf("\n");
    }

    



//sorteio = ((double) rand()) / ((double) RAND_MAX);

// par_001 = (ind-i, ind-j)



    return 0;
}