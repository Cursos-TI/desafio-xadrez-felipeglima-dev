#include <stdio.h>
#include<locale.h>

// Desafio de Xadrez - MateCheck


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    #include <stdio.h>

int main() {
    // --------- MOVIMENTO DA TORRE ---------
    // Move 5 casas para a direita, usando FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // --------- MOVIMENTO DO BISPO ---------
    // Move 5 casas na diagonal (Cima + Direita), usando WHILE
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita):\n");
    int bispoMovimentos = 0;
    while (bispoMovimentos < 5) {
        printf("Cima Direita\n");
        bispoMovimentos++;
    }

    // --------- MOVIMENTO DA RAINHA ---------
    // Move 8 casas para a esquerda, usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int rainhaMovimentos = 0;
    do {
        printf("Esquerda\n");
        rainhaMovimentos++;
    } while (rainhaMovimentos < 8);

    return 0;
}


    
    return 0;
}
