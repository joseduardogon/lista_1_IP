#include <stdio.h>

int main () {

    float graus;

    printf("Informe a Tempertura em Celsius : ");
    scanf("%f", &graus);

    graus *= 1.8;
    graus += 32;

    printf("Temeperatura em Fahrenheit : %.0f", graus);

    return 0;
}