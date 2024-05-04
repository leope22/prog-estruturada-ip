/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Ao Fundo da Piscina
 * ================================================================== */

/* Seu Pacheco, dono de uma pequena construtora de piscinas, planeja melhorar seu processo
de produção com um programa que o ajude a calcular seus custos. Você decidiu ajudar Seu
Pacheco com seus vastos conhecimentos em C.

ENTRADAS:
Escreva um programa que receba, em metros, a altura, comprimento e largura da piscina,
separados por uma quebra de linha.

SAÍDA:
Imprima na tela o custo total dos ladrilhos para sua construção, assumindo que o metro
quadrado do ladrilho custa R$ 115.00. */

#include <stdio.h>

int main() {
    float altura, comprimento, largura;
    
    // Recebendo as dimensões da piscina em metros
    scanf("%f", &altura);
    scanf("%f", &comprimento);
    scanf("%f", &largura);
    
    // Calculando a área total dos ladrilhos necessários
    float areaTotal = (2 * altura * comprimento) + (2 * altura * largura) + (comprimento * largura);
    
    // Calculando o custo total dos ladrilhos
    float custoTotal = areaTotal * 115.0;
    
    // Imprimindo o custo total com duas casas decimais
    printf("%.2f\n", custoTotal);
    
    return 0;
}