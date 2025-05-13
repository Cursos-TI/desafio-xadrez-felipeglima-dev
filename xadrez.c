#include <stdio.h>
#include<locale.h>

// Desafio de Xadrez - MateCheck -Tema 3 - Desafio Aventureiro

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // --------- MOVIMENTO DA TORRE ---------
    // Move 5 casas para a direita, usando FOR

    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int torremovimento = 1; torremovimento <= 5; torremovimento++) {
        printf("Movendo Torre para Direita.\n");
    }

    // --------- MOVIMENTO DO BISPO ---------
    // Move 5 casas na diagonal (Cima + Direita), usando WHILE

    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita):\n");
    int bispomovimento = 0;
    while (bispomovimento < 5) {
        printf("Movendo Bispo para cima/direita.\n");
        bispomovimento++;
    }

    // --------- MOVIMENTO DA RAINHA ---------
    // Move 8 casas para a esquerda, usando DO-WHILE

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int rainhamovimento = 0;
    do {
        printf("Movendo Rainha para Esquerda.\n");
        rainhamovimento++;
    } while (rainhamovimento < 8);


    // --------- MOVIMENTO DO CAVALO ---------
    // Move 2 casas para baixo, 1 casa para esquerda (Movimento em L) usando LOOP ANINHADO FOR:

    printf("\nMovimento do Cavalo (2 casas para baixo, 1 casa para esquerda):\n");
    for(int cavalomovimento1 = 1; cavalomovimento1 <= 1; cavalomovimento1++){
        for(int cavalomovimento2 = 1; cavalomovimento2 <= 2; cavalomovimento2++){
            printf("Movendo Cavalo para baixo. \n");
        }
        printf("Movendo Cavalo para esquerda.\n");
        printf("----------------------------\n");
   }

    // Move 2 casas para baixo, 1 casa para esquerda (Movimento em L) usando LOOP ANINHADO DO-WHILE:
    
    printf("\nMovimento do Cavalo (2 casas para baixo, 1 casa para esquerda):\n");
    int cavalomovimento1 = 1;
    do {
        int cavalomovimento2 = 1;
            do {
                printf("Movendo Cavalo para baixo.\n");
                cavalomovimento2++;
                    } while (cavalomovimento2 <= 2);
                        printf("Movendo Cavalo para esquerda.\n");
                        cavalomovimento1++;
        } while (cavalomovimento1 <= 1);

return 0;
}

