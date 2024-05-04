/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Média das notas
 * ================================================================== */

/* Considerando que as listas de exercícios semanais da disciplina de Introdução à Programação
são divididas em duas metades, cada uma com diferentes pesos, este programa calcula a média da 
segunda metade das listas para que o aluno seja aprovado de acordo com a média final estabelecida.

ENTRADAS:
(a) Média M;
(b) Média simples das notas das primeiras listas;
(c) Peso da primeira metade das listas;
(d) Peso da segunda metade.

A média final é calculada conforme a fórmula:
M = (pesoPrimeiraMet * mediaPrimeiraMet + pesoSegundaMet * mediaSegundaMet) / (pesoPrimeiraMet + pesoSegundaMet).

SAÍDA:
O programa imprime uma única linha contendo a média das notas da segunda metade das listas, 
com duas casas decimais e uma quebra de linha ("\n"). */

#include <stdio.h>

int main() {
    // Declaração das variáveis para as médias e pesos
    float media_total, media_primeira_metade, peso_primeira_metade, peso_segunda_metade, media_segunda_metade;

    // Entrada das médias e pesos
    scanf("%f", &media_total);
    scanf("%f", &media_primeira_metade);
    scanf("%f", &peso_primeira_metade);
    scanf("%f", &peso_segunda_metade);

    // Cálculo da média da segunda metade das listas
    media_segunda_metade = (media_total * (peso_primeira_metade + peso_segunda_metade) - peso_primeira_metade * media_primeira_metade) / peso_segunda_metade;

    // Saída da média da segunda metade das listas
    printf("%.2f\n", media_segunda_metade);

    return 0;
}