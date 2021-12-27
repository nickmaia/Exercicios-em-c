#include <stdio.h>

int main()
{
    double matriz[12][12], soma = 0.0;
    char letra;
    int i, j, val = 1;
    scanf(" %c", &letra);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = val; j < 12; j++)
        {
            soma += matriz[i][j];
        }
        val++;
    }

    if (letra == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma = soma / 66.0;
        printf("%.1lf\n", soma);
    }
    return 0;
}