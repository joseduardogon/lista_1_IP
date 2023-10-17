#include <stdio.h>
#include <math.h>
#define pi 3.1415;

int main () {

    float tam;

    printf("Informe o valor do raio : ");
    scanf("%f", &tam);

    tam *= tam;
    tam *= pi;

    printf("Area do Circulo : %.2f", tam);

    return 0;
}