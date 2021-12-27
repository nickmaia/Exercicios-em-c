#include <stdio.h>

int main()
{
    int valor, i, final;
    scanf("%d", &valor);

    if (valor % 2 == 0)
    {
        valor++;
        printf("%d\n", valor);
        for (i = 0; i < 5; i++)
        {
            printf("%d\n", valor += 2);
        }
    }
    else
    {
        printf("%d\n", valor);
        for (i = 0; i < 5; i++)
        {
            printf("%d\n", valor += 2);
        }
    }

    return 0;
}