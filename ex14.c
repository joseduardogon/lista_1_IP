#include <stdio.h>

int main () {

    float peso, excesso, multa;

    printf("Peso em quilo dos peixes : ");
    scanf("%f", &peso);

    if (peso > 50){
        excesso = peso - 50;
    }
    multa = excesso * 4;

    printf("Multa no Valor de R$%.2f pelos %.2fkg de excesso", multa, excesso);

    return 0;
}