#include <stdio.h>

int main () {

    float valor;

    printf("Informe sua altura em metros : ");
    scanf("%f", &valor);

    valor *= 72.2;
    valor -= 58;

    printf("Peso ideal : %.2f", valor);
    
    return 0;
}