#include <stdio.h>

int main () {

    float nota, media = 0;

    for (int i = 1; i <= 4; i++){
        printf("Informe a %d nota :", i);
        scanf("%f", &nota);
        media += (nota*i);
    }
    media /= 10;
    printf("media final : %.2f", media);

    return 0;
}