#include <stdio.h>
#include <math.h>

int main () {

    float tam;

    printf("Informe o lado do quadrado : ");
    scanf("%f", &tam);

    tam *= tam;
    printf("Area do quadrado : %.2f\n", tam);

    tam *= 2;
    printf("Dobro da Area ; %.2f", tam);

    return 0;
}