#include <stdio.h>

int main () {

    int num1, num2;

    printf("Informe o primeiro numero : ");
    scanf("%d", &num1);

    printf("Informe o segundo numero : ");
    scanf("%d", &num2);

    num1 = num1 + num2;

    printf("A soma dos numeros e : %d", num1);    

    return 0;
}