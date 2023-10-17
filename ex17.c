#include <stdio.h>

int main () {

    float x, y, litros;
    int res;

    printf("Area em metros quadrados a ser pintada : ");
    scanf("%f", &x);

    litros = x / 6;
    x = litros / 18;
    res = x;
    x -= res;
    if (x > 0){
        res++;
    }
    x = res * 80;
    printf("Necessarios %d Latas de Tinta de 18 litros, no valor de R$%.2f\n", res, x);

    x = litros / 3.6;
    res = x;
    x -= res;
    if (x > 0){
        res++;
    }
    x = res * 25;
    printf("Necessarios %d Latas de Tinta de 3.6 litros, no valor de R$%.2f\n", res, x);

    litros *= 1.1;
    x = litros / 18;
    res = x;
    y = res * 80;
    x -= res;
    printf("Necessarios %d Latas de Tinta de 18 litros ", res);

    litros = x * 18;
    x = litros / 3.6;
    res = x;
    x -= res;
    if (x > 0){
        res++;
    }
    y += res * 25;
    printf("e %d Latas de Tinta de 3.6 litros, no valor de R$%.2f", res, y);

    return 0;
}