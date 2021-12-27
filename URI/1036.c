#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, delta, R1, R2, raiz;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (B * B) - 4 * A * C;

    raiz = sqrt(delta);
    R1 = (-B + raiz) / (2 * A);
    R2 = (-B - raiz) / (2 * A);

    if (delta < 0 || A == 0)
    {

        printf("Impossivel calcular\n");
    }
    else
    {

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}