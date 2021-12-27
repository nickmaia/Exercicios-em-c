#include <stdio.h>

int main()
{
    int kmh, h;
    float L;
    scanf("%d", &h);
    scanf("%d", &kmh);
    L = (kmh * h) / 12.0;

    printf("%.3f", L);
    return 0;
}
