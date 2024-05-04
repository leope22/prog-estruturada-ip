/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Histograma de Sinal
 * ================================================================== */

/* O professor Fábio Green, de uma hipotética disciplina de redes, propôs com um 
projeto muito interessante. Ele possibilita ao usuário obter estatísticas sobre as 
redes wireless que o seu dispositivo está recebendo. Você foi escolhido para participar
deste projeto e está encarregado de desenvolver o histograma de qualidade de recepção
de sinal, que contará com três estimativas: valor de recepção máximo, mediano e mínimo.
Esses valores serão com base em uma amostragem informada, sendo dado o período das
amostragens e a taxa de amostragem. A unidade de medida das amostras é em dBm
(decibel miliwatt), sendo que para as redes wireless 802.11 o valor máximo de
recepção é de −10 dBm, e o mínimo −100dBm.

ENTRADAS
Cada caso de teste é composto por várias linhas.
Cada linha consiste de dois inteiros p e r, que correspondem a, 
respectivamente, o período das amostragens (em horas) (0 < p 6168) e
a taxa de amostragem (em minutos) (0 < t 61440), seguidos de inteiros
a (−100 ≤ a ≤ −10), que representam todas as amostras efetuadas de
determinada rede wireless no período informado. O final da entrada
é indicado por uma linha que contém apenas o valor zero (0).

SAÍDA 
Para cada um dos casos de teste da entrada, seu programa deve imprimir
uma única linha, contendo uma linha pontilhada contínua, a partir do
começo da linha, que representa a mediana; dois pontos (:) para o mínimo;
e um ponto de exclamação (!) para o máximo. Os valores da linha começam
em -100. Os valores devem ter arredondamento para baixo. Caso dois ou
mais resultados ocupem a mesma posição, deve ser seguida a ordem de
prioridade: máximo, mínimo, mediana. */

#include <stdio.h>
#include <math.h>

int main() {
    long int hora, minuto, horamin, i = 0, numero, maior, menor, aux, mediana;
    
    do {
        scanf("%ld", &hora);
        
        if (hora == 0) {
            return 0;
        }
        
        switch (hora) {
            case 0:
                return 0;
            default:
                scanf("%ld", &minuto);
                
                if (minuto == 0) {
                    return 0;
                }
                
                horamin = hora * 60;
                i = horamin / minuto;
                long int numeros[i];
                
                for (long int j = 0; j < i; j++) {
                    scanf("%ld", &numero);
                    numeros[j] = numero;
                }
                
                if (i == 1) {
                    for (int g = -100; g < numero; g++) {
                        printf(".");
                    }
                    printf("!");
                    printf("\n");
                    break;
                } else {
                    maior = numeros[0];
                    
                    for (long int k = 1; k < i; k++) {
                        if (numeros[k] >= maior) {
                            maior = numeros[k];
                        }
                    }
                    
                    menor = numeros[0];
                    
                    for (long int l = 1; l < i; l++) {
                        if (numeros[l] <= menor) {
                            menor = numeros[l];
                        }
                    }
                    
                    for (int contador = 1; contador < i; contador++) {
                        for (int p = 0; p < i - 1; p++) {
                            if (numeros[p] > numeros[p + 1]) {
                                aux = numeros[p];
                                numeros[p] = numeros[p + 1];
                                numeros[p + 1] = aux;
                            }
                        }
                    }
                    
                    if (i % 2 == 0) {
                        mediana = ((numeros[(i - 1) / 2] + numeros[((i - 1) / 2) + 1]) / 2);
                    }
                    
                    if (i % 2 != 0) {
                        mediana = (numeros[(((i - 1) - 1) / 2) + 1]);
                    }
                    
                    for (int m = -100; m < menor; m++) {
                        printf(".");
                    }
                    printf(":");
                    
                    for (int f = menor + 1; f <= mediana; f++) {
                        printf(".");
                    }
                    
                    for (int n = mediana + 1; n < maior; n++) {
                        printf(" ");
                    }
                    printf("!");
                    printf("\n");
                }
        }
    } while (hora != 0);
    return 0;
}