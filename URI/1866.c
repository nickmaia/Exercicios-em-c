#include <stdio.h>

int main()
{
    int A, B, i, j, k = 1;
    scanf("%d", &A);
    for (i = 0; i < A; i++)
    {
        scanf("%d", &B);
        if (B % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }


return 0;
}