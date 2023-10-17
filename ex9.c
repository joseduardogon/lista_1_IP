#include <stdio.h>

int main () {

    float graus;

    printf("Informe a Tempertura em Fahrenheit : ");
    scanf("%f", &graus);

    graus -= 32;
    graus /= 1.8;

    printf("Temeperatura em Celsius : %.0f", graus);

    return 0;
}