/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Calor Monstro
 * ================================================================== */

/* Johan, seu amigo, quer fazer uma viagem para o exterior, em um país onde utilizam uma medição
de temperatura diferente do Brasil. O problema é que ele não entende como funcionam as conversões
entre as escalas termométricas. Dessa forma, você, como um belo amigo e um exímio programador,
decide criar um programa que o ajude a converter as temperaturas mínima e máxima de Fahrenheit (F°)
para graus Celsius (C°).

ENTRADAS:
A entrada é composta por 2 números, correspondendo a temperatura mínima e máxima
(respectivamente) em Fahrenheit.

SAÍDA:
O seu programa deve imprimir em uma única linha, os valores da temperatura
mínima e máxima em Celsius, com duas casas decimais, acompanhados de quebra de linha no final. */

#include <stdio.h>

int main() {
    float temperaturaMinimaFahrenheit, temperaturaMaximaFahrenheit;
    
    // Recebendo as temperaturas mínima e máxima em Fahrenheit
    scanf("%f %f", &temperaturaMinimaFahrenheit, &temperaturaMaximaFahrenheit);
    
    // Convertendo as temperaturas de Fahrenheit para Celsius
    float temperaturaMinimaCelsius = (temperaturaMinimaFahrenheit - 32) * 5 / 9;
    float temperaturaMaximaCelsius = (temperaturaMaximaFahrenheit - 32) * 5 / 9;
    
    // Imprimindo as temperaturas em Celsius com duas casas decimais
    printf("%.2f %.2f\n", temperaturaMinimaCelsius, temperaturaMaximaCelsius);
    
    return 0;
}