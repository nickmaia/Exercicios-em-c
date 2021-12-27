#include <stdio.h>
#include <stdlib.h>

int main()
{
        double matriz[12][12], valor, soma = 0.0;
        char letra;
        int i, j, p = 11;
        scanf("%s", &letra);
        for (i = 0; i < 12; i++)
        {
                for (j = 0; j < 12; j++)
                {
                        scanf("%lf", &valor);
                        matriz[i][j] = valor;
                        if (j + i < 11)
                        {
                                soma += matriz[i][j];
                        }
                }
        }

        if (letra == 'S')
        {
                printf("%.1lf\n", soma);
        }
        else
        {
                soma = soma / 66;
                printf("%.1lf\n", soma);
        }
        return 0;
}
