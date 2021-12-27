#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float b, a;
    printf("\n B = ");
    scanf("%f", &b);
    a = b > 0 ? sqrt(b) : 0;
    printf("\n O valor de A eh: %.4f", a);
}