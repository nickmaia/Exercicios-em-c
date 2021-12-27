#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, posicao, menor;

    scanf("%d", &N);
    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    for (i = 0; i < N; i++)
    {
        if (menor > vetor[i])
        {
            menor = vetor[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}