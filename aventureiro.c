#include <stdio.h>

int main() {

    int i, j;

    // TORRE 
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // RAINHA 
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\n");

    // CAVALO 
    printf("Movimento do Cavalo:\n");

    // Duas casas para baixo (FOR)
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // Uma casa para a esquerda (WHILE)
    j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
