#include <stdio.h>

int main() {
    // =======================
    // Movimento da TORRE
    // =======================
    // A Torre se move 5 casas para a direita
    const int casasTorre = 5;

    printf("Movimento da Torre:\n");

    // Utilizando o loop FOR para a Torre
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // =======================
    // Movimento do BISPO
    // =======================
    // O Bispo se move 5 casas na diagonal "Cima, Direita"
    const int casasBispo = 5;

    printf("Movimento do Bispo:\n");

    // Utilizando o loop WHILE para o Bispo
    int i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // =======================
    // Movimento da RAINHA
    // =======================
    // A Rainha se move 8 casas para a esquerda
    const int casasRainha = 8;

    printf("Movimento da Rainha:\n");

    // Utilizando o loop DO-WHILE para a Rainha
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}