#include <stdio.h>

/*
    Desafio MateCheck – Nível Mestre
    Autor: Moacyr Fiares Pereira Junior

    Peças:
    - Torre: recursiva – move 5 casas para Direita
    - Bispo: recursiva + loops aninhados – 5 casas na diagonal superior direita
    - Rainha: recursiva – move 8 casas para Esquerda
    - Cavalo: loops complexos aninhados – 2 casas para cima + 1 para direita
*/


//  ***FUNÇÕES RECURSIVAS

// TORRE: movimento recursivo
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// BISPO: recursivo, mas usando loops aninhados
void moverBispo(int casas) {
    if (casas > 0) {

        // Loop mais externo -- movimento vertical (Cima)
        for (int v = 0; v < 1; v++) {

            // Loop interno -- movimento horizontal (Direita)
            for (int h = 0; h < 1; h++) {
                printf("Cima Direita\n");
            }
        }

        moverBispo(casas - 1);  // Chamada recursiva
    }
}

// RAINHA: movimento recursivo
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}


// MOVIMENTO COMPLEXO DO CAVALO
// 2 casas para CIMA + 1 para DIREITA
// Usar loops aninhados + múltiplas variáveis + continue/break

void moverCavalo() {

    int movimentosTotais = 3;  // 2 para cima + 1 direita
    int passos = 0;

    for (int i = 0, j = 2; i < movimentosTotais; i++, j--) {

        // j começa em 2 → representa "quantos passos faltam para o L"
        // Apenas para mostrar complexidade de variáveis

        if (i < 2) { // As duas primeiras iterações são "Cima"
            printf("Cima\n");

            if (j == 1)
                continue;  // apenas exibindo uso obrigatório do continue

        } else { // Último passo
            printf("Direita\n");
            break; // demonstrar uso de break
        }

        passos++;
    }
}



//  ***MAIN

int main() {

    // 1) Constantes
    int TORRE_PASSOS = 5;
    int BISPO_PASSOS = 5;
    int RAINHA_PASSOS = 8;

   
    // TORRE – RECUSIVIDADE
  
    printf("*** Movimento da Torre (Recursivo) ***\n");
    moverTorre(TORRE_PASSOS);
    printf("\n");

    // BISPO – REC + LOOPS ANINHADOS

    printf("*** Movimento do Bispo (Recursivo + Loops Aninhados) ***\n");
    moverBispo(BISPO_PASSOS);
    printf("\n");

    // RAINHA – RECUSIVIDADE

    printf("*** Movimento da Rainha (Recursivo) ***\n");
    moverRainha(RAINHA_PASSOS);
    printf("\n");

    // CAVALO – LOOPS COMPLEXOS

    printf("*** Movimento do Cavalo (Loops Complexos) ***\n");
    moverCavalo();
    printf("\n");

    printf("*** Fim do desafio nível Mestre ***\n");

    return 0;
}