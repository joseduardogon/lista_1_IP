#include <stdio.h>

int main () {

    float tam;

    printf ("Valor em Metros : ");
    scanf("%f", &tam);

    tam *= 100;

    printf("Valor em Centimetros : %.2f", tam);

    return 0;
}