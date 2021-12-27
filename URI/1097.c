#include <stdio.h>

int main()
{
    int A, B = 7, i;
    for (A = 1; A <= 9; A++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("I=%d J=%d\n", A, B--);
        }
        A += 1;
        B += 5;
    }
    return 0;
}