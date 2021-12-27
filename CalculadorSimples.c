#include <stdio.h>
#include <stdlib.h>

float main()
{
    float a, b, SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO;
    printf("Insira o valor de A:");
    scanf("%f", &a);
    printf("Insira o valor de B:");
    scanf("%f", &b);
    SOMA = a + b;
    SUBTRACAO = a - b;
    MULTIPLICACAO = a * b;
    DIVISAO = a / b;
    printf("O resultado da soma e: %.2f \n", SOMA);
    printf("O resultado da subtracao e: %.2f \n", SUBTRACAO);
    printf("O resultado da multiplicacao e: %.2f \n", MULTIPLICACAO);
    printf("O resultado da divisao e: %.2f \n", DIVISAO);

    return 0;
}