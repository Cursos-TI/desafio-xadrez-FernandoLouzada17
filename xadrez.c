#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definindo o número de casas para o movimento de cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

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
    
    return 0;
}