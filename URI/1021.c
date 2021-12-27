#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double valor, resto;
    int cem, cinquenta, vinte, dez, cinco, dois, um, cinq, vint, moe10, moe5, moe;
    scanf("%lf", &valor);
    resto = valor;
    cem = resto / 100;
    resto = resto - (cem * 100);
    cinquenta = resto / 50;
    resto = resto - (cinquenta * 50);
    vinte = resto / 20;
    resto = resto - (vinte * 20);
    dez = resto / 10;
    resto = resto - (dez * 10);
    cinco = resto / 5;
    resto = resto - (cinco * 5);
    dois = resto / 2;
    resto = resto - (dois * 2);
    um = resto / 1;
    resto = resto - (um * 1);
    cinq = resto / 0.5;
    resto = resto - (cinq * 0.5);
    vint = resto / 0.25;
    resto = resto - (vint * 0.25);
    moe10 = resto / 0.1;
    resto = resto - (moe10 * 0.1);
    moe5 = resto / 0.05;
    resto = resto - (moe5 * 0.05);
    moe = abs(resto / 0.01);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinq);
    printf("%d moeda(s) de R$ 0.25\n", vint);
    printf("%d moeda(s) de R$ 0.10\n", moe10);
    printf("%d moeda(s) de R$ 0.05\n", moe5);
    printf("%d moeda(s) de R$ 0.01\n", moe);
}