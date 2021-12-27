//soma, subtração, multiplicação e divisão dos números fornecidos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, c, bi, di, y, x, w, p;
    int resp;
    printf("digite os valores de a:");
    scanf("%f", &a);
    printf("digite os valores de c:");
    scanf("%f", &c);
    printf("digite os valores imaginarios bi:");
    scanf("%f", &bi);
    printf("digite os valores imaginarios di:");
    scanf("%f", &di);
    printf("Qual operacao voce deseja?\n");
    printf("1-soma\n 2-subtracao\n 3-multiplicacao\n 4-divisao \n Qualquer outro valor mantem o numero\n");
    printf("Resposta:");
    scanf("%d", &resp);
    switch (resp)
    {
    case 1:
        y = a + c;
        x = bi + di;
        w = y + x;
        break;
    case 2:
        y = a - c;
        x = bi - di;
        w = y + x;
        break;
    case 3:
        y = (a * c) - (bi * di);
        x = (a * di) + (bi * c);
        w = y + x;
        break;
    case 4:
        y = ((a * c) + (bi * di)) / ((c * c) + (di * di));
        x = ((bi * c) - (a * di)) / ((c * c) + (di * di));
        w = y + x;

    default:
        p = a + c + di + bi;
    }
    printf("\n soma dos valores inseridos= %f \n\n", p);
    return 0;
}