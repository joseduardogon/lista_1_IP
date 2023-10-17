#include <stdio.h>

int main () {

    float valor, hrs, res;

    printf("Informe o valor da hora trabalhada : ");
    scanf("%f", &valor);

    printf("Horas trabalhadas no mes : ");
    scanf("%f", &hrs);

    valor = valor * hrs;

    printf("+ Salario Bruto : R$%.2f \n", valor);

    res = valor * 11;
    res /= 100;
    printf("- IR (11%) : R$%.2f \n", res);

    res = valor * 8;
    res /= 100;
    printf("- INSS (8%) : R$%.2f \n", res);

    res = valor * 5;
    res /= 100;
    printf("- Sindicato ( 5%) : R$%.2f \n", res);

    res = valor * 24;
    res /= 100;
    valor -= res;
    printf("= Salario Liquido : R$%.2f ", valor);

    return 0;
}