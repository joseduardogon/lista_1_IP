#include <stdio.h>

int main () {

    float terc, res;
    int prim, seg;

    printf("Informe um numero inteiro : ");
    scanf("%d", &prim);

    printf("Informe um numero inteiro : ");
    scanf("%d", &seg);

    printf("Informe um numero real : ");
    scanf("%f", &terc);

    res = (float) seg / 2;
    res *= prim * 2;

    printf("a) %.2f\n", res);

    res = (prim * 3) + terc;

    printf("b) %.2f\n", res);

    res = terc * terc * terc;

    printf("c) %.2f", res);

    return 0;
}