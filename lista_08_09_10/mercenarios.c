/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Mercenários
 * ================================================================== */

/* Recentemente, o jogo Coração de Pedra lançou um novo modo. Chamado de “mercenários”, o
jogo consiste em uma batalha de cartas que possuem vida, dano e tipo, que pode ser Green
(lutador), Red (guerreiro) ou Blue (mago).

Os tipos das cartas (Green, Red ou Blue) influenciam na quantidade de dano que elas causam
nas outras, de acordo com as seguintes relações:
• Green é forte contra Blue;
• Red é forte contra Green;
• Blue é forte contra Red;

Uma carta ser forte contra outra significa que seu dano é dobrado quando ataca.

Danilo, seu colega e grande fã do jogo, pediu sua ajuda para criar um programa para simular
as ‘batalhas’ que acontecem no Boss.

ENTRADAS
Seu programa deve receber 6 entradas no total: 3 correspondentes a carta do jogador e 3
correspondentes a carta do chefe. As entradas são, em ordem: o tipo, a vida e o dano de cada
carta, respectivamente. O tipo será informado por um caractere, enquanto a vida e o dano serão
dados como inteiros.

SAÍDA
Na sequência, o seu programa deverá simular a batalha entre as duas cartas, com cada carta
atacando uma vez por turno, e, assim que uma das cartas for derrotada, imprimir quem foi o
vencedor do duelo, além de mostrar o turno em que acabou a batalha.

Observações
• Quando uma carta ataca, ela também recebe o dano base da carta que foi atacada;
• Um turno consiste em cada carta do campo atacar uma vez;
• No começo de cada turno, o jogador sempre começa atacando;
• Se as duas cartas forem destruídas, a vitória é do Boss. */

#include <stdio.h>
 
#define JOGADOR "O jogador venceu!\n"
#define BOSS "O Boss venceu!\n"
#define TURNO "Turno %d\n"
 
typedef int status;
 
typedef struct{
    status vida;
    status dano;
    char tipo;
} carta;

int main() {
    carta jogador, boss;
    
    int i;
    
    scanf(" %c", &jogador.tipo);
    scanf("%d", &jogador.vida);
    scanf("%d", &jogador.dano);
    scanf(" %c", &boss.tipo);
    scanf("%d", &boss.vida);
    scanf("%d", &boss.dano);
 
    switch (jogador.tipo){
        case 'G':     
        if (boss.tipo == 'B'){
            for (int i = 1;;i++){
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }                
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        case 'R':
        if (boss.tipo == 'B'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){
            for (int i = 1;;i++){
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        case 'B':
        if (boss.tipo == 'B'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        default:
          break;
    }
    return 0;
}