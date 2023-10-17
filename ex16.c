#include <stdio.h>

int main () {

    float area;
    int res;

    printf("Area em metros quadrados a ser pintada : ");
    scanf("%f", &area);

    area /= 3;
    area /= 18;
    res = area;
    area -= res;
    if (area > 0){
        res++;
    }
    area = res * 80;
    printf("Necessarios %d Latas de Tinta, no valor de R$%.2f", res, area);

    return 0;
}