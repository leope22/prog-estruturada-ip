/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Horário ônibus
 * ================================================================== */

/* Joca, um calouro da UFSCar que mora longe do campus, está se planejando para o retorno das aulas presenciais.
Ele precisa calcular o horário que deve acordar todos os dias para chegar a tempo às aulas. Como está cansado de
ter que refazer esses cálculos com frequência, Joca decidiu pedir ajuda a você, um programador habilidoso,
para criar um programa que faça esse cálculo automaticamente.

ENTRADA:
O programa deve receber duas entradas:
- O tempo previsto para chegar ao campus (em minutos), um número inteiro 0 < n ≤ 300;
- O horário em que Joca precisa estar na faculdade, representado por dois inteiros: 
horas (h) e minutos (m), onde 8 ≤ h < 22 e 0 ≤ m < 60.

SAÍDA:
O programa deve imprimir o horário que Joca deve sair de casa para chegar à faculdade 
no horário especificado. O horário deve estar no formato de HH:MM (horas e minutos), 
seguido de uma quebra de linha ("\n"). */

#include <stdio.h>

int main() {
    int tempo_chegada_campus, horario_faculdade_horas, horario_faculdade_minutos;

    scanf("%i", &tempo_chegada_campus);
    scanf("%i", &horario_faculdade_horas);
    scanf("%i", &horario_faculdade_minutos);

    int horario_sair_casa_minutos = (horario_faculdade_horas * 60) + horario_faculdade_minutos;
    int minutos_a_subtrair = horario_sair_casa_minutos - tempo_chegada_campus;
    int horas_saida_casa = minutos_a_subtrair / 60;
    int minutos_saida_casa = minutos_a_subtrair % 60;

    printf("%02d:%02d\n", horas_saida_casa, minutos_saida_casa);

    return 0;
}