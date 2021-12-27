#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Area, Pi, Raio;
    Pi = 3.14159;
    printf(" Insira o valor do raio:");
    scanf("%f", &Raio);
    Area = Pi * (Raio * Raio);
    printf("O valor da Area e:%.2f \n", Area);
    return 0;
}