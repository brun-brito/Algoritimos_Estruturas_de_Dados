#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *v;
    int i;
    int tam, par = 0, impar = 0;

    printf("Quantos inteiros serão lidos: ");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));

    if (v == NULL)
    {
        printf("Erro ao alocar memoria \n");
        return -1;
    }

    for (i = 1; i <= tam; i++)
    {
        printf("%do inteiro: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 1; i <= tam; i++)
    {
        if (v[i] % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
    }

    printf("Sao pares: %d dos %d inteiros lidos.\n", par, tam);
    printf("Sao impares: %d dos %d inteiros lidos.", impar, tam);

    return 0;
}
