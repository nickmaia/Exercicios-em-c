#include <stdio.h>

int main()
{
    int HORAS, MINUTOS, SEGUNDOS, Segundos;
    scanf("%d", &Segundos);

    HORAS = Segundos / 3600;
    MINUTOS = (Segundos - (3600 * HORAS)) / 60;
    SEGUNDOS = Segundos - (HORAS * 3600) - (MINUTOS * 60);

    printf("%d:%d:%d", HORAS, MINUTOS, SEGUNDOS);

    return 0;
}
