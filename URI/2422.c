#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
    int a, i, b[MAX], c, j;
    scanf("%d\n", &a);

    for (i = 0; i < a; i++)
    {
         scanf("%d\n", &b[i]);

    }
    scanf("%d\n", &c);
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (b[i] + b[j] == c)
            {
                printf("%d %d\n", b[i], b[j]);
            }
        }
    }

        return 0;
}
    