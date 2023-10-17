#include <stdio.h>

int main () {

    float nota, media = 0;

    for (int i = 0; i < 4; i++){
        printf("Informe a %d nota :", i+1);
        scanf("%f", &nota);
        media += nota;
    }
    media /= 4;
    printf("media final : %.2f", media);

    return 0;
}