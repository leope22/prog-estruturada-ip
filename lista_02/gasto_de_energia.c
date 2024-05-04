/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Gasto de energia
 * ================================================================== */

/* Um dos maiores problemas da vida adulta é a administração das contas a pagar.
Imposto de renda, conta de água, gastos com alimentos, são responsabilidades
financeiras do dia a dia. A conta de luz, por exemplo, é calculada de acordo
com os gastos em kW (quilowatts) por hora, sendo que cada eletrodoméstico gasta
uma quantidade de Watts diferente (dado pela potência do equipamento).
Você, sendo um exímio programador, conhecendo as potências de cada eletrodoméstico,
e o valor do kWh, decide criar um programa que ajude a calcular o valor da conta
de luz que chegará no fim do mês, baseado na tabela a seguir:

Eletrodoméstico    Potência (W)
Geladeira          130
Micro-ondas        2000
Chuveiro           3500
Aspirador          100
Computador         180

Observação:
- O valor do kWh é de R$ 0.525.

ENTRADA
Seu programa deve receber o tempo em horas e minutos de uso mensal de cada
eletrodoméstico na mesma sequência da tabela acima.

SAÍDAS
A saída do seu programa deve ser composta pelo valor total mensal da conta
de luz, em reais, acompanhado de uma quebra de linha. Como a saída deve ser
um valor monetário, ele deve conter duas casas decimais. */

#include <stdio.h>

int main() {
    float horasGeladeira, minutosGeladeira, horasMicroondas, minutosMicroondas, horasChuveiro, minutosChuveiro, horasAspirador, minutosAspirador, horasComputador, minutosComputador;
    
    // Recebendo o tempo de uso mensal de cada eletrodoméstico em horas e minutos
    scanf("%f %f", &horasGeladeira, &minutosGeladeira);
    scanf("%f %f", &horasMicroondas, &minutosMicroondas);
    scanf("%f %f", &horasChuveiro, &minutosChuveiro);
    scanf("%f %f", &horasAspirador, &minutosAspirador);
    scanf("%f %f", &horasComputador, &minutosComputador);
    
    // Convertendo os minutos para horas e somando ao tempo total
    horasGeladeira += minutosGeladeira / 60;
    horasMicroondas += minutosMicroondas / 60;
    horasChuveiro += minutosChuveiro / 60;
    horasAspirador += minutosAspirador / 60;
    horasComputador += minutosComputador / 60;
    
    // Calculando o consumo mensal de cada eletrodoméstico em kWh e somando os valores
    float consumoTotal = (horasGeladeira * 130 + horasMicroondas * 2000 + horasChuveiro * 3500 + horasAspirador * 100 + horasComputador * 180) * 0.000525;
    
    // Imprimindo o valor total da conta de luz em reais com duas casas decimais
    printf("R$%.2f\n", consumoTotal);
    
    return 0;
}