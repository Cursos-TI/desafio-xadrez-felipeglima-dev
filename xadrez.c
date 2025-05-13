#include <stdio.h>
#include<locale.h>

// Desafio de Xadrez - MateCheck -Tema 3 - Desafio Novato

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // --------- MOVIMENTO DA TORRE ---------
    // Move 5 casas para a direita, usando FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int movimento = 1; movimento <= 5; movimento++) {
        printf("Movendo para Direita\n");
    }

    // --------- MOVIMENTO DO BISPO ---------
    // Move 5 casas na diagonal (Cima + Direita), usando WHILE
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita):\n");
    int bispomovimentos = 0;
    while (bispomovimentos < 5) {
        printf("Movendo para Cima Direita\n");
        bispomovimentos++;
    }

    // --------- MOVIMENTO DA RAINHA ---------
    // Move 8 casas para a esquerda, usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int rainhamovimentos = 0;
    do {
        printf("Movendo para Esquerda\n");
        rainhamovimentos++;
    } while (rainhamovimentos < 8);

    return 0;
}
