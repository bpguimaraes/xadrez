#include <stdio.h>

// Função recursiva para a Torre (movimento para a Direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para a Rainha (movimento para a Esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva com loops aninhados para o Bispo (diagonal Cima, Direita)
void moverBispo(int movimentosVerticais) {
    if (movimentosVerticais <= 0) return;

    // Loop interno simula o movimento horizontal (para Direita)
    for (int h = 0; h < 1; h++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva para o próximo movimento diagonal
    moverBispo(movimentosVerticais - 1);
}

// Movimento complexo do Cavalo (2 para cima, 1 para direita) com loops aninhados
void moverCavalo() {
    const int movimentosParaCima = 2;
    const int movimentosParaDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo para o movimento vertical
    for (int i = 0; i < movimentosParaCima; i++) {
        if (i == 1) continue; // Simulando alguma lógica condicional
        printf("Cima\n");

        // Loop interno para o movimento horizontal
        for (int j = 0; j < movimentosParaDireita; j++) {
            if (j > 0) break; // Controla o fluxo com break
            printf("Direita\n");
        }
    }

    printf("\n");
}

int main() {
    // ========================
    // Movimento da TORRE
    // ========================
    const int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // ========================
    // Movimento do BISPO
    // ========================
    const int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // ========================
    // Movimento da RAINHA
    // ========================
    const int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ========================
    // Movimento do CAVALO
    // ========================
    moverCavalo();

    return 0;
}
