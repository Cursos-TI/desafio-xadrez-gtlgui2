#include <stdio.h>

// Definição dos movimentos máximos para cada peça
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i;  // Contador usado nos loops

    // Movimentação do Bispo - 5 casas na diagonal superior direita
    // Usamos o loop "for" para repetir a movimentação
    printf("Movimentos do Bispo (Diagonal superior direita):\n");
    for(i = 1; i <= MOV_BISPO; i++) {
        // Como o bispo se move na diagonal, combinamos as direções "Cima" e "Direita"
        printf("Movimento %d: Cima e Direita\n", i);
    }
    printf("\n");

    // Movimentação da Torre - 5 casas para a direita
    // Usamos o loop "while" para mostrar uma alternativa de repetição
    printf("Movimentos da Torre (Para a direita):\n");
    i = 1;
    while(i <= MOV_TORRE) {
        printf("Movimento %d: Direita\n", i);
        i++;
    }
    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda
    // Usamos o loop "do-while" para demonstrar outro tipo de estrutura repetitiva
    printf("Movimentos da Rainha (Para a esquerda):\n");
    i = 1;
    do {
        printf("Movimento %d: Esquerda\n", i);
        i++;
    } while(i <= MOV_RAINHA);

    return 0;
}
