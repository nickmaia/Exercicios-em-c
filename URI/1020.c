#include <stdio.h>

int main()
{
    int dias, DIAS, MESES, ANOS;
    scanf("%d", &dias);

    ANOS = dias / 365;
    MESES = (dias - (365 * ANOS)) / 30;
    DIAS = dias - (ANOS * 365) - (MESES * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ANOS, MESES, DIAS);

    return 0;
}
