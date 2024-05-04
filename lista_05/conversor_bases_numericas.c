/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Conversor de bases númericas
 * ================================================================== */

/* Após a terrível prova da professora Yeda, você, programador auspicioso, quer implementar
um conversor de bases numéricas, a fim de conferir se suas conversões estavam corretas.
O programa terá as seguintes opções:
(0) sair do programa;
(1) conversão binária para decimal: recebe o número em binário na ordem LSB a ser
convertido para decimal;
(2) conversão de decimal para binário: recebe o número decimal a ser convertido
para binário na ordem LSB.

ENTRADA
Seu programa deve inicialmente esperar uma das opções de entrada, 0, 1 ou 2. Caso receba 0,
o programa deve parar imediatamente. Caso receba 1, deve ser solicitada uma sequência
de dígitos binários na ordem LSB, separados por espaço e terminada por -1. Caso receba 2,
deve ser solicitado um número decimal (0 ≤ n ≤ 10.000) a ser convertido para binário
em ordem LSB.

SAÍDA
A saída do seu programa deve conter o número convertido de acordo com o pedido na entrada,
sem conter espaços entre os dígitos, e o programa só deve encerrar somente quando for
recebida a entrada 0. */

#include <stdio.h>
#include <math.h>

int main() {
    char c0;
    long int a = 1, b, d, e = 0, c = 0, f = 0, g, h, i, cont0, cont1, cont2, cont3; 
    float e1[100];
	
    while (a == 1 || a == 2) {
        a = 0;
        e = 0;
        c = 0;
        f = 0;
        cont1 = 0;
        
        scanf("%ld", &a);
        
        switch (a) {
            case 0:
                return 0;
            case 1:
                for (cont1 = 0; ; cont1++) {
                    scanf("%ld", &e);
                    e1[cont1] = e;
                    if (e != -1) {
                        c = c - e1[cont1] * pow(2, cont1);
                    } else {
                        break;
                    }
                }
                printf("%ld\n", -c);
                break;
            case 2:
                scanf("%ld", &f);
                for (cont2 = 0; ; cont2++) {
                    g = (f % 2) == 0 ? 0 : 1;
                    f = f / 2;
                    printf("%ld", g);
                    if (f == 0) {
                        printf("\n");
                        break;
                    }
                }
                break;
            default:
                break;
        }
    }
    return 0;
}