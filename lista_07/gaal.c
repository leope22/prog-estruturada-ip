/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  GAAL
 * ================================================================== */

/* Suzileide, estudante do primeiro semestre de BCC, estava desmotivada para estudar os
conceitos iniciais de Geometria Analítica e Álgebra Linear. Foi, então, que teve uma
brilhante ideia: desenvolver um programa que engloba todas as operações iniciais com
matrizes. Dessa forma, ela poderá testar seus conhecimentos e praticar suas
habilidades de programação.

ENTRADA
O seu programa deve receber uma matriz 3×3 como entrada, uma linha por vez.
Em seguida, um número inteiro correspondente à operação desejada, conforme
as opções a seguir:
0 - Sair: Encerra o programa e imprime a matriz;
1 - Multiplicar: Multiplica a matriz por uma constante c;
2 - Transpor: Transpõem a matriz;
3 - Sarrus: Calcula o determinante da matriz utilizando a regra de Sarrus;
4 - Laplace: Calcula o determinante da matriz utilizando a regra de Laplace com a primeira coluna;
Entre um comando e outro, haverá uma quebra de linha.

SAÍDA
Caso outra opção seja informada, o programa deverá imprimir um erro e continuar 
sua execução. Nas operações de determinante, devem ser impressos os cofatores
(no caso da regra de Laplace) e os produtos das diagonais (no caso da regra de
Sarrus), além do determinante. A matriz deverá ser impressa com um espaço após
cada número e uma quebra de linha após o final de cada linha.
OBS: Cheque as saídas da lista base e tome cuidado com os espaços: ao printar
os cofatores de Laplace, cada número deve possuir um espaço depois dele, o
mesmo também ocorre na hora de imprimir a matriz. Já no caso da regra de
Sarrus, deve existir apenas um espaço entre os produtos. */
 
#include <stdio.h>

#define INVALIDO "Opcao Invalida!\n"

void printMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3] = {{0}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int operacao;

    while (1) {
        scanf("%d", &operacao);

        switch (operacao) {
            case 0:
                printMatriz(matriz);
                return 0;

            case 1:
                int num;
                scanf("%d", &num);
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        matriz[i][j] *= num;
                    }
                }
                break;

            case 2: {
                int matrizTransposta[3][3];
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        matrizTransposta[i][j] = matriz[j][i];
                    }
                }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        matriz[i][j] = matrizTransposta[i][j];
                    }
                }
                break;
            }

            case 3: {
                int prodd1 = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                             (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                             (matriz[0][2] * matriz[1][0] * matriz[2][1]);
                int prodd2 = -( (matriz[0][1] * matriz[1][0] * matriz[2][2]) +
                                (matriz[0][0] * matriz[1][2] * matriz[2][1]) +
                                (matriz[0][2] * matriz[1][1] * matriz[2][0]) );
                int determinante = prodd1 + prodd2;
                printf("%d %d\n%d\n", prodd1, prodd2, determinante);
                break;
            }

            case 4: {
                int cof1 = matriz[0][0] * 1 * ((matriz[1][1] * matriz[2][2]) - (matriz[1][2] * matriz[2][1]));
                int cof2 = matriz[1][0] * -1 * ((matriz[0][1] * matriz[2][2]) - (matriz[0][2] * matriz[2][1]));
                int cof3 = matriz[2][0] * 1 * ((matriz[0][1] * matriz[1][2]) - (matriz[0][2] * matriz[1][1]));
                int determinante = cof1 + cof2 + cof3;
                printf("%d %d %d\n%d\n", cof1, cof2, cof3, determinante);
                break;
            }

            default:
                printf(INVALIDO);
        }
    }

    return 0;
}