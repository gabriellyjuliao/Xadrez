#include <stdio.h>

int main() {

    int casas;

    // TORRE 
    // Torre se move 5 casas para a direita (FOR)
    printf("Movimento da Torre:\n");
    for (casas = 1; casas <= 5; casas++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO 
    // Bispo se move 5 casas na diagonal (WHILE)
    printf("Movimento do Bispo:\n");
    casas = 1;
    while (casas <= 5) {
        printf("Cima Direita\n");
        casas++;
    }

    printf("\n");

    // RAINHA 
    // Rainha se move 8 casas para a esquerda (DO-WHILE)
    printf("Movimento da Rainha:\n");
    casas = 1;
    do {
        printf("Esquerda\n");
        casas++;
    } while (casas <= 8);

    return 0;
}
