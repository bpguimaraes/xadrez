#include <stdio.h>

int main() {
    // Movimento do Cavalo: 2 para baixo, 1 para a esquerda
    const int movimentosParaBaixo = 2;
    const int movimentosParaEsquerda = 1;

    // Imprimindo uma linha em branco para separar dos outros movimentos
    printf("\n");

    // Primeiro loop (for): movimenta para baixo
    for (int i = 0; i < movimentosParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop (while): movimenta para a esquerda
    int j = 0;
    while (j < movimentosParaEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
