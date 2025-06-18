#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    int j = 1;
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int k = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    printf("\n");

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    // Utilizando loops aninhados (for + while)
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");

    const int movimentos_baixo = 2;
    const int movimentos_esquerda = 1;

    for (int m = 1; m <= movimentos_baixo; m++) {
        printf("Baixo\n");
        int n = 0;
        while (n < 1 && m == movimentos_baixo) {  // Executa a esquerda só após os dois "Baixo"
            printf("Esquerda\n");
            n++;
        }
    }

    return 0;
}
