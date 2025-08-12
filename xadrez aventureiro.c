#include <stdio.h>

int main() {
    int movimento_do_cavalo;
    int sla = 0;  // Controle do loop do-while

    printf("\nMovimento do Cavalo:\n");

    do {
        // Exibição do menu
        printf("\nopções:\n");
        printf("1 - duas para frente e uma para o lado esquerdo\n");
        printf("2 - duas para frente e uma para o lado direito\n");
        printf("3 - duas para trás e uma para o lado esquerdo\n");
        printf("4 - duas para trás e uma para o lado direito\n");
        printf("5 - duas para o lado esquerdo e uma para frente\n");
        printf("6 - duas para o lado direito e uma para frente\n");
        printf("7 - duas para o lado esquerdo e uma para trás\n");
        printf("8 - duas para o lado direito e uma para trás\n");
        printf("Digite a opção desejada (1–8): ");
        scanf("%d", &movimento_do_cavalo);

        if (movimento_do_cavalo >= 1 && movimento_do_cavalo <= 8) {
            // Entrada válida — executa o movimento e sai do loop
            int i = 0;
            switch (movimento_do_cavalo) {
                case 1: // Duas frente, uma esquerda
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Frente\n");
                        }
                        printf("Esquerda\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 2: // Duas frente, uma direita
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Frente\n");
                        }
                        printf("Direita\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 3: // Duas trás, uma esquerda
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Trás\n");
                        }
                        printf("Esquerda\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 4: // Duas trás, uma direita
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Trás\n");
                        }
                        printf("Direita\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 5: // Duas esquerda, uma frente
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Esquerda\n");
                        }
                        printf("Frente\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 6: // Duas direita, uma frente
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Direita\n");
                        }
                        printf("Frente\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 7: // Duas esquerda, uma trás
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Esquerda\n");
                        }
                        printf("Trás\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
                case 8: // Duas direita, uma trás
                    while (i < 1) {
                        for (int j = 0; j < 2; j++) {
                            printf("Direita\n");
                        }
                        printf("Trás\n");
                        i++;
                            printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
                    }
                    break;
            }
            sla = 1; // Movimento executado, encerra o loop do-while
        } else {
            // Entrada inválida — repete o menu
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (sla != 1);

    return 0;
}
