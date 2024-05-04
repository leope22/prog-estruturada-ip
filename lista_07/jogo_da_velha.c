/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Jogo da velha
 * ================================================================== */

/* Barcus é um desenvolvedor entusiasta, e quando descobriu que você também havia
começado a programar, decidiu desafiá-lo a desenvolver um jogo que jogava bastante
em sua infância: o jogo da velha. As regras desse jogo são as seguintes:

• Dois jogadores jogam em turnos alternados, sempre iniciando pelo Jogador 1;
• A partida é disputada num “campo” 3×3, com 9 espaços para colocarem símbolos;
• Cada jogador possui um símbolo, “O” para o Jogador 1 e “X” para o Jogador 2;
• O jogo se encerra quando três símbolos iguais são posicionados seguidos na horizontal,
vertical ou na diagonal. Caso nenhum desses quesitos seja atendido e todos os espaços
já tenham sido preenchidos, o jogo termina em empate.

ENTRADAS
Seu programa deve ler as entradas de cada jogador em seus respectivos turnos, essas
entradas correspondem à posição do campo onde cada jogador vai colocar seu símbolo,
na ordem de linha e coluna.

SAÍDA
A cada turno, o programa deve analisar a entrada do jogador. Caso ele coloque um símbolo
em um campo inválido ou já ocupado, o programa deve retornar “Posição inválida!”, e
aguardar outra entrada do mesmo jogador. Ao fim da partida, o programa deve retornar
os resultados, informando o jogador vitorioso ou “Empate”.

Exemplos de E/S (os comentários entre parênteses não deverão ser exibidos):

Entrada
1 1 (Jogador 1 coloca O no centro)
0 0 (Jogador 2 coloca X no topo-esquerdo)
1 0 (Jogador 1 coloca O no centro-esquerdo)
0 1 (Jogador 2 coloca X no topo-centro)
1 2 (Jogador 1 coloca O no centro-direito)

Saída
Jogador 1 venceu! */

#include <stdio.h>

#define INVALIDO "Posicao invalida!\n"
#define EMPATE "Empate\n"
#define VENCEDOR1 "Jogador 1 venceu!\n"
#define VENCEDOR2 "Jogador 2 venceu!\n"

void printJogo(char jogo[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", jogo[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char jogo[3][3] = {{' ', ' ', ' '},
                       {' ', ' ', ' '},
                       {' ', ' ', ' '}};

    for (int turno = 0; turno < 9; turno++) {
        int linha, coluna;
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ') {
            printf(INVALIDO);
            turno--; // Repete o turno
        } else {
            if (turno % 2 == 0) {
                jogo[linha][coluna] = 'O'; // Jogador 1
            } else {
                jogo[linha][coluna] = 'X'; // Jogador 2
            }

            // Verifica se alguém ganhou
            char simbolo = jogo[linha][coluna];
            if ((jogo[linha][0] == simbolo && jogo[linha][1] == simbolo && jogo[linha][2] == simbolo) ||
                (jogo[0][coluna] == simbolo && jogo[1][coluna] == simbolo && jogo[2][coluna] == simbolo) ||
                (linha == coluna && jogo[0][0] == simbolo && jogo[1][1] == simbolo && jogo[2][2] == simbolo) ||
                (linha + coluna == 2 && jogo[0][2] == simbolo && jogo[1][1] == simbolo && jogo[2][0] == simbolo)) {
                printf("%s", (simbolo == 'O') ? VENCEDOR1 : VENCEDOR2);
                printJogo(jogo);
                return 0;
            }

            if (turno == 8) {
                printf(EMPATE);
                printJogo(jogo);
                return 0;
            }
        }
    }

    return 0;
}