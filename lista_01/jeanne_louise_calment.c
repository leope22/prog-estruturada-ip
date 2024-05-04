/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Jeanne Louise Calment
 * ================================================================== */

/* Jeanne Louise Calment é a pessoa mais velha registrada na história humana, falecendo aos 122 anos em 1997.
Este programa recebe a idade de uma pessoa e o ano em que ela completou essa idade e imprime na tela o ano
em que ela faria 122 anos.

ENTRADAS:
A entrada consiste em duas linhas. Na primeira linha, está a idade da pessoa. Na segunda linha,
está o ano em que ela completou essa idade.

SAÍDA:
O programa imprime na tela o ano em que a pessoa completaria 122 anos, seguido por uma quebra de linha. */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    int idade, ano_completo, ano_esperado;

    // Entrada da idade da pessoa e do ano em que ela completou essa idade
    scanf("%d", &idade);
    scanf("%d", &ano_completo);

    // Cálculo do ano em que a pessoa faria 122 anos
    ano_esperado = 122 + (ano_completo - idade);

    // Saída do ano esperado
    printf("%d\n", ano_esperado);

    return 0;
}