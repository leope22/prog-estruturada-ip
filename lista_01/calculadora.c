/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Calculadora
 * ================================================================== */

/* Animado para iniciar seu aprendizado em C, você decide criar um programa simples e muito útil: uma calculadora!

ENTRADAS:
O programa deve receber dois números inteiros diferentes de zero e realizar as operações na seguinte ordem:
(a) soma dos dois números;
(b) subtração do primeiro pelo segundo;
(c) subtração do segundo pelo primeiro;
(d) multiplicação dos dois números;
(e) divisão do primeiro pelo segundo;
(f) divisão do segundo pelo primeiro;
(g) quociente inteiro da divisão do primeiro pelo segundo;
(h) quociente inteiro da divisão do segundo pelo primeiro;
(i) resto da divisão do primeiro pelo segundo;
(j) resto da divisão do segundo pelo primeiro;
(k) soma do resultado de todas as operações anteriores.

SAÍDAS:
Calcule e imprima um valor por linha para cada operação. Se a saída for um número real, utilize 2 casas decimais. */

#include <stdio.h>

int main() {
    // Variáveis para os números e resultados das operações
    float num1, num2;
    float soma, subtracao_positivo_para_negativo, subtracao_negativo_para_positivo, multiplicacao, divisao_positivo_por_negativo, divisao_negativo_por_positivo;
    int quociente_positivo_por_negativo, quociente_negativo_por_positivo, resto_positivo_por_negativo, resto_negativo_por_positivo;
    float soma_total;

    // Entrada dos números
    scanf("%f", &num1);
    scanf("%f", &num2);

    // Operações
    soma = num1 + num2;
    subtracao_positivo_para_negativo = num1 - num2;
    subtracao_negativo_para_positivo = num2 - num1;
    multiplicacao = num1 * num2;
    divisao_positivo_por_negativo = num1 / num2;
    divisao_negativo_por_positivo = num2 / num1;

    // Operações inteiras
    quociente_positivo_por_negativo = (int)num1 / (int)num2;
    quociente_negativo_por_positivo = (int)num2 / (int)num1;
    resto_positivo_por_negativo = (int)num1 % (int)num2;
    resto_negativo_por_positivo = (int)num2 % (int)num1;

    // Saída das operações
    printf("%.0f\n", soma);
    printf("%.0f\n", subtracao_positivo_para_negativo);
    printf("%.0f\n", subtracao_negativo_para_positivo);
    printf("%.0f\n", multiplicacao);
    printf("%.2f\n", divisao_positivo_por_negativo);
    printf("%.2f\n", divisao_negativo_por_positivo);
    printf("%i\n", quociente_positivo_por_negativo);
    printf("%i\n", quociente_negativo_por_positivo);
    printf("%i\n", resto_positivo_por_negativo);
    printf("%i\n", resto_negativo_por_positivo);

    // Cálculo da soma total
    soma_total = soma + subtracao_positivo_para_negativo + subtracao_negativo_para_positivo + multiplicacao + divisao_positivo_por_negativo + divisao_negativo_por_positivo + quociente_positivo_por_negativo + quociente_negativo_por_positivo + resto_positivo_por_negativo + resto_negativo_por_positivo;

    // Saída da soma total
    printf("%.2f\n", soma_total);

    return 0;
}