/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Joquempô
 * ================================================================== */

/* Caio e Caruso estão desenvolvendo um site juntos. Quando descobriram um erro no código,
   passaram a discutir qual dos dois seria o responsável por corrigir o problema. Para resolver
   esse impasse, recrutaram você, programador serelepe, para implementar uma solução adulta e
   responsável: o velho jogo de pedra, papel e tesoura.

   Nesse jogo, cada jogador escolhe um dos 3 objetos para jogar. Ambos revelam suas escolhas
   simultaneamente. A vitória é decidida pelas regras abaixo:
   - Pedra vence tesoura
   - Papel vence pedra
   - Tesoura vence Papel

   No caso de ambos jogadores selecionarem o mesmo objeto, ocorre um empate e jogam novamente.
   Nessa versão do jogo, vence aquele que conseguir 3 vitórias primeiro.

   Sabendo do funcionamento do jogo, implemente uma versão básica do mesmo, onde um jogador
   de cada vez escolhe seu objeto, e então quando ambos selecionam, imprime o resultado.

   ENTRADAS:
   Seu programa deve receber um caractere de cada jogador todo turno, que corresponde aos
   objetos do jogo (R = Pedra, P = Papel, T = Tesoura). Os turnos continuam até que o jogo
   acabe.

   SAÍDAS:
   A cada turno, será impresso na tela o resultado daquele turno. Caso, durante o turno, um
   jogador insira um caractere não correspondente a nenhuma letra, a mensagem "Entrada inválida!"
   será exibida na tela e aquele jogador deverá escolher novamente. Ao fim do jogo, é
   impresso o jogador vitorioso e o placar final. */

#include <stdio.h>

#define EMPATE "Empate!\n"
#define JOGADOR1 "Jogador 1 venceu!\n"
#define JOGADOR2 "Jogador 2 venceu!\n"
#define VENCEDOR1 "Jogador 1 venceu a partida!\n"
#define VENCEDOR2 "Jogador 2 venceu a partida!\n"
#define PLACAR "Placar final: J1 - %d, J2 - %d\n"
#define EI "Entrada inválida!\n"

int main() {
    char jogador1, jogador2;
    int vitorias_jogador1 = 0, vitorias_jogador2 = 0;

    while (vitorias_jogador1 < 3 && vitorias_jogador2 < 3) {
        do {
            scanf(" %c", &jogador1);
            if (jogador1 != 'R' && jogador1 != 'P' && jogador1 != 'T') {
                printf(EI);
            }
        } while (jogador1 != 'R' && jogador1 != 'P' && jogador1 != 'T');

        do {
            scanf(" %c", &jogador2);
            if (jogador2 != 'R' && jogador2 != 'P' && jogador2 != 'T') {
                printf(EI);
            }
        } while (jogador2 != 'R' && jogador2 != 'P' && jogador2 != 'T');

        if ((jogador1 == 'R' && jogador2 == 'P') ||
            (jogador1 == 'P' && jogador2 == 'T') ||
            (jogador1 == 'T' && jogador2 == 'R')) {
            printf(JOGADOR2);
            vitorias_jogador2++;
        } else if ((jogador1 == 'P' && jogador2 == 'R') ||
                   (jogador1 == 'T' && jogador2 == 'P') ||
                   (jogador1 == 'R' && jogador2 == 'T')) {
            printf(JOGADOR1);
            vitorias_jogador1++;
        } else {
            printf(EMPATE);
        }
    }

    if (vitorias_jogador1 >= 3) {
        printf(VENCEDOR1);
        printf(PLACAR, vitorias_jogador1, vitorias_jogador2);
    } else {
        printf(VENCEDOR2);
        printf(PLACAR, vitorias_jogador1, vitorias_jogador2);
    }

    return 0;
}