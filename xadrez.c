#include <stdio.h>

/*
    Desafio MateCheck – Nível Aventureiro - Moacyr Fiares Pereira Junior 
    Movimentação de Peças no Xadrez usando estruturas de repetição

    Peças:
    - Torre: move 5 casas para a direita (usar for)
    - Bispo: move 5 casas na diagonal superior direita (usar while)
    - Rainha: move 8 casas para a esquerda (usar do-while)
    - Cavalo: 2 casas para baixo + 1 para esquerda (FOR + WHILE aninhados)
    
*/

int main() {

    // 1) Variáveis constantes
    
    const int TORRE_PASSOS = 5;
    const int BISPO_PASSOS = 5;
    const int RAINHA_PASSOS = 8;

    // 2) Movimento da TORRE

    printf("*** Movimento da Torre ***\n");
    printf("Torre se moverá %d casas para a direita.\n\n", TORRE_PASSOS);

    // TORRE – usando FOR
    for (int i = 0; i < TORRE_PASSOS; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // 3) Movimento do BISPO

    printf("*** Movimento do Bispo ***\n");
    printf("Bispo se moverá %d casas na diagonal superior direita.\n\n", BISPO_PASSOS);

    // BISPO – usando WHILE
    int contadorBispo = 0;
    while (contadorBispo < BISPO_PASSOS) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // 4) Movimento da RAINHA

    printf("*** Movimento da Rainha ***\n");
    printf("Rainha se moverá %d casas para a esquerda.\n\n", RAINHA_PASSOS);

    // RAINHA – usando DO-WHILE
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < RAINHA_PASSOS);

    printf("\n");

    // 5) Movimento do CAVALO
    
    printf("*** Movimento do Cavalo ***\n");
    printf("Cavalo se moverá 2 casas para baixo e 1 para a esquerda.\n\n");

    // Usando FOR (externo) + WHILE (interno)
    for (int etapa = 0; etapa < 2; etapa++) {

        int passos;
        if (etapa == 0)
            passos = 2;  // Movimento vertical (2 para baixo)
        else
            passos = 1;  // Movimento horizontal (1 para a esquerda)

        int contador = 0;

        while (contador < passos) {

            if (etapa == 0)
                printf("Baixo\n");
            else
                printf("Esquerda\n");

            contador++;
        }
    }
    printf("\n*** Fim do desafio ***\n");

    return 0;
}