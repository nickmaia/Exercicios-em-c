#include <stdio.h>
#include <stdlib.h>

int main()
{
    int DIFERENCA, A, B, C, D;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}