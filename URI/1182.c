#include <stdio.h>

int main()
{
    double soma = 0.0, media, MATRIZ[12][12];
    char resp;
    int linha, coluna, b;

    scanf("%d", &b);
    scanf(" %c", &resp);

    for (linha = 0; linha < 12; linha++)
    {
        for (coluna = 0; coluna < 12; coluna++)
        {
            scanf("%lf", &MATRIZ[linha][coluna]);
            if (coluna == b)
            {
                soma += MATRIZ[linha][coluna];
            }
        }
    }
    media = soma / 12.0;
    if (resp == 'S')
    {
        printf("%.1lf\n", soma);
    }

    else
    {
        printf("%.1lf\n", media);
    }

    return 0;
}