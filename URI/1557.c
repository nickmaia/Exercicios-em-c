#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main()
{
    int i, j, m, n, v[MAX][MAX], elemento, t, contaDigitos = 0;
    do
    {

        scanf("%d", &m);
        if(m==0){return 0;}
        elemento = 1;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                v[i][j] = elemento;
                elemento *= 2;
            }
            elemento = (v[i][0]) * 2;
        }
        //Determina o maior numero da matriz que é o ultimo numero encontrado
        t = (v[m - 1][m - 1]);
        do
        {
            t % 10;
            t = t / 10;
            contaDigitos = contaDigitos + 1;
        } while (t > 0);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    printf("%*d", contaDigitos, v[i][j]);
                }
                else
                {
                    printf(" %*d", contaDigitos, v[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    } while (m != 0);

return 0;
}