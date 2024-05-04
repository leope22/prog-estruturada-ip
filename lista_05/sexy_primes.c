/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Sexy Primes
 * ================================================================== */

/* Sexy prime (primos sexy, em inglês) são números primos que diferem em 6 unidades.
O termo ‘sexy prime’ é um trocadilho derivado da palavra ‘six’ para ‘sexy’. Se P1 e
P2 são dois números primos sexy tal que P2 > P1, então tem-se que:

P2 = P1 + 6.
Por exemplo, 5 e 11.

Faça um programa que imprima todos os primos sexy até um determinado valor de entrada.

ENTRADAS
Número inteiro que representa o valor máximo de P1.

SAÍDA
Todos os pares ordenados de primos sexy até o valor máximo informado. Todos os pares
devem estar no formato (P1, P2), acompanhados de uma quebra de linha (“\n”). */

#include <stdio.h>

int main() {
    int valormax, p1, p2, div, prsix, numdivp1, numdivp2;
    
    scanf("%d", &valormax);
    
    for(p1 = 1; p1 < valormax; p1++) {
        p2 = p1 + 6;
        prsix = p2 - p1;
        div = 1; 
        numdivp1 = 0; 
        numdivp2 = 0;
        
        do {
            if(p1 % div == 0) {
                numdivp1++;
            }
            if(p2 % div == 0) {
                numdivp2++;
            }
            div++;
        } while (div <= p2);
        
        if (prsix == 6 && numdivp1 == 2 && numdivp2 == 2) {
            printf("(%d, %d)\n", p1, p2);
        }
    }
    
    return 0;
}