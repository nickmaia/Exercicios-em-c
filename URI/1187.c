#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matriz[12][12], valor, soma = 0.0;
    char letra;
    int i, j,val1=1,val2=10;
    scanf(" %c", &letra);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &valor);
            matriz[i][j] = valor;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = val1; j <= val2; j++)
        {
            
            
            soma += matriz[i][j];
            
        }
        val1++;
        val2--;
    }

    if (letra == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma = soma / 30.0;
        printf("%.1lf\n", soma);
    }
    return 0;
}
