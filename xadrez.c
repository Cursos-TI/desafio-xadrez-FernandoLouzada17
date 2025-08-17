#include <stdio.h>

// --- Protótipos das Funções ---
// Funções recursivas para Torre, Bispo e Rainha
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);

// Função com loops complexos para o Cavalo
void moverCavaloComplexo();


int main() {
    // Definição do número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // --- Simulação da Torre com Recursividade ---
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // --- Simulação do Bispo com Recursividade e Loops Aninhados ---
    printf("--- Movimento do Bispo (Recursivo e Aninhado) ---\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");
    
    // --- Simulação da Rainha com Recursividade ---
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // --- Simulação do Cavalo com Loops Complexos ---
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    moverCavaloComplexo();
    printf("\n");

    return 0;
}

/**
 * @brief Simula o movimento da Torre para a direita usando recursividade.
 * @param casas O número de casas restantes para mover.
 */
void moverTorreRecursivo(int casas) {
    // Caso base: se não há mais casas para mover, a função para.
    if (casas <= 0) {
        return;
    }
    
    // Ação: imprime o movimento atual.
    printf("Direita\n");
    
    // Chamada recursiva: chama a si mesma com uma casa a menos.
    moverTorreRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento do Bispo na diagonal usando recursividade e loops aninhados.
 * @param casas O número de casas restantes para mover.
 */
void moverBispoRecursivo(int casas) {
    // Caso base: para a recursão quando não há mais movimentos.
    if (casas <= 0) {
        return;
    }

    // Loops aninhados para representar um único passo na diagonal.
    // O loop externo representa o movimento vertical (1 casa).
    for (int v = 0; v < 1; v++) {
        // O loop interno representa o movimento horizontal (1 casa).
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }

    // Chamada recursiva para o próximo passo da diagonal.
    moverBispoRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento da Rainha para a esquerda usando recursividade.
 * @param casas O número de casas restantes para mover.
 */
void moverRainhaRecursivo(int casas) {
    // Caso base: para a recursão.
    if (casas <= 0) {
        return;
    }
    
    // Ação: imprime o movimento.
    printf("Esquerda\n");
    
    // Chamada recursiva: continua o movimento.
    moverRainhaRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento em "L" do Cavalo (2 para cima, 1 para a direita)
 * usando loops aninhados com controle de fluxo (continue/break).
 */
void moverCavaloComplexo() {
    const int passosVerticais = 2;
    const int passosHorizontais = 1;
    const int totalPassos = passosVerticais + passosHorizontais;

    // O loop externo representa um único movimento completo em "L".
    for (int movimento_L = 0; movimento_L < 1; movimento_L++) {
        // O loop interno itera através de cada passo individual do movimento.
        for (int passo_atual = 1; passo_atual <= totalPassos; passo_atual++) {
            
            // Condição para o movimento vertical
            if (passo_atual <= passosVerticais) {
                printf("Cima\n");
                // 'continue' avança para a próxima iteração do loop interno,
                // pulando o código abaixo.
                continue;
            }
            
            // Este código só é alcançado após os passos verticais,
            // graças ao 'continue' acima.
            printf("Direita\n");
            
            // 'break' encerra o loop interno prematuramente.
            // Aqui, ele garante que o loop pare exatamente após o último passo.
            if (passo_atual == totalPassos) {
                break;
            }
        }
    }
}