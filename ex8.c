#include <stdio.h>

int main () {

    float valor, hrs;

    printf("Informe o valor da hora trabalhada : ");
    scanf("%f", &valor);

    printf("Horas trabalhadas no mes : ");
    scanf("%f", &hrs);

    valor = valor * hrs;

    printf("Salario : %.2f", valor);

    return 0;
}