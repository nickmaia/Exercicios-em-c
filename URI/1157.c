#include <stdio.h>

int main()
{
    int A, i;
    scanf("%d", &A);
    for (i = 1; i <= A; i++)
    {
        if (A % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}