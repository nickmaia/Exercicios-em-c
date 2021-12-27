#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//N x (N-K) x (N-2K) x (N-3K) x ...,

int main()
{
    int N, i, soma = 1, total, a, m = 1;
    char K[100], j;

    scanf("%d", &a);

    while (m <= a)
    {
        scanf("%d%s", &N, &K[j]);
        for (i = 1; i <= strlen(K); i++)
        {
            if ((N - (i * strlen(K))) >= 1)
            {
                soma *= N - (i * strlen(K));
            }
        }
         total = N * soma;
        continue;
        printf("%d\n", total);
        m++;
    }
    return 0;
}