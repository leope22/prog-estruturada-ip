/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Sudoku
 * ================================================================== */

/* O Sudoku, um jogo criado em 1979 pelo arquiteto e designer de Puzzles Howard 
Garns, estimula o raciocínio lógico. Normalmente, o Sudoku é composto por uma grade 
9×9 constituída de sub-grades de 3×3, denominadas de “regiões”. Algumas células já
contêm números, chamados de “dados”. A finalidade do jogo é preencher as células
vazias de forma que cada coluna, linha e região contenham os números de 1 a 9
apenas uma vez. Agora que você está se tornando um programador experiente, foi-lhe
dada a tarefa de verificar se a solução de determinado jogo é válida ou não.

ENTRADA
Cada caso de teste é composto por 9 linhas, cada qual com 9 números separados por
um espaço e terminadas por uma quebra de linha, que representam um jogo de Sudoku.

SAÍDA
Seu programa deve imprimir uma única linha de saída, contendo a mensagem
“solucao correta!” caso o jogo esteja válido de acordo com as condições do
Sudoku, senão, deve imprimir “solucao incorreta!”. */

#include <stdio.h>

#define ERRADO  "solucao incorreta!\n"
#define CORRETO "solucao correta!\n"

int main() {
    int jogo[9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0}};

    int somablocos[3][3] = {{0, 0, 0},
                            {0, 0, 0},
                            {0, 0, 0}};

    int somalinha[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int somacoluna[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int aux1 = 0, aux2 = 0, aux3 = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%i", &jogo[i][j]);
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0, aux0 = 0; j < 9; j++) {
            aux0 = jogo[i][j];
            somalinha[i] += aux0;
            somacoluna[j] += aux0;
            somablocos[i / 3][j / 3] += aux0;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (somalinha[i] != 45) {
            break;
        } else {
            aux1 += somalinha[i];
        }
    }

    for (int j = 0; j < 9; j++) {
        if (somacoluna[j] != 45) {
            break;
        } else {
            aux2 += somacoluna[j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            aux3 += somablocos[i][j];
        }
    }

    if (aux1 == 405 && aux2 == 405 && aux3 == 405) {
        printf(CORRETO);
    } else {
        printf(ERRADO);
    }

    return 0;
}