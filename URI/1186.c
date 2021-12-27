#include <stdio.h>

int main()
{
    double matriz[12][12], valor, soma = 0;
    char letra;
    int i, j;
    scanf("%s", &letra);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &valor);
            matriz[i][j] = valor;
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 12 - i; j < 12; j++)
        {
            soma += matriz[i][j];
        }
    }
    if (letra == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma /= 66.0;
        printf("%.1lf\n", soma);
    }
    return 0;
}
