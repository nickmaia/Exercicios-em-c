#include <stdio.h>

int main()
{
    double matriz[12][12], valor, soma = 0;
    char letra;
    int i, j, val1 = 0, val2 = 7;

    scanf(" %c", &letra);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &valor);
            matriz[i][j] = valor;
        }
    }
    for (i = 0; i < 11; i++)
    {
        if (i <= 5)
        {
            for (j = 12-i; j <12; j++)
            {
                soma += matriz[i][j];
            }
        }
        else
        {

            for (j = val2; j < 12; j++)
            {
                soma += matriz[i][j];
            }
            val2++;
        }
    }

    if (letra == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma /= 30.0;
        printf("%.1lf\n", soma);
    }
    return 0;
}
