#include <stdio.h>

/*
    ===================
    FUNÇÕES RECURSIVAS 
    ===================
*/

/*
    Movimento recursivo da TORRE: 5 casas para a direita.
    A cada chamada, imprime "Direita" até atingir o total desejado.
*/
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base: quando não há mais casas, para a recursão
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva diminuindo uma casa a cada passo
}

/*
    Movimento recursivo da RAINHA: 8 casas para a esquerda.
    Simples e direto, igual ao da Torre, só muda a direção.
*/
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

/*
    Movimento do BISPO (Recursivo + Loops aninhados):
    Ele se move 5 casas na diagonal (Cima Direita).
    Recursivamente tratamos as casas, mas dentro de cada passo, mostramos que ele sobe e vai à direita.
*/
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Aqui usamos loops aninhados só para mostrar didaticamente os dois sentidos combinados
    for (int v = 0; v < 1; v++) { // Vertical (Cima)
        for (int h = 0; h < 1; h++) { // Horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casasRestantes - 1); // Vai pra próxima casa na diagonal
}

/*
    ====================
    MOVIMENTO DO CAVALO
    ====================
    - Agora o Cavalo vai se mover em "L":
      duas casas para cima e uma para a direita.
    - Utilizaremos loops aninhados com múltiplas variáveis
      e uso de 'break' e 'continue' para mostrar domínio do controle de fluxo.
*/
void moverCavalo() {
    printf("Movimento do Cavalo (em L: 2 para Cima, 1 para Direita):\n");

    const int casasCima = 2;
    const int casasDireita = 1;

    // Loop externo simula o movimento vertical
    for (int cima = 1; cima <= casasCima; cima++) {
        if (cima == 2) {
            // Quando chegar ao segundo passo vertical, vamos para a direita
            // Mas antes imprimimos a última subida
            printf("Cima\n");

            // Loop interno simula o movimento horizontal (direita)
            for (int direita = 1; direita <= casasDireita; direita++) {
                if (direita == 1) {
                    printf("Direita\n");
                    break; // Já que é só uma casa, podemos sair aqui
                }
            }

            break; // Após fazer o movimento completo de "L", saímos do loop externo também
        }

        // Movimento para cima nas duas primeiras casas
        printf("Cima\n");
        continue; // Vai para o próximo ciclo do for
    }
}

int main() {
    /*
        PROGRAMA PRINCIPAL
        Aqui chamamos cada função com suas respectivas lógicas, 
        separando visualmente com linhas em branco.
    */

    // TORRE
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);
    printf("\n");

    // BISPO
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // RAINHA
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);
    printf("\n");

    // CAVALO
    moverCavalo();

    return 0;
}
