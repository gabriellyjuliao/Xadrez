#include <stdio.h>

void torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

void bispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 1; i <= horizontal; i++) {
        printf("Cima Direita\n");
    }

    bispo(vertical - 1, horizontal - 1);
}

int main() {

    int i, j;

    // TORRE 
    printf("Movimento da Torre:\n");
    torre(5);

    printf("\n");

    // BISPO 
    printf("Movimento do Bispo:\n");
    bispo(1, 5);

    printf("\n");

    // RAINHA 
    printf("Movimento da Rainha:\n");
    rainha(8);

    printf("\n");

    // CAVALO
    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= 2; i++) {
        if (i == 2) continue;
        printf("Cima\n");
    }

    j = 1;
    while (j <= 1) {
        printf("Direita\n");
        break;
    }

    return 0;
}
