/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Sequência de Recamán
 * ================================================================== */

/* Sherlock e seu amigo Watson, navegando pela enciclopédia OEIS, descobriram uma
sequência chamada Sequência de Recamán. Com base nela, inventaram um jogo empolgante!
A sequência é formada por saltos para frente ou para trás. O tamanho de cada salto
inicia em um e incrementa uma unidade por vez. O salto é dado para trás caso o número
resultante não seja negativo e não tenha aparecido anteriormente na sequência, caso
contrário, o salto é para frente. Sendo R(0) = 0, começamos com o salto 1: R(0) - 1 = -1,
por ser negativo, o passo é para frente, logo, R(1) = R(0) + 1 = 1. O próximo salto é 2:
R(1) - 2 = -1, por ser negativo, o passo é para frente, logo, R(2) = R(1) + 2 = 3.
Para o salto 3: R(2) - 3 = 0, por já ter aparecido anteriormente na sequência, o
passo é para frente, logo, R(3) = R(2) + 3 = 6. Em seguida, o salto 4: R(3) - 4 = 2,
como é um número positivo e não apareceu anteriormente, ele é mantido. E a sequência
segue assim por diante. O desafio do jogo é: supondo que os competidores não saibam
a sequência decor, cada um deve escolher um n-ésimo termo da Sequência de Recamán.
Vence quem escolher o termo com R(n) maior.

ENTRADAS
A entrada consistirá de uma série de linhas, cada uma contendo a jogada n (0 < n 620.000)
dos dois jogadores, separadas por um espaço. O fim da entrada é indicado por uma linha
com valor zero (0).

SAÍDAS
A saída consistirá de uma série de linhas, uma para cada jogada. Cada saída indicará qual
jogador é o ganhador, 0 para empate, 1 para o primeiro jogador e 2 para o segundo jogador.

Dicas
• Em caso de dúvidas, consulte a página da Sequência de Recamán na enciclopédia OEIS
(em inglês) e/ou também o vídeo do canal Numberphile (em inglês com legendas em português) */
 
#include <stdio.h>

int main() {
    long int seqr[20000], termo1, termo2, i = 1;
    seqr[0] = 0;

    do {
        scanf("%ld", &termo1);

        if (termo1 == 0) {
            return 0;
        }

        scanf("%ld", &termo2);

        if (termo2 == 0) {
            return 0;
        }

        while (i <= termo1 || i <= termo2) {
            seqr[i] = (seqr[i - 1] - i);

            if (seqr[i] <= 0) {
                seqr[i] = (seqr[i - 1] + i);
            } else if (seqr[i] > 0) {
                for (long int j = 1; j < i; j++) {
                    if (seqr[i] == seqr[j]) {
                        seqr[i] = (seqr[i - 1] + i);
                        break;
                    }
                }
            }
            i++;
        }

        if (seqr[termo1] > seqr[termo2]) {
            printf("1\n");
        } else if (seqr[termo1] < seqr[termo2]) {
            printf("2\n");
        } else if (seqr[termo1] == seqr[termo2]) {
            printf("0\n");
        }
    } while (termo1 != 0);

    return 0;
}