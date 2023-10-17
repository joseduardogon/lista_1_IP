#include <stdio.h>

int main () {

    float valor, hal;

    printf("Informe sua altura em metros : ");
    scanf("%f", &hal);

    valor = hal;
    valor *= 72.2;
    valor -= 58;

    printf("Peso ideal homem : %.2f\n", valor);

    valor = hal;
    valor *= 62.1;
    valor -= 44.7;

    printf("Peso ideal mulher : %.2f", valor);
    
    return 0;
}