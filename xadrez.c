#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definindo o número de casas para o movimento de cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloVertical = 2;
    const int casasCavaloHorizontal = 1;

    // --- Simulação do Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre ---\n");
    // A Torre se move 5 casas para a direita.
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para melhor formatação

    // --- Simulação do Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = casasRainha;
    // A Rainha se move 8 casas para a esquerda.
    if (contadorRainha > 0) {
        do {
            printf("Esquerda\n");
            contadorRainha--;
        } while (contadorRainha > 0);
    }
    printf("\n");

    // --- Simulação do Movimento do Cavalo (usando for aninhado com while) ---
    printf("--- Movimento do Cavalo ---\n");
    // O cavalo se move duas casas para baixo e uma para a esquerda.
    // Loop externo 'for' para controlar o movimento vertical
    for (int i = 0; i < casasCavaloVertical; i++) {
        printf("Baixo\n");
    }

    // Loop 'while' para controlar o movimento horizontal
    int contadorHorizontal = 0;
    while (contadorHorizontal < casasCavaloHorizontal) {
        printf("Esquerda\n");
        contadorHorizontal++;
    }
    printf("\n");

    return 0;
}