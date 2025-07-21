#include <stdio.h>

// Número de casas que cada peça deve mover
const int NUM_CASAS_TORRE = 3;
const int NUM_CASAS_BISPO = 2;
const int NUM_CASAS_RAINHA = 2;

// -------------------- TORRE (Recursivo) --------------------
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// -------------------- BISPO (Recursivo + Loops Aninhados) --------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {  // Apenas nas diagonais
                printf("Diagonal Inferior Esquerda\n");
            }
        }
    }
}

// -------------------- RAINHA (Recursivo) --------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainha(casas - 1);
    printf("Direita\n");
    moverRainha(casas - 1);
}

// -------------------- CAVALO (Loops complexos) --------------------
void moverCavalo() {
    const int maxLinha = 8;
    const int maxColuna = 8;
    printf("Movimento do Cavalo (2 para cima e 1 para a direita):\n");

    for (int linha = 7; linha >= 0; linha--) {
        for (int coluna = 0; coluna < maxColuna; coluna++) {
            // Movimento "L": 2 para cima, 1 para direita
            if (linha - 2 >= 0 && coluna + 1 < maxColuna) {
                if ((linha + coluna) % 2 == 0) continue;  // exemplo de condição adicional
                printf("Cavalo: 2 acima, 1 direita -> nova posição: (%d, %d)\n", linha - 2, coluna + 1);
                break; // demonstra controle de fluxo
            }
        }
    }
}

// -------------------- MAIN --------------------
int main() {
    printf("Movimentos da TORRE:\n");
    moverTorreCima(NUM_CASAS_TORRE);
    moverTorreDireita(NUM_CASAS_TORRE);
    printf("\n");

    printf("Movimentos do BISPO (Recursivo):\n");
    moverBispoRecursivo(NUM_CASAS_BISPO);
    printf("\n");

    printf("Movimentos do BISPO (Loops Aninhados):\n");
    moverBispoComLoops(NUM_CASAS_BISPO);
    printf("\n");

    printf("Movimentos da RAINHA:\n");
    moverRainha(NUM_CASAS_RAINHA);
    printf("\n");

    moverCavalo();
    printf("\n");

    return 0;
}
